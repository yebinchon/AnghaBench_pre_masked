
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int prng; int var_values; } ;
typedef TYPE_1__ DrawTextContext ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVBPrint ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,double) ;
 int FUNC_1 (double*,char*,int ,int ,int *,int *,int ,int ,int *,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_4, AVBPrint *VAR_5,
                          char *VAR_6, unsigned VAR_7, char **VAR_8, int VAR_9)
{
    DrawTextContext *VAR_10 = VAR_4->priv;
    double VAR_11;
    int VAR_12;

    VAR_12 = FUNC_1(&VAR_11, VAR_8[0], VAR_3, VAR_10->var_values,
                                 ((void*)0), ((void*)0), VAR_2, VAR_1,
                                 &VAR_10->prng, 0, VAR_4);
    if (VAR_12 < 0)
        FUNC_2(VAR_4, VAR_0,
               "Expression '%s' for the expr text expansion function is not valid\n",
               VAR_8[0]);
    else
        FUNC_0(VAR_5, "%f", VAR_11);

    return VAR_12;
}
