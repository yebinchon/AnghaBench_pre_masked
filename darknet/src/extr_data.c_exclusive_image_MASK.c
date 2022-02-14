
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int c; scalar_t__* data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0)
{
    int VAR_1, VAR_2, VAR_3;
    int VAR_4 = VAR_0.w*VAR_0.h;
    for(VAR_1 = 0; VAR_1 < VAR_0.c-1; ++VAR_1){
        for(VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3){
            if (VAR_0.data[VAR_1*VAR_4 + VAR_3]){
                for(VAR_2 = VAR_1+1; VAR_2 < VAR_0.c; ++VAR_2){
                    VAR_0.data[VAR_2*VAR_4 + VAR_3] = 0;
                }
            }
        }
    }
}
