
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; int h; int w; int * data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5,VAR_6,VAR_7;
    int VAR_8 = 32;
    if(VAR_1 < 0) VAR_1 = 0;
    if(VAR_2 < 0) VAR_2 = 0;

    for(VAR_7 = 0; VAR_7 < VAR_0.c; ++VAR_7){
        for(VAR_6 = VAR_2; VAR_6 < VAR_2 + VAR_4 && VAR_6 < VAR_0.h; ++VAR_6){
            for(VAR_5 = VAR_1; VAR_5 < VAR_1 + VAR_3 && VAR_5 < VAR_0.w; ++VAR_5){
                VAR_0.data[VAR_5 + VAR_0.w*(VAR_6 + VAR_0.h*VAR_7)] = VAR_0.data[VAR_5/VAR_8*VAR_8 + VAR_0.w*(VAR_6/VAR_8*VAR_8 + VAR_0.h*VAR_7)];

            }
        }
    }
}
