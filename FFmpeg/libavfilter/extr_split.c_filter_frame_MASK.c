
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nb_outputs; int * outputs; } ;
struct TYPE_4__ {TYPE_2__* dst; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(AVFilterLink *VAR_2, AVFrame *VAR_3)
{
    AVFilterContext *VAR_4 = VAR_2->dst;
    int VAR_5, VAR_6 = VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_4->nb_outputs; VAR_5++) {
        AVFrame *VAR_7;

        if (FUNC_4(VAR_4->outputs[VAR_5]))
            continue;
        VAR_7 = FUNC_1(VAR_3);
        if (!VAR_7) {
            VAR_6 = FUNC_0(VAR_1);
            break;
        }

        VAR_6 = FUNC_3(VAR_4->outputs[VAR_5], VAR_7);
        if (VAR_6 < 0)
            break;
    }
    FUNC_2(&VAR_3);
    return VAR_6;
}
