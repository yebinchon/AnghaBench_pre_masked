
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int c; float* data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int) ;

void FUNC_1(image VAR_0)
{
    FUNC_0(VAR_0.w == VAR_0.h);
    int VAR_1, VAR_2;
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_0.c; ++VAR_3){
        for(VAR_1 = 0; VAR_1 < VAR_0.w-1; ++VAR_1){
            for(VAR_2 = VAR_1 + 1; VAR_2 < VAR_0.w; ++VAR_2){
                float VAR_4 = VAR_0.data[VAR_2 + VAR_0.w*(VAR_1 + VAR_0.h*VAR_3)];
                VAR_0.data[VAR_2 + VAR_0.w*(VAR_1 + VAR_0.h*VAR_3)] = VAR_0.data[VAR_1 + VAR_0.w*(VAR_2 + VAR_0.h*VAR_3)];
                VAR_0.data[VAR_1 + VAR_0.w*(VAR_2 + VAR_0.h*VAR_3)] = VAR_4;
            }
        }
    }
}
