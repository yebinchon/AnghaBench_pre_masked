
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int c; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
typedef int layer ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int,int,int,int,int,int,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *,char*,int ) ;

layer FUNC_4(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_2(VAR_0, "stride",1);
    int VAR_3 = FUNC_3(VAR_0, "reverse",0);
    int VAR_4 = FUNC_3(VAR_0, "flatten",0);
    int VAR_5 = FUNC_3(VAR_0, "extra",0);

    int VAR_6,VAR_7,VAR_8,VAR_9;
    VAR_7 = VAR_1.h;
    VAR_8 = VAR_1.w;
    VAR_9 = VAR_1.c;
    VAR_6=VAR_1.batch;
    if(!(VAR_7 && VAR_8 && VAR_9)) FUNC_0("Layer before reorg layer must output image.");

    layer VAR_10 = FUNC_1(VAR_6,VAR_8,VAR_7,VAR_9,VAR_2,VAR_3, VAR_4, VAR_5);
    return VAR_10;
}
