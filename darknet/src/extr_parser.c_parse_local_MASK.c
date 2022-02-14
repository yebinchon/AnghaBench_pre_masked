
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; int c; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int local_layer ;
typedef int list ;
typedef int ACTIVATION ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int,int,int,int,int,int,int ) ;
 int FUNC_3 (int *,char*,int) ;
 char* FUNC_4 (int *,char*,char*) ;

local_layer FUNC_5(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_3(VAR_0, "filters",1);
    int VAR_3 = FUNC_3(VAR_0, "size",1);
    int VAR_4 = FUNC_3(VAR_0, "stride",1);
    int VAR_5 = FUNC_3(VAR_0, "pad",0);
    char *VAR_6 = FUNC_4(VAR_0, "activation", "logistic");
    ACTIVATION VAR_7 = FUNC_1(VAR_6);

    int VAR_8,VAR_9,VAR_10,VAR_11;
    VAR_9 = VAR_1.h;
    VAR_10 = VAR_1.w;
    VAR_11 = VAR_1.c;
    VAR_8=VAR_1.batch;
    if(!(VAR_9 && VAR_10 && VAR_11)) FUNC_0("Layer before local layer must output image.");

    local_layer VAR_12 = FUNC_2(VAR_8,VAR_9,VAR_10,VAR_11,VAR_2,VAR_3,VAR_4,VAR_5,VAR_7);

    return VAR_12;
}
