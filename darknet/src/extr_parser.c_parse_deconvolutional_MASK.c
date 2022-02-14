
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int h; int w; int c; int batch; TYPE_1__* net; } ;
typedef TYPE_2__ size_params ;
typedef int list ;
typedef int layer ;
struct TYPE_4__ {int adam; } ;
typedef int ACTIVATION ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int,int,int,int,int,int,int ,int,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int ) ;
 char* FUNC_5 (int *,char*,char*) ;

layer FUNC_6(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_3(VAR_0, "filters",1);
    int VAR_3 = FUNC_3(VAR_0, "size",1);
    int VAR_4 = FUNC_3(VAR_0, "stride",1);

    char *VAR_5 = FUNC_5(VAR_0, "activation", "logistic");
    ACTIVATION VAR_6 = FUNC_1(VAR_5);

    int VAR_7,VAR_8,VAR_9,VAR_10;
    VAR_8 = VAR_1.h;
    VAR_9 = VAR_1.w;
    VAR_10 = VAR_1.c;
    VAR_7=VAR_1.batch;
    if(!(VAR_8 && VAR_9 && VAR_10)) FUNC_0("Layer before deconvolutional layer must output image.");
    int VAR_11 = FUNC_4(VAR_0, "batch_normalize", 0);
    int VAR_12 = FUNC_4(VAR_0, "pad",0);
    int VAR_13 = FUNC_4(VAR_0, "padding",0);
    if(VAR_12) VAR_13 = VAR_3/2;

    layer VAR_14 = FUNC_2(VAR_7,VAR_8,VAR_9,VAR_10,VAR_2,VAR_3,VAR_4,VAR_13, VAR_6, VAR_11, VAR_1.net->adam);

    return VAR_14;
}
