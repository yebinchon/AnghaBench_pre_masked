
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int* scratch_buffer; int buffer_size; int* y_buffer; TYPE_1__* pic; int gb; } ;
typedef TYPE_2__ XanContext ;
struct TYPE_10__ {int height; int width; TYPE_2__* priv_data; } ;
struct TYPE_8__ {int** data; int * linesize; } ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_2__*,int*,int) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_2)
{
    XanContext *VAR_3 = VAR_2->priv_data;
    uint8_t *VAR_4, *VAR_5 = VAR_3->scratch_buffer;
    int VAR_6, VAR_7;
    int VAR_8, VAR_9;
    int VAR_10;

    if ((VAR_10 = FUNC_3(VAR_2, FUNC_1(&VAR_3->gb))) != 0)
        return VAR_10;

    FUNC_2(&VAR_3->gb, 16, VAR_1);
    VAR_10 = FUNC_4(VAR_3, VAR_5,
                          VAR_3->buffer_size >> 1);
    if (VAR_10) {
        FUNC_0(VAR_2, VAR_0, "Luma decoding failed\n");
        return VAR_10;
    }

    VAR_4 = VAR_3->y_buffer;
    for (VAR_8 = 0; VAR_8 < VAR_2->height; VAR_8++) {
        VAR_7 = (VAR_4[0] + (*VAR_5++ << 1)) & 0x3F;
        VAR_4[0] = VAR_7;
        for (VAR_9 = 1; VAR_9 < VAR_2->width - 1; VAR_9 += 2) {
            VAR_6 = (VAR_4[VAR_9 + 1] + (*VAR_5++ << 1)) & 0x3F;
            VAR_4[VAR_9] = (VAR_7 + VAR_6) >> 1;
            VAR_4[VAR_9+1] = VAR_6;
            VAR_7 = VAR_6;
        }
        VAR_4[VAR_9] = VAR_7;
        VAR_4 += VAR_2->width;
    }

    VAR_5 = VAR_3->y_buffer;
    VAR_4 = VAR_3->pic->data[0];
    for (VAR_9 = 0; VAR_9 < VAR_2->height; VAR_9++) {
        for (VAR_8 = 0; VAR_8 < VAR_2->width; VAR_8++)
            VAR_4[VAR_8] = (VAR_5[VAR_8] << 2) | (VAR_5[VAR_8] >> 3);
        VAR_5 += VAR_2->width;
        VAR_4 += VAR_3->pic->linesize[0];
    }

    return 0;
}
