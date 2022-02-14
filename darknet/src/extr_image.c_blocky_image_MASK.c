
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; int h; int w; int * data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0, int VAR_1)
{
    int VAR_2,VAR_3,VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_0.c; ++VAR_4){
        for(VAR_3 = 0; VAR_3 < VAR_0.h; ++VAR_3){
            for(VAR_2 = 0; VAR_2 < VAR_0.w; ++VAR_2){
                VAR_0.data[VAR_2 + VAR_0.w*(VAR_3 + VAR_0.h*VAR_4)] = VAR_0.data[VAR_2/VAR_1*VAR_1 + VAR_0.w*(VAR_3/VAR_1*VAR_1 + VAR_0.h*VAR_4)];
            }
        }
    }
}
