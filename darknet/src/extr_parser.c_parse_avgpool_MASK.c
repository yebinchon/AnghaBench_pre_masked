
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int w; int h; int c; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
typedef int avgpool_layer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int,int,int) ;

avgpool_layer FUNC_2(list *VAR_0, size_params VAR_1)
{
    int VAR_2,VAR_3,VAR_4,VAR_5;
    VAR_3 = VAR_1.w;
    VAR_4 = VAR_1.h;
    VAR_5 = VAR_1.c;
    VAR_2=VAR_1.batch;
    if(!(VAR_4 && VAR_3 && VAR_5)) FUNC_0("Layer before avgpool layer must output image.");

    avgpool_layer VAR_6 = FUNC_1(VAR_2,VAR_3,VAR_4,VAR_5);
    return VAR_6;
}
