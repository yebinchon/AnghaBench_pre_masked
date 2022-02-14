
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int c; float* data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int) ;

void FUNC_1(image VAR_0, int VAR_1)
{
    FUNC_0(VAR_0.w == VAR_0.h);
    VAR_1 = (VAR_1 + 400) % 4;
    int VAR_2, VAR_3, VAR_4, VAR_5;
    int VAR_6 = VAR_0.w;
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2){
        for(VAR_5 = 0; VAR_5 < VAR_0.c; ++VAR_5){
            for(VAR_3 = 0; VAR_3 < VAR_6/2; ++VAR_3){
                for(VAR_4 = 0; VAR_4 < (VAR_6-1)/2 + 1; ++VAR_4){
                    float VAR_7 = VAR_0.data[VAR_4 + VAR_0.w*(VAR_3 + VAR_0.h*VAR_5)];
                    VAR_0.data[VAR_4 + VAR_0.w*(VAR_3 + VAR_0.h*VAR_5)] = VAR_0.data[VAR_6-1-VAR_3 + VAR_0.w*(VAR_4 + VAR_0.h*VAR_5)];
                    VAR_0.data[VAR_6-1-VAR_3 + VAR_0.w*(VAR_4 + VAR_0.h*VAR_5)] = VAR_0.data[VAR_6-1-VAR_4 + VAR_0.w*(VAR_6-1-VAR_3 + VAR_0.h*VAR_5)];
                    VAR_0.data[VAR_6-1-VAR_4 + VAR_0.w*(VAR_6-1-VAR_3 + VAR_0.h*VAR_5)] = VAR_0.data[VAR_3 + VAR_0.w*(VAR_6-1-VAR_4 + VAR_0.h*VAR_5)];
                    VAR_0.data[VAR_3 + VAR_0.w*(VAR_6-1-VAR_4 + VAR_0.h*VAR_5)] = VAR_7;
                }
            }
        }
    }
}
