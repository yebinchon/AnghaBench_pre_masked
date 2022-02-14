
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int c; int* data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0)
{
    int VAR_1;
    for(VAR_1 = 0; VAR_1 < VAR_0.w*VAR_0.h*VAR_0.c; ++VAR_1){
        if(VAR_0.data[VAR_1] < 0) VAR_0.data[VAR_1] = 0;
        if(VAR_0.data[VAR_1] > 1) VAR_0.data[VAR_1] = 1;
    }
}
