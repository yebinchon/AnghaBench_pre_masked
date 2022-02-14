
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c; int h; int w; float* data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0)
{
    int VAR_1,VAR_2,VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_0.c; ++VAR_3){
        for(VAR_1 = 0; VAR_1 < VAR_0.h; ++VAR_1){
            for(VAR_2 = 0; VAR_2 < VAR_0.w/2; ++VAR_2){
                int VAR_4 = VAR_2 + VAR_0.w*(VAR_1 + VAR_0.h*(VAR_3));
                int VAR_5 = (VAR_0.w - VAR_2 - 1) + VAR_0.w*(VAR_1 + VAR_0.h*(VAR_3));
                float VAR_6 = VAR_0.data[VAR_5];
                VAR_0.data[VAR_5] = VAR_0.data[VAR_4];
                VAR_0.data[VAR_4] = VAR_6;
            }
        }
    }
}
