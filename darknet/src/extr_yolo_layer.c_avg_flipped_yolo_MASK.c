
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float* output; int outputs; int h; int w; int n; int classes; } ;
typedef TYPE_1__ layer ;



void FUNC_0(layer VAR_0)
{
    int VAR_1,VAR_2,VAR_3,VAR_4;
    float *VAR_5 = VAR_0.output + VAR_0.outputs;
    for (VAR_2 = 0; VAR_2 < VAR_0.h; ++VAR_2) {
        for (VAR_1 = 0; VAR_1 < VAR_0.w/2; ++VAR_1) {
            for (VAR_3 = 0; VAR_3 < VAR_0.n; ++VAR_3) {
                for(VAR_4 = 0; VAR_4 < VAR_0.classes + 4 + 1; ++VAR_4){
                    int VAR_6 = VAR_4*VAR_0.w*VAR_0.h*VAR_0.n + VAR_3*VAR_0.w*VAR_0.h + VAR_2*VAR_0.w + VAR_1;
                    int VAR_7 = VAR_4*VAR_0.w*VAR_0.h*VAR_0.n + VAR_3*VAR_0.w*VAR_0.h + VAR_2*VAR_0.w + (VAR_0.w - VAR_1 - 1);
                    float VAR_8 = VAR_5[VAR_6];
                    VAR_5[VAR_6] = VAR_5[VAR_7];
                    VAR_5[VAR_7] = VAR_8;
                    if(VAR_4 == 0){
                        VAR_5[VAR_6] = -VAR_5[VAR_6];
                        VAR_5[VAR_7] = -VAR_5[VAR_7];
                    }
                }
            }
        }
    }
    for(VAR_1 = 0; VAR_1 < VAR_0.outputs; ++VAR_1){
        VAR_0.output[VAR_1] = (VAR_0.output[VAR_1] + VAR_5[VAR_1])/2.;
    }
}
