
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int h; int* data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0, image VAR_1, int VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_0.w*VAR_0.h; ++VAR_3){
        if(VAR_0.data[VAR_3]) VAR_1.data[VAR_1.w*VAR_1.h*VAR_2 + VAR_3] = 1;
    }
}
