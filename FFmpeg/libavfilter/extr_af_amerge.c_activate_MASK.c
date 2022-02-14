
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_5__ {int nb_inputs; int * inputs; int * outputs; } ;
typedef TYPE_1__ AVFilterContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ,int*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(AVFilterContext *VAR_0)
{
    int VAR_1, VAR_2;
    int VAR_3, VAR_4;
    int64_t VAR_5;

    FUNC_1(VAR_0->outputs[0], VAR_0);

    VAR_4 = FUNC_3(VAR_0->inputs[0]);
    for (VAR_1 = 1; VAR_1 < VAR_0->nb_inputs && VAR_4 > 0; VAR_1++) {
        VAR_4 = FUNC_0(FUNC_3(VAR_0->inputs[VAR_1]), VAR_4);
    }

    if (VAR_4) {
        VAR_3 = FUNC_7(VAR_0, VAR_4);
        if (VAR_3 < 0)
            return VAR_3;
    }

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_inputs; VAR_1++) {
        if (FUNC_3(VAR_0->inputs[VAR_1]))
            continue;

        if (FUNC_2(VAR_0->inputs[VAR_1], &VAR_2, &VAR_5)) {
            FUNC_6(VAR_0->outputs[0], VAR_2, VAR_5);
            return 0;
        } else if (FUNC_5(VAR_0->outputs[0])) {
            FUNC_4(VAR_0->inputs[VAR_1]);
            return 0;
        }
    }

    return 0;
}
