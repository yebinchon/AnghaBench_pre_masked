
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int c; float* data; } ;
typedef TYPE_1__ image ;



void FUNC_0(image VAR_0, float VAR_1)
{
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_0.h*VAR_0.w*VAR_0.c; ++VAR_2) VAR_0.data[VAR_2] += VAR_1;
}
