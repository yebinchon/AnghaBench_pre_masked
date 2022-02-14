
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; int ** outputs; int ** inputs; } ;
struct TYPE_4__ {scalar_t__ nb_samples; } ;
typedef TYPE_1__ SOFAlizerContext ;
typedef int AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,int **) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1)
{
    AVFilterLink *VAR_2 = VAR_1->inputs[0];
    AVFilterLink *VAR_3 = VAR_1->outputs[0];
    SOFAlizerContext *VAR_4 = VAR_1->priv;
    AVFrame *VAR_5;
    int VAR_6;

    FUNC_1(VAR_3, VAR_2);

    if (VAR_4->nb_samples)
        VAR_6 = FUNC_4(VAR_2, VAR_4->nb_samples, VAR_4->nb_samples, &VAR_5);
    else
        VAR_6 = FUNC_3(VAR_2, &VAR_5);
    if (VAR_6 < 0)
        return VAR_6;
    if (VAR_6 > 0)
        return FUNC_5(VAR_2, VAR_5);

    FUNC_0(VAR_2, VAR_3);
    FUNC_2(VAR_3, VAR_2);

    return VAR_0;
}
