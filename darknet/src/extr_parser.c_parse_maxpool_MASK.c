
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int c; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int maxpool_layer ;
typedef int list ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int,int,int,int,int,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int) ;

maxpool_layer FUNC_4(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_2(VAR_0, "stride",1);
    int VAR_3 = FUNC_2(VAR_0, "size",VAR_2);
    int VAR_4 = FUNC_3(VAR_0, "padding", VAR_3-1);

    int VAR_5,VAR_6,VAR_7,VAR_8;
    VAR_6 = VAR_1.h;
    VAR_7 = VAR_1.w;
    VAR_8 = VAR_1.c;
    VAR_5=VAR_1.batch;
    if(!(VAR_6 && VAR_7 && VAR_8)) FUNC_0("Layer before maxpool layer must output image.");

    maxpool_layer VAR_9 = FUNC_1(VAR_5,VAR_6,VAR_7,VAR_8,VAR_3,VAR_2,VAR_4);
    return VAR_9;
}
