
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* truth; scalar_t__ gpu_index; int input; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int extra; int* output; int outputs; int batch; int* delta; int classes; int w; int h; int* counts; int** sums; int truths; scalar_t__* cost; } ;
typedef TYPE_2__ layer ;


 int VAR_0 ;
 int FUNC_0 (int*,int,int ) ;
 int FUNC_1 (int,int,double*,int,int*,int) ;
 float* FUNC_2 (int,int) ;
 int FUNC_3 (int,int ,int*,int) ;
 int FUNC_4 (float*) ;
 double FUNC_5 (double*,int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int*,int ,int) ;
 scalar_t__ FUNC_8 (double,int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int,float,int*,int) ;
 double FUNC_11 () ;

void FUNC_12(const layer VAR_1, network VAR_2)
{

    double VAR_3 = FUNC_11();
    int VAR_4,VAR_5,VAR_6,VAR_7;
    int VAR_8 = VAR_1.extra;
    FUNC_6(VAR_1.output, VAR_2.input, VAR_1.outputs*VAR_1.batch*sizeof(float));
    FUNC_7(VAR_1.delta, 0, VAR_1.outputs * VAR_1.batch * sizeof(float));


    for (VAR_5 = 0; VAR_5 < VAR_1.batch; ++VAR_5){
        int VAR_9 = VAR_5*VAR_1.outputs;
        FUNC_0(VAR_1.output + VAR_9, VAR_1.classes*VAR_1.w*VAR_1.h, VAR_0);
    }


    for (VAR_5 = 0; VAR_5 < VAR_1.batch; ++VAR_5){

        for(VAR_4 = 0; VAR_4 < VAR_1.classes; ++VAR_4){
            for(VAR_7 = 0; VAR_7 < VAR_1.w*VAR_1.h; ++VAR_7){
                int VAR_10 = VAR_5*VAR_1.outputs + VAR_4*VAR_1.w*VAR_1.h + VAR_7;
                VAR_1.delta[VAR_10] = 0 - VAR_1.output[VAR_10];
            }
        }


        for(VAR_4 = 0; VAR_4 < VAR_8; ++VAR_4){
            for(VAR_7 = 0; VAR_7 < VAR_1.w*VAR_1.h; ++VAR_7){
                int VAR_11 = VAR_5*VAR_1.outputs + (VAR_4+VAR_1.classes)*VAR_1.w*VAR_1.h + VAR_7;
                VAR_1.delta[VAR_11] = .1 * (0 - VAR_1.output[VAR_11]);
            }
        }


        FUNC_7(VAR_1.counts, 0, 90*sizeof(int));
        for(VAR_4 = 0; VAR_4 < 90; ++VAR_4){
            FUNC_3(VAR_8, 0, VAR_1.sums[VAR_4], 1);

            int VAR_12 = VAR_2.truth[VAR_5*VAR_1.truths + VAR_4*(VAR_1.w*VAR_1.h+1)];
            if(VAR_12 < 0) break;

            for(VAR_7 = 0; VAR_7 < VAR_1.w*VAR_1.h; ++VAR_7){
                int VAR_13 = VAR_5*VAR_1.outputs + VAR_12*VAR_1.w*VAR_1.h + VAR_7;
                float VAR_14 = VAR_2.truth[VAR_5*VAR_1.truths + VAR_4*(VAR_1.w*VAR_1.h + 1) + 1 + VAR_7];
                if(VAR_14){
                    VAR_1.delta[VAR_13] = VAR_14 - VAR_1.output[VAR_13];
                    FUNC_1(VAR_8, 1, VAR_1.output + VAR_5*VAR_1.outputs + VAR_1.classes*VAR_1.w*VAR_1.h + VAR_7, VAR_1.w*VAR_1.h, VAR_1.sums[VAR_4], 1);
                    ++VAR_1.counts[VAR_4];
                }
            }
        }

        float *VAR_15 = FUNC_2(90, sizeof(float));
        for(VAR_4 = 0; VAR_4 < 90; ++VAR_4){
            int VAR_16 = VAR_2.truth[VAR_5*VAR_1.truths + VAR_4*(VAR_1.w*VAR_1.h+1)];
            if(VAR_16 < 0) break;
            for(VAR_7 = 0; VAR_7 < VAR_1.w*VAR_1.h; ++VAR_7){
                float VAR_17 = VAR_2.truth[VAR_5*VAR_1.truths + VAR_4*(VAR_1.w*VAR_1.h + 1) + 1 + VAR_7];
                if(VAR_17){
                    int VAR_18;
                    float VAR_19 = 0;
                    for(VAR_18 = 0; VAR_18 < VAR_8; ++VAR_18){
                        int VAR_20 = VAR_5*VAR_1.outputs + (VAR_1.classes + VAR_18)*VAR_1.w*VAR_1.h + VAR_7;
                        VAR_19 += FUNC_8(VAR_1.sums[VAR_4][VAR_18]/VAR_1.counts[VAR_4] - VAR_1.output[VAR_20], 2);
                    }
                    VAR_15[VAR_4] += VAR_19;
                }
            }
            VAR_15[VAR_4] /= VAR_1.counts[VAR_4];
        }


        for(VAR_4 = 0; VAR_4 < 90; ++VAR_4){
            if(!VAR_1.counts[VAR_4]) continue;
            FUNC_10(VAR_8, 1.f/VAR_1.counts[VAR_4], VAR_1.sums[VAR_4], 1);
            if(VAR_5 == 0 && VAR_2.gpu_index == 0){
                FUNC_9("%4d, %6.3f, ", VAR_1.counts[VAR_4], VAR_15[VAR_4]);
                for(VAR_6 = 0; VAR_6 < VAR_8; ++VAR_6){
                    FUNC_9("%6.3f,", VAR_1.sums[VAR_4][VAR_6]);
                }
                FUNC_9("\n");
            }
        }
        FUNC_4(VAR_15);


        for(VAR_4 = 0; VAR_4 < 90; ++VAR_4){
            if(!VAR_1.counts[VAR_4]) continue;
            for(VAR_7 = 0; VAR_7 < VAR_1.w*VAR_1.h; ++VAR_7){
                float VAR_21 = VAR_2.truth[VAR_5*VAR_1.truths + VAR_4*(VAR_1.w*VAR_1.h + 1) + 1 + VAR_7];
                if(VAR_21){
                    for(VAR_6 = 0; VAR_6 < 90; ++VAR_6){
                        if(!VAR_1.counts[VAR_6])continue;
                        int VAR_22;
                        for(VAR_22 = 0; VAR_22 < VAR_8; ++VAR_22){
                            int VAR_23 = VAR_5*VAR_1.outputs + (VAR_1.classes + VAR_22)*VAR_1.w*VAR_1.h + VAR_7;
                            float VAR_24 = VAR_1.sums[VAR_6][VAR_22] - VAR_1.output[VAR_23];
                            if (VAR_6 == VAR_4) VAR_1.delta[VAR_23] += VAR_24 < 0? -.1 : .1;
                            else VAR_1.delta[VAR_23] += -(VAR_24 < 0? -.1 : .1);
                        }
                    }
                }
            }
        }

        for(VAR_4 = 0; VAR_4 < VAR_8; ++VAR_4){
            for(VAR_7 = 0; VAR_7 < VAR_1.w*VAR_1.h; ++VAR_7){
                int VAR_25 = VAR_5*VAR_1.outputs + (VAR_4+VAR_1.classes)*VAR_1.w*VAR_1.h + VAR_7;
                VAR_1.delta[VAR_25] *= .01;
            }
        }
    }

    *(VAR_1.cost) = FUNC_8(FUNC_5(VAR_1.delta, VAR_1.outputs * VAR_1.batch), 2);
    FUNC_9("took %lf sec\n", FUNC_11() - VAR_3);
}
