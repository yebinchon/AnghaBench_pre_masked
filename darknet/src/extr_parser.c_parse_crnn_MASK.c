
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int time_steps; int c; int h; int w; int batch; } ;
typedef TYPE_1__ size_params ;
typedef int list ;
struct TYPE_7__ {void* shortcut; } ;
typedef TYPE_2__ layer ;
typedef int ACTIVATION ;


 int FUNC_0 (char*) ;
 TYPE_2__ FUNC_1 (int ,int ,int ,int ,int,int,int ,int ,int) ;
 int FUNC_2 (int *,char*,int) ;
 void* FUNC_3 (int *,char*,int ) ;
 char* FUNC_4 (int *,char*,char*) ;

layer FUNC_5(list *VAR_0, size_params VAR_1)
{
    int VAR_2 = FUNC_2(VAR_0, "output_filters",1);
    int VAR_3 = FUNC_2(VAR_0, "hidden_filters",1);
    char *VAR_4 = FUNC_4(VAR_0, "activation", "logistic");
    ACTIVATION VAR_5 = FUNC_0(VAR_4);
    int VAR_6 = FUNC_3(VAR_0, "batch_normalize", 0);

    layer VAR_7 = FUNC_1(VAR_1.batch, VAR_1.w, VAR_1.h, VAR_1.c, VAR_3, VAR_2, VAR_1.time_steps, VAR_5, VAR_6);

    VAR_7.shortcut = FUNC_3(VAR_0, "shortcut", 0);

    return VAR_7;
}
