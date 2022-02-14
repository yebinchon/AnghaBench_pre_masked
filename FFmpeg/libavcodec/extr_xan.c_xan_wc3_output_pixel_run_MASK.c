
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int frame_size; TYPE_1__* avctx; } ;
typedef TYPE_2__ XanContext ;
struct TYPE_8__ {int* linesize; int ** data; } ;
struct TYPE_6__ {int width; } ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int const*,int) ;

__attribute__((used)) static inline void FUNC_2(XanContext *VAR_0, AVFrame *VAR_1,
    const uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10 = VAR_0->avctx->width;
    uint8_t *VAR_11;

    VAR_11 = VAR_1->data[0];
    VAR_6 = VAR_1->linesize[0];
    VAR_7 = VAR_6 - VAR_10;
    VAR_8 = VAR_4 * VAR_6 + VAR_3;
    VAR_9 = VAR_3;
    while (VAR_5 && VAR_8 < VAR_0->frame_size) {
        int VAR_12 = FUNC_0(VAR_5, VAR_10 - VAR_9);
        FUNC_1(VAR_11 + VAR_8, VAR_2, VAR_12);
        VAR_5 -= VAR_12;
        VAR_8 += VAR_12;
        VAR_2 += VAR_12;
        VAR_9 += VAR_12;

        if (VAR_9 >= VAR_10) {
            VAR_8 += VAR_7;
            VAR_9 = 0;
        }
    }
}
