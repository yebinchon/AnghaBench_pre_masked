
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int* scratch_buffer; int buffer_size; int* y_buffer; TYPE_1__* pic; int gb; } ;
typedef TYPE_2__ XanContext ;
struct TYPE_11__ {int width; int height; TYPE_2__* priv_data; } ;
struct TYPE_9__ {int** data; int * linesize; } ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ) ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,unsigned int) ;
 int FUNC_6 (TYPE_2__*,int*,int) ;
 int FUNC_7 (TYPE_2__*,int*,int) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_3)
{
    XanContext *VAR_4 = VAR_3->priv_data;
    uint8_t *VAR_5, *VAR_6, *VAR_7 = VAR_4->scratch_buffer;
    unsigned VAR_8, VAR_9;
    int VAR_10, VAR_11;
    int VAR_12, VAR_13;
    int VAR_14;

    VAR_8 = FUNC_2(&VAR_4->gb);
    VAR_9 = FUNC_2(&VAR_4->gb);

    if ((VAR_14 = FUNC_5(VAR_3, VAR_8)) != 0)
        return VAR_14;

    if (VAR_9 >= FUNC_4(&VAR_4->gb)) {
        FUNC_1(VAR_3, VAR_1, "Ignoring invalid correction block position\n");
        VAR_9 = 0;
    }
    FUNC_3(&VAR_4->gb, 12, VAR_2);
    VAR_14 = FUNC_7(VAR_4, VAR_7, VAR_4->buffer_size >> 1);
    if (VAR_14) {
        FUNC_1(VAR_3, VAR_0, "Luma decoding failed\n");
        return VAR_14;
    }

    VAR_5 = VAR_4->y_buffer;
    VAR_11 = *VAR_7++;
    VAR_5[0] = VAR_11 << 1;
    for (VAR_13 = 1; VAR_13 < VAR_3->width - 1; VAR_13 += 2) {
        VAR_10 = (VAR_11 + *VAR_7++) & 0x1F;
        VAR_5[VAR_13] = VAR_11 + VAR_10;
        VAR_5[VAR_13+1] = VAR_10 << 1;
        VAR_11 = VAR_10;
    }
    VAR_5[VAR_13] = VAR_11 << 1;
    VAR_6 = VAR_5;
    VAR_5 += VAR_3->width;

    for (VAR_12 = 1; VAR_12 < VAR_3->height; VAR_12++) {
        VAR_11 = ((VAR_6[0] >> 1) + *VAR_7++) & 0x1F;
        VAR_5[0] = VAR_11 << 1;
        for (VAR_13 = 1; VAR_13 < VAR_3->width - 1; VAR_13 += 2) {
            VAR_10 = ((VAR_6[VAR_13 + 1] >> 1) + *VAR_7++) & 0x1F;
            VAR_5[VAR_13] = VAR_11 + VAR_10;
            VAR_5[VAR_13+1] = VAR_10 << 1;
            VAR_11 = VAR_10;
        }
        VAR_5[VAR_13] = VAR_11 << 1;
        VAR_6 = VAR_5;
        VAR_5 += VAR_3->width;
    }

    if (VAR_9) {
        int VAR_15;

        FUNC_3(&VAR_4->gb, 8 + VAR_9, VAR_2);
        VAR_15 = FUNC_6(VAR_4, VAR_4->scratch_buffer, VAR_4->buffer_size / 2);
        if (VAR_15 < 0)
            VAR_15 = 0;
        else
            VAR_15 = FUNC_0(VAR_15, VAR_4->buffer_size/2 - 1);

        for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
            VAR_4->y_buffer[VAR_12*2+1] = (VAR_4->y_buffer[VAR_12*2+1] + (VAR_4->scratch_buffer[VAR_12] << 1)) & 0x3F;
    }

    VAR_7 = VAR_4->y_buffer;
    VAR_5 = VAR_4->pic->data[0];
    for (VAR_13 = 0; VAR_13 < VAR_3->height; VAR_13++) {
        for (VAR_12 = 0; VAR_12 < VAR_3->width; VAR_12++)
            VAR_5[VAR_12] = (VAR_7[VAR_12] << 2) | (VAR_7[VAR_12] >> 3);
        VAR_7 += VAR_3->width;
        VAR_5 += VAR_4->pic->linesize[0];
    }

    return 0;
}
