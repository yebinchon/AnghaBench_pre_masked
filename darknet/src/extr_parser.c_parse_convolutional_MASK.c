
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int h; int w; int c; int batch; TYPE_1__* net; } ;
typedef TYPE_2__ size_params ;
typedef int list ;
struct TYPE_9__ {int dot; void* flipped; } ;
typedef TYPE_3__ convolutional_layer ;
struct TYPE_7__ {int adam; } ;
typedef int ACTIVATION ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_3__ FUNC_2 (int,int,int,int,int,int,int,int,int,int ,int,int,int,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int) ;
 void* FUNC_5 (int *,char*,int) ;
 char* FUNC_6 (int *,char*,char*) ;

convolutional_layer FUNC_7(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_4(VAR_0, "filters",1);
    int VAR_3 = FUNC_4(VAR_0, "size",1);
    int VAR_4 = FUNC_4(VAR_0, "stride",1);
    int VAR_5 = FUNC_5(VAR_0, "pad",0);
    int VAR_6 = FUNC_5(VAR_0, "padding",0);
    int VAR_7 = FUNC_5(VAR_0, "groups", 1);
    if(VAR_5) VAR_6 = VAR_3/2;

    char *VAR_8 = FUNC_6(VAR_0, "activation", "logistic");
    ACTIVATION VAR_9 = FUNC_1(VAR_8);

    int VAR_10,VAR_11,VAR_12,VAR_13;
    VAR_11 = VAR_1.h;
    VAR_12 = VAR_1.w;
    VAR_13 = VAR_1.c;
    VAR_10=VAR_1.batch;
    if(!(VAR_11 && VAR_12 && VAR_13)) FUNC_0("Layer before convolutional layer must output image.");
    int VAR_14 = FUNC_5(VAR_0, "batch_normalize", 0);
    int VAR_15 = FUNC_5(VAR_0, "binary", 0);
    int VAR_16 = FUNC_5(VAR_0, "xnor", 0);

    convolutional_layer VAR_17 = FUNC_2(VAR_10,VAR_11,VAR_12,VAR_13,VAR_2,VAR_7,VAR_3,VAR_4,VAR_6,VAR_9, VAR_14, VAR_15, VAR_16, VAR_1.net->adam);
    VAR_17.flipped = FUNC_5(VAR_0, "flipped", 0);
    VAR_17.dot = FUNC_3(VAR_0, "dot", 0);

    return VAR_17;
}
