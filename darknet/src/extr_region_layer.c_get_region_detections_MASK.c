
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float* output; int batch; int outputs; int h; int w; int n; int classes; int coords; int softmax_tree; scalar_t__ background; int biases; } ;
typedef TYPE_1__ layer ;
struct TYPE_8__ {float* prob; float objectness; float* mask; int bbox; } ;
typedef TYPE_2__ detection ;


 int FUNC_0 (TYPE_2__*,int,int,int,int,int,int) ;
 int FUNC_1 (TYPE_1__,int ,int,int) ;
 int FUNC_2 (float*,int ,int,int,int,int,int,int,int) ;
 int FUNC_3 (float*,int,int ,int ,int) ;
 int FUNC_4 (float*,int ,float,int) ;

void FUNC_5(layer VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, float VAR_5, int *VAR_6, float VAR_7, int VAR_8, detection *VAR_9)
{
    int VAR_10,VAR_11,VAR_12,VAR_13;
    float *VAR_14 = VAR_0.output;
    if (VAR_0.batch == 2) {
        float *VAR_15 = VAR_0.output + VAR_0.outputs;
        for (VAR_11 = 0; VAR_11 < VAR_0.h; ++VAR_11) {
            for (VAR_10 = 0; VAR_10 < VAR_0.w/2; ++VAR_10) {
                for (VAR_12 = 0; VAR_12 < VAR_0.n; ++VAR_12) {
                    for(VAR_13 = 0; VAR_13 < VAR_0.classes + VAR_0.coords + 1; ++VAR_13){
                        int VAR_16 = VAR_13*VAR_0.w*VAR_0.h*VAR_0.n + VAR_12*VAR_0.w*VAR_0.h + VAR_11*VAR_0.w + VAR_10;
                        int VAR_17 = VAR_13*VAR_0.w*VAR_0.h*VAR_0.n + VAR_12*VAR_0.w*VAR_0.h + VAR_11*VAR_0.w + (VAR_0.w - VAR_10 - 1);
                        float VAR_18 = VAR_15[VAR_16];
                        VAR_15[VAR_16] = VAR_15[VAR_17];
                        VAR_15[VAR_17] = VAR_18;
                        if(VAR_13 == 0){
                            VAR_15[VAR_16] = -VAR_15[VAR_16];
                            VAR_15[VAR_17] = -VAR_15[VAR_17];
                        }
                    }
                }
            }
        }
        for(VAR_10 = 0; VAR_10 < VAR_0.outputs; ++VAR_10){
            VAR_0.output[VAR_10] = (VAR_0.output[VAR_10] + VAR_15[VAR_10])/2.;
        }
    }
    for (VAR_10 = 0; VAR_10 < VAR_0.w*VAR_0.h; ++VAR_10){
        int VAR_19 = VAR_10 / VAR_0.w;
        int VAR_20 = VAR_10 % VAR_0.w;
        for(VAR_12 = 0; VAR_12 < VAR_0.n; ++VAR_12){
            int VAR_21 = VAR_12*VAR_0.w*VAR_0.h + VAR_10;
            for(VAR_11 = 0; VAR_11 < VAR_0.classes; ++VAR_11){
                VAR_9[VAR_21].prob[VAR_11] = 0;
            }
            int VAR_22 = FUNC_1(VAR_0, 0, VAR_12*VAR_0.w*VAR_0.h + VAR_10, VAR_0.coords);
            int VAR_23 = FUNC_1(VAR_0, 0, VAR_12*VAR_0.w*VAR_0.h + VAR_10, 0);
            int VAR_24 = FUNC_1(VAR_0, 0, VAR_12*VAR_0.w*VAR_0.h + VAR_10, 4);
            float VAR_25 = VAR_0.background ? 1 : VAR_14[VAR_22];
            VAR_9[VAR_21].bbox = FUNC_2(VAR_14, VAR_0.biases, VAR_12, VAR_23, VAR_20, VAR_19, VAR_0.w, VAR_0.h, VAR_0.w*VAR_0.h);
            VAR_9[VAR_21].objectness = VAR_25 > VAR_5 ? VAR_25 : 0;
            if(VAR_9[VAR_21].mask){
                for(VAR_11 = 0; VAR_11 < VAR_0.coords - 4; ++VAR_11){
                    VAR_9[VAR_21].mask[VAR_11] = VAR_0.output[VAR_24 + VAR_11*VAR_0.w*VAR_0.h];
                }
            }

            int VAR_26 = FUNC_1(VAR_0, 0, VAR_12*VAR_0.w*VAR_0.h + VAR_10, VAR_0.coords + !VAR_0.background);
            if(VAR_0.softmax_tree){

                FUNC_3(VAR_14 + VAR_26, VAR_0.classes, VAR_0.softmax_tree, 0, VAR_0.w*VAR_0.h);
                if(VAR_6){
                    for(VAR_11 = 0; VAR_11 < 200; ++VAR_11){
                        int VAR_27 = FUNC_1(VAR_0, 0, VAR_12*VAR_0.w*VAR_0.h + VAR_10, VAR_0.coords + 1 + VAR_6[VAR_11]);
                        float VAR_28 = VAR_25*VAR_14[VAR_27];
                        VAR_9[VAR_21].prob[VAR_11] = (VAR_28 > VAR_5) ? VAR_28 : 0;
                    }
                } else {
                    int VAR_29 = FUNC_4(VAR_14 + VAR_26, VAR_0.softmax_tree, VAR_7, VAR_0.w*VAR_0.h);
                    VAR_9[VAR_21].prob[VAR_29] = (VAR_25 > VAR_5) ? VAR_25 : 0;
                }
            } else {
                if(VAR_9[VAR_21].objectness){
                    for(VAR_11 = 0; VAR_11 < VAR_0.classes; ++VAR_11){
                        int VAR_30 = FUNC_1(VAR_0, 0, VAR_12*VAR_0.w*VAR_0.h + VAR_10, VAR_0.coords + 1 + VAR_11);
                        float VAR_31 = VAR_25*VAR_14[VAR_30];
                        VAR_9[VAR_21].prob[VAR_11] = (VAR_31 > VAR_5) ? VAR_31 : 0;
                    }
                }
            }
        }
    }
    FUNC_0(VAR_9, VAR_0.w*VAR_0.h*VAR_0.n, VAR_1, VAR_2, VAR_3, VAR_4, VAR_8);
}
