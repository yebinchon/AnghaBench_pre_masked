
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int index; int batch; int c; int h; int w; } ;
typedef TYPE_1__ size_params ;
struct TYPE_9__ {TYPE_3__* layers; } ;
typedef TYPE_2__ network ;
typedef int list ;
struct TYPE_10__ {void* beta; void* alpha; int activation; int out_c; int out_h; int out_w; } ;
typedef TYPE_3__ layer ;
typedef int ACTIVATION ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 TYPE_3__ FUNC_2 (int,int,int ,int ,int ,int ,int ,int ) ;
 char* FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,char*,int) ;
 char* FUNC_5 (int *,char*,char*) ;

layer FUNC_6(list *VAR_0, size_params VAR_1, network *VAR_2)
{
    char *VAR_3 = FUNC_3(VAR_0, "from");
    int VAR_4 = FUNC_0(VAR_3);
    if(VAR_4 < 0) VAR_4 = VAR_1.index + VAR_4;

    int VAR_5 = VAR_1.batch;
    layer VAR_6 = VAR_2->layers[VAR_4];

    layer VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_1.w, VAR_1.h, VAR_1.c, VAR_6.out_w, VAR_6.out_h, VAR_6.out_c);

    char *VAR_8 = FUNC_5(VAR_0, "activation", "linear");
    ACTIVATION VAR_9 = FUNC_1(VAR_8);
    VAR_7.activation = VAR_9;
    VAR_7.alpha = FUNC_4(VAR_0, "alpha", 1);
    VAR_7.beta = FUNC_4(VAR_0, "beta", 1);
    return VAR_7;
}
