
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
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int*,int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static int FUNC_7(AVFilterContext *VAR_2)
{
    AVFilterLink *VAR_3 = VAR_2->inputs[0];
    AVFilterLink *VAR_4 = VAR_2->outputs[0];
    AVFrame *VAR_5;
    int64_t VAR_6;
    int VAR_7, VAR_8;

    FUNC_0(VAR_4, VAR_3);

    VAR_7 = FUNC_3(VAR_3, &VAR_5);
    if (VAR_7 < 0)
        return VAR_7;
    if (VAR_7 > 0)
        return FUNC_5(VAR_3, VAR_5);

    if (FUNC_2(VAR_3, &VAR_8, &VAR_6)) {
        if (VAR_8 == VAR_0) {
            int64_t VAR_9 = VAR_6;

            VAR_7 = FUNC_6(VAR_4, VAR_6, &VAR_9);
            FUNC_4(VAR_4, VAR_8, VAR_9);
            return VAR_7;
        }
    }

    FUNC_1(VAR_4, VAR_3);

    return VAR_1;
}
