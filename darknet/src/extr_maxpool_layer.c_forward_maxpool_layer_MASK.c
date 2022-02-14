
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* input; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int pad; int out_h; int out_w; int c; int batch; int size; int stride; int w; int h; float* output; int* indexes; } ;
typedef TYPE_2__ maxpool_layer ;


 float VAR_0 ;

void FUNC_0(const maxpool_layer VAR_1, network VAR_2)
{
    int VAR_3,VAR_4,VAR_5,VAR_6,VAR_7,VAR_8;
    int VAR_9 = -VAR_1.pad/2;
    int VAR_10 = -VAR_1.pad/2;

    int VAR_11 = VAR_1.out_h;
    int VAR_12 = VAR_1.out_w;
    int VAR_13 = VAR_1.c;

    for(VAR_3 = 0; VAR_3 < VAR_1.batch; ++VAR_3){
        for(VAR_6 = 0; VAR_6 < VAR_13; ++VAR_6){
            for(VAR_4 = 0; VAR_4 < VAR_11; ++VAR_4){
                for(VAR_5 = 0; VAR_5 < VAR_12; ++VAR_5){
                    int VAR_14 = VAR_5 + VAR_12*(VAR_4 + VAR_11*(VAR_6 + VAR_13*VAR_3));
                    float VAR_15 = -VAR_0;
                    int VAR_16 = -1;
                    for(VAR_8 = 0; VAR_8 < VAR_1.size; ++VAR_8){
                        for(VAR_7 = 0; VAR_7 < VAR_1.size; ++VAR_7){
                            int VAR_17 = VAR_10 + VAR_4*VAR_1.stride + VAR_8;
                            int VAR_18 = VAR_9 + VAR_5*VAR_1.stride + VAR_7;
                            int VAR_19 = VAR_18 + VAR_1.w*(VAR_17 + VAR_1.h*(VAR_6 + VAR_3*VAR_1.c));
                            int VAR_20 = (VAR_17 >= 0 && VAR_17 < VAR_1.h &&
                                         VAR_18 >= 0 && VAR_18 < VAR_1.w);
                            float VAR_21 = (VAR_20 != 0) ? VAR_2.input[VAR_19] : -VAR_0;
                            VAR_16 = (VAR_21 > VAR_15) ? VAR_19 : VAR_16;
                            VAR_15 = (VAR_21 > VAR_15) ? VAR_21 : VAR_15;
                        }
                    }
                    VAR_1.output[VAR_14] = VAR_15;
                    VAR_1.indexes[VAR_14] = VAR_16;
                }
            }
        }
    }
}
