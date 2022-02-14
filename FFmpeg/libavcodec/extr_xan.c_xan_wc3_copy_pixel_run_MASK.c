
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int frame_size; TYPE_6__* avctx; TYPE_1__* last_frame; } ;
typedef TYPE_2__ XanContext ;
struct TYPE_10__ {int width; int height; } ;
struct TYPE_9__ {int* linesize; int ** data; } ;
struct TYPE_7__ {int ** data; } ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static inline void FUNC_4(XanContext *VAR_0, AVFrame *VAR_1,
                                          int VAR_2, int VAR_3,
                                          int VAR_4, int VAR_5,
                                          int VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9, VAR_10;
    int VAR_11, VAR_12;
    int VAR_13 = VAR_0->avctx->width;
    uint8_t *VAR_14, *VAR_15;

    if (VAR_3 + VAR_6 < 0 || VAR_3 + VAR_6 >= VAR_0->avctx->height ||
        VAR_2 + VAR_5 < 0 || VAR_2 + VAR_5 >= VAR_0->avctx->width)
        return;

    VAR_14 = VAR_1->data[0];
    VAR_15 = VAR_0->last_frame->data[0];
    if (!VAR_15)
        VAR_15 = VAR_14;
    VAR_7 = VAR_1->linesize[0];
    VAR_8 = VAR_7 - VAR_13;
    VAR_9 = VAR_3 * VAR_7 + VAR_2;
    VAR_11 = VAR_2;
    VAR_10 = (VAR_3 + VAR_6) * VAR_7 + VAR_2 + VAR_5;
    VAR_12 = VAR_2 + VAR_5;

    if (VAR_15 == VAR_14 && FUNC_0(VAR_5 + VAR_13*VAR_6) < VAR_4) {
         FUNC_2(VAR_0->avctx, "Overlapping copy");
         return ;
    }

    while (VAR_4 &&
           VAR_9 < VAR_0->frame_size &&
           VAR_10 < VAR_0->frame_size) {
        int VAR_16 = FUNC_1(VAR_4, VAR_13 - VAR_11,
                           VAR_13 - VAR_12);

        FUNC_3(VAR_14 + VAR_9,
               VAR_15 + VAR_10, VAR_16);
        VAR_4 -= VAR_16;
        VAR_9 += VAR_16;
        VAR_10 += VAR_16;
        VAR_11 += VAR_16;
        VAR_12 += VAR_16;

        if (VAR_11 >= VAR_13) {
            VAR_9 += VAR_8;
            VAR_11 = 0;
        }

        if (VAR_12 >= VAR_13) {
            VAR_10 += VAR_8;
            VAR_12 = 0;
        }
    }
}
