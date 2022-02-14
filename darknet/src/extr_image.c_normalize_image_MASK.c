
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int c; float* data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0)
{
    int VAR_1;
    float VAR_2 = 9999999;
    float VAR_3 = -999999;

    for(VAR_1 = 0; VAR_1 < VAR_0.h*VAR_0.w*VAR_0.c; ++VAR_1){
        float VAR_4 = VAR_0.data[VAR_1];
        if(VAR_4 < VAR_2) VAR_2 = VAR_4;
        if(VAR_4 > VAR_3) VAR_3 = VAR_4;
    }
    if(VAR_3 - VAR_2 < .000000001){
        VAR_2 = 0;
        VAR_3 = 1;
    }
    for(VAR_1 = 0; VAR_1 < VAR_0.c*VAR_0.w*VAR_0.h; ++VAR_1){
        VAR_0.data[VAR_1] = (VAR_0.data[VAR_1] - VAR_2)/(VAR_3-VAR_2);
    }
}
