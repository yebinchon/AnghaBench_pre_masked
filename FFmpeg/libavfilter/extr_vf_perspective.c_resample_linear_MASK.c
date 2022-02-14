
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int* dst; int dst_linesize; int* src; int src_linesize; int w; int h; int hsub; int vsub; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {int* linesize; int** pv; } ;
typedef TYPE_2__ PerspectiveContext ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_2, void *VAR_3,
                           int VAR_4, int VAR_5)
{
    PerspectiveContext *VAR_6 = VAR_2->priv;
    ThreadData *VAR_7 = VAR_3;
    uint8_t *VAR_8 = VAR_7->dst;
    int VAR_9 = VAR_7->dst_linesize;
    uint8_t *VAR_10 = VAR_7->src;
    int VAR_11 = VAR_7->src_linesize;
    int VAR_12 = VAR_7->w;
    int VAR_13 = VAR_7->h;
    int VAR_14 = VAR_7->hsub;
    int VAR_15 = VAR_7->vsub;
    int VAR_16 = (VAR_13 * VAR_4) / VAR_5;
    int VAR_17 = (VAR_13 * (VAR_4+1)) / VAR_5;
    const int VAR_18 = VAR_6->linesize[0];
    int VAR_19, VAR_20;

    for (VAR_20 = VAR_16; VAR_20 < VAR_17; VAR_20++){
        int VAR_21 = VAR_20 << VAR_15;
        for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++){
            int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28, VAR_29, VAR_30;

            VAR_27 = VAR_19 << VAR_14;
            VAR_22 = VAR_6->pv[VAR_27 + VAR_21 * VAR_18][0] >> VAR_14;
            VAR_23 = VAR_6->pv[VAR_27 + VAR_21 * VAR_18][1] >> VAR_15;
            VAR_24 = VAR_22 & (VAR_0 - 1);
            VAR_25 = VAR_23 & (VAR_0 - 1);
            VAR_22 >>= VAR_1;
            VAR_23 >>= VAR_1;

            VAR_28 = VAR_22 + VAR_23 * VAR_11;
            VAR_29 = VAR_0 - VAR_24;
            VAR_30 = VAR_0 - VAR_25;

            if ((unsigned)VAR_22 < (unsigned)(VAR_12 - 1)){
                if((unsigned)VAR_23 < (unsigned)(VAR_13 - 1)){
                    VAR_26 = VAR_30 * (VAR_29 * VAR_10[VAR_28] + VAR_24 * VAR_10[VAR_28 + 1]) +
                          VAR_25 * (VAR_29 * VAR_10[VAR_28 + VAR_11] + VAR_24 * VAR_10[VAR_28 + VAR_11 + 1]);
                    VAR_26 = (VAR_26 + (1 << (VAR_1 * 2 - 1)))>> (VAR_1 * 2);
                } else {
                    if (VAR_23 < 0)
                        VAR_23 = 0;
                    else
                        VAR_23 = VAR_13 - 1;
                    VAR_28 = VAR_22 + VAR_23 * VAR_11;
                    VAR_26 = VAR_29 * VAR_10[VAR_28] + VAR_24 * VAR_10[VAR_28 + 1];
                    VAR_26 = (VAR_26 + (1 << (VAR_1 - 1))) >> VAR_1;
                }
            } else {
                if (VAR_22 < 0)
                    VAR_22 = 0;
                else
                    VAR_22 = VAR_12 - 1;
                if ((unsigned)VAR_23 < (unsigned)(VAR_13 - 1)){
                    VAR_28 = VAR_22 + VAR_23 * VAR_11;
                    VAR_26 = VAR_30 * VAR_10[VAR_28] + VAR_25 * VAR_10[VAR_28 + VAR_11];
                    VAR_26 = (VAR_26 + (1 << (VAR_1 - 1))) >> VAR_1;
                } else {
                    if (VAR_23 < 0)
                        VAR_23 = 0;
                    else
                        VAR_23 = VAR_13 - 1;
                    VAR_28 = VAR_22 + VAR_23 * VAR_11;
                    VAR_26 = VAR_10[VAR_28];
                }
            }

            VAR_26 = FUNC_0(VAR_26);
            VAR_8[VAR_19 + VAR_20 * VAR_9] = VAR_26;
        }
    }
    return 0;
}
