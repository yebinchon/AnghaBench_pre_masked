
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** outputs; int ** inputs; } ;
typedef int AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_1__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ,int **) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_2->inputs[0];
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    AVFrame *VAR_5 = ((void*)0);
    int VAR_6;

    FUNC_1(VAR_4, VAR_3);

    VAR_6 = FUNC_3(VAR_3, VAR_1, VAR_1, &VAR_5);
    if (VAR_6 < 0)
        return VAR_6;

    if (VAR_6 > 0)
        return FUNC_4(VAR_3, VAR_5);

    FUNC_0(VAR_3, VAR_4);
    FUNC_2(VAR_4, VAR_3);

    return VAR_0;
}
