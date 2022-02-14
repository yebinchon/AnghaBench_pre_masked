
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {TYPE_3__* out; TYPE_3__** in; } ;
typedef TYPE_1__ ThreadData ;
struct TYPE_9__ {TYPE_2__* priv; } ;
struct TYPE_8__ {int** data; int const* linesize; } ;
struct TYPE_7__ {int radius; int nb_inputs; float threshold; float tolerance; float factor; int llimit; int hlimit; int depth; int nb_planes; int* height; int planes; int* linesize; } ;
typedef TYPE_2__ AmplifyContext ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int*) ;
 int FUNC_1 (float) ;
 int FUNC_2 (int ,int const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int const) ;
 int FUNC_5 (int*,int const,int*,int const,int,int const) ;
 float const FUNC_6 (float) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AmplifyContext *VAR_4 = VAR_0->priv;
    ThreadData *VAR_5 = VAR_1;
    AVFrame **VAR_6 = VAR_5->in;
    AVFrame *VAR_7 = VAR_5->out;
    const int VAR_8 = VAR_4->radius;
    const int VAR_9 = VAR_4->nb_inputs;
    const float VAR_10 = VAR_4->threshold;
    const float VAR_11 = VAR_4->tolerance;
    const float VAR_12 = VAR_4->factor;
    const int VAR_13 = VAR_4->llimit;
    const int VAR_14 = VAR_4->hlimit;
    const int VAR_15 = VAR_4->depth;
    int VAR_16, VAR_17, VAR_18, VAR_19;

    if (VAR_4->depth <= 8) {
        for (VAR_17 = 0; VAR_17 < VAR_4->nb_planes; VAR_17++) {
            const int VAR_20 = (VAR_4->height[VAR_17] * VAR_2) / VAR_3;
            const int VAR_21 = (VAR_4->height[VAR_17] * (VAR_2+1)) / VAR_3;
            uint8_t *VAR_22 = VAR_7->data[VAR_17] + VAR_20 * VAR_7->linesize[VAR_17];

            if (!((1 << VAR_17) & VAR_4->planes)) {
                FUNC_5(VAR_22, VAR_7->linesize[VAR_17],
                                    VAR_6[VAR_8]->data[VAR_17] + VAR_20 * VAR_6[VAR_8]->linesize[VAR_17],
                                    VAR_6[VAR_8]->linesize[VAR_17],
                                    VAR_4->linesize[VAR_17], VAR_21 - VAR_20);
                continue;
            }

            for (VAR_19 = VAR_20; VAR_19 < VAR_21; VAR_19++) {
                for (VAR_18 = 0; VAR_18 < VAR_4->linesize[VAR_17]; VAR_18++) {
                    int VAR_23 = VAR_6[VAR_8]->data[VAR_17][VAR_19 * VAR_6[VAR_8]->linesize[VAR_17] + VAR_18];
                    float VAR_24, VAR_25;
                    int VAR_26 = 0;

                    for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
                        VAR_26 += VAR_6[VAR_16]->data[VAR_17][VAR_19 * VAR_6[VAR_16]->linesize[VAR_17] + VAR_18];
                    }

                    VAR_25 = VAR_26 / (float)VAR_9;
                    VAR_24 = VAR_23 - VAR_25;
                    if (FUNC_6(VAR_24) < VAR_10 && FUNC_6(VAR_24) > VAR_11) {
                        int VAR_27;
                        if (VAR_24 < 0) {
                            VAR_27 = -FUNC_2(FUNC_1(VAR_24 * VAR_12), VAR_13);
                        } else {
                            VAR_27 = FUNC_2(FUNC_1(VAR_24 * VAR_12), VAR_14);
                        }
                        VAR_22[VAR_18] = FUNC_3(VAR_23 + VAR_27);
                    } else {
                        VAR_22[VAR_18] = VAR_23;
                    }
                }

                VAR_22 += VAR_7->linesize[VAR_17];
            }
        }
    } else {
        for (VAR_17 = 0; VAR_17 < VAR_4->nb_planes; VAR_17++) {
            const int VAR_28 = (VAR_4->height[VAR_17] * VAR_2) / VAR_3;
            const int VAR_29 = (VAR_4->height[VAR_17] * (VAR_2+1)) / VAR_3;
            uint16_t *VAR_30 = (uint16_t *)(VAR_7->data[VAR_17] + VAR_28 * VAR_7->linesize[VAR_17]);

            if (!((1 << VAR_17) & VAR_4->planes)) {
                FUNC_5((uint8_t *)VAR_30, VAR_7->linesize[VAR_17],
                                    VAR_6[VAR_8]->data[VAR_17] + VAR_28 * VAR_6[VAR_8]->linesize[VAR_17],
                                    VAR_6[VAR_8]->linesize[VAR_17],
                                    VAR_4->linesize[VAR_17], VAR_29 - VAR_28);
                continue;
            }

            for (VAR_19 = VAR_28; VAR_19 < VAR_29; VAR_19++) {
                for (VAR_18 = 0; VAR_18 < VAR_4->linesize[VAR_17] / 2; VAR_18++) {
                    int VAR_31 = FUNC_0(VAR_6[VAR_8]->data[VAR_17] + VAR_19 * VAR_6[VAR_8]->linesize[VAR_17] + VAR_18 * 2);
                    float VAR_32, VAR_33;
                    int VAR_34 = 0;

                    for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++) {
                        VAR_34 += FUNC_0(VAR_6[VAR_16]->data[VAR_17] + VAR_19 * VAR_6[VAR_16]->linesize[VAR_17] + VAR_18 * 2);
                    }

                    VAR_33 = VAR_34 / (float)VAR_9;
                    VAR_32 = VAR_31 - VAR_33;

                    if (FUNC_6(VAR_32) < VAR_10 && FUNC_6(VAR_32) > VAR_11) {
                        int VAR_35;
                        if (VAR_32 < 0) {
                            VAR_35 = -FUNC_2(FUNC_1(VAR_32 * VAR_12), VAR_13);
                        } else {
                            VAR_35 = FUNC_2(FUNC_1(VAR_32 * VAR_12), VAR_14);
                        }
                        VAR_30[VAR_18] = FUNC_4(VAR_31 + VAR_35, VAR_15);
                    } else {
                        VAR_30[VAR_18] = VAR_31;
                    }
                }

                VAR_30 += VAR_7->linesize[VAR_17] / 2;
            }
        }
    }

    return 0;
}
