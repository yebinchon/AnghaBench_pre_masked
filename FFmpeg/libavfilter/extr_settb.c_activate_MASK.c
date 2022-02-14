
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {int ** outputs; int ** inputs; } ;
typedef int AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_1__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int*,int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_1)
{
    AVFilterLink *VAR_2 = VAR_1->inputs[0];
    AVFilterLink *VAR_3 = VAR_1->outputs[0];
    AVFrame *VAR_4;
    int VAR_5;
    int64_t VAR_6;
    int VAR_7;

    FUNC_0(VAR_3, VAR_2);

    VAR_7 = FUNC_3(VAR_2, &VAR_4);
    if (VAR_7 < 0)
        return VAR_7;
    if (VAR_7 > 0)
        return FUNC_5(VAR_2, VAR_4);

    if (FUNC_2(VAR_2, &VAR_5, &VAR_6)) {
        FUNC_4(VAR_3, VAR_5, FUNC_6(VAR_2, VAR_3, VAR_6));
        return 0;
    }

    FUNC_1(VAR_3, VAR_2);

    return VAR_0;
}
