
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; float* data; int h; int w; } ;
typedef TYPE_1__ image ;


 float* FUNC_0 (int,int) ;
 int FUNC_1 (float*) ;

void FUNC_2(image VAR_0)
{
    float *VAR_1 = FUNC_0(VAR_0.c, sizeof(float));
    float *VAR_2 = FUNC_0(VAR_0.c, sizeof(float));
    int VAR_3,VAR_4;
    for(VAR_3 = 0; VAR_3 < VAR_0.c; ++VAR_3) VAR_1[VAR_3] = VAR_2[VAR_3] = VAR_0.data[VAR_3*VAR_0.h*VAR_0.w];

    for(VAR_4 = 0; VAR_4 < VAR_0.c; ++VAR_4){
        for(VAR_3 = 0; VAR_3 < VAR_0.h*VAR_0.w; ++VAR_3){
            float VAR_5 = VAR_0.data[VAR_3+VAR_4*VAR_0.h*VAR_0.w];
            if(VAR_5 < VAR_1[VAR_4]) VAR_1[VAR_4] = VAR_5;
            if(VAR_5 > VAR_2[VAR_4]) VAR_2[VAR_4] = VAR_5;
        }
    }
    for(VAR_3 = 0; VAR_3 < VAR_0.c; ++VAR_3){
        if(VAR_2[VAR_3] - VAR_1[VAR_3] < .000000001){
            VAR_1[VAR_3] = 0;
            VAR_2[VAR_3] = 1;
        }
    }
    for(VAR_4 = 0; VAR_4 < VAR_0.c; ++VAR_4){
        for(VAR_3 = 0; VAR_3 < VAR_0.w*VAR_0.h; ++VAR_3){
            VAR_0.data[VAR_3+VAR_4*VAR_0.h*VAR_0.w] = (VAR_0.data[VAR_3+VAR_4*VAR_0.h*VAR_0.w] - VAR_1[VAR_4])/(VAR_2[VAR_4]-VAR_1[VAR_4]);
        }
    }
    FUNC_1(VAR_1);
    FUNC_1(VAR_2);
}
