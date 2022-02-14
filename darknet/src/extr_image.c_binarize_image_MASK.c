
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int w; int h; int c; double* data; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (TYPE_1__) ;

image FUNC_1(image VAR_0)
{
    image VAR_1 = FUNC_0(VAR_0);
    int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_0.w * VAR_0.h * VAR_0.c; ++VAR_2){
        if(VAR_1.data[VAR_2] > .5) VAR_1.data[VAR_2] = 1;
        else VAR_1.data[VAR_2] = 0;
    }
    return VAR_1;
}
