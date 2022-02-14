
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float* input; int train; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int h; int out_h; int w; int out_w; int batch; int c; float* output; scalar_t__ noadjust; int flip; } ;
typedef TYPE_2__ crop_layer ;


 int FUNC_0 () ;

void FUNC_1(const crop_layer VAR_0, network VAR_1)
{
    int VAR_2,VAR_3,VAR_4,VAR_5,VAR_6,VAR_7;
    int VAR_8;
    int VAR_9 = 0;
    int VAR_10 = (VAR_0.flip && FUNC_0()%2);
    int VAR_11 = FUNC_0()%(VAR_0.h - VAR_0.out_h + 1);
    int VAR_12 = FUNC_0()%(VAR_0.w - VAR_0.out_w + 1);
    float VAR_13 = 2;
    float VAR_14 = -1;
    if(VAR_0.noadjust){
        VAR_13 = 1;
        VAR_14 = 0;
    }
    if(!VAR_1.train){
        VAR_10 = 0;
        VAR_11 = (VAR_0.h - VAR_0.out_h)/2;
        VAR_12 = (VAR_0.w - VAR_0.out_w)/2;
    }
    for(VAR_5 = 0; VAR_5 < VAR_0.batch; ++VAR_5){
        for(VAR_4 = 0; VAR_4 < VAR_0.c; ++VAR_4){
            for(VAR_2 = 0; VAR_2 < VAR_0.out_h; ++VAR_2){
                for(VAR_3 = 0; VAR_3 < VAR_0.out_w; ++VAR_3){
                    if(VAR_10){
                        VAR_7 = VAR_0.w - VAR_12 - VAR_3 - 1;
                    }else{
                        VAR_7 = VAR_3 + VAR_12;
                    }
                    VAR_6 = VAR_2 + VAR_11;
                    VAR_8 = VAR_7+VAR_0.w*(VAR_6+VAR_0.h*(VAR_4 + VAR_0.c*VAR_5));
                    VAR_0.output[VAR_9++] = VAR_1.input[VAR_8]*VAR_13 + VAR_14;
                }
            }
        }
    }
}
