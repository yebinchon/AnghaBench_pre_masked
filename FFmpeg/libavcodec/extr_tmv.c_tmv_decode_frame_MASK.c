
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int width; int height; } ;
struct TYPE_10__ {int key_frame; int** data; int palette_has_changed; int* linesize; int pict_type; } ;
struct TYPE_9__ {int* data; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int,int ,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(AVCodecContext *VAR_6, void *VAR_7,
                            int *VAR_8, AVPacket *VAR_9)
{
    AVFrame *VAR_10 = VAR_7;
    const uint8_t *VAR_11 = VAR_9->data;
    uint8_t *VAR_12;
    unsigned VAR_13 = VAR_6->width >> 3;
    unsigned VAR_14 = VAR_6->height >> 3;
    unsigned VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
    int VAR_20;

    if ((VAR_20 = FUNC_2(VAR_6, VAR_10, 0)) < 0)
        return VAR_20;

    if (VAR_9->size < 2*VAR_14*VAR_13) {
        FUNC_0(VAR_6, VAR_2,
               "Input buffer too small, truncated sample?\n");
        *VAR_8 = 0;
        return VAR_0;
    }

    VAR_10->pict_type = VAR_3;
    VAR_10->key_frame = 1;
    VAR_12 = VAR_10->data[0];

    VAR_10->palette_has_changed = 1;
    FUNC_3(VAR_10->data[1], VAR_5, 16 * 4);
    FUNC_4(VAR_10->data[1] + 16 * 4, 0, VAR_1 - 16 * 4);

    for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++) {
        for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++) {
            VAR_19 = *VAR_11++;
            VAR_18 = *VAR_11 >> 4;
            VAR_17 = *VAR_11++ & 0xF;
            FUNC_1(VAR_12 + VAR_15 * 8, VAR_10->linesize[0],
                            VAR_4, 8, VAR_19, VAR_17, VAR_18);
        }
        VAR_12 += VAR_10->linesize[0] * 8;
    }

    *VAR_8 = 1;

    return VAR_9->size;
}
