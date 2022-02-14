
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ** inputs; int ** outputs; TYPE_2__* priv; } ;
struct TYPE_9__ {int eof_hrirs; int nb_inputs; int size; int have_hrirs; TYPE_1__* in; } ;
struct TYPE_8__ {int eof; } ;
typedef TYPE_2__ HeadphoneContext ;
typedef int AVFrame ;
typedef int AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 int FUNC_4 (int *,int ,int ,int **) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_1)
{
    HeadphoneContext *VAR_2 = VAR_1->priv;
    AVFilterLink *VAR_3 = VAR_1->inputs[0];
    AVFilterLink *VAR_4 = VAR_1->outputs[0];
    AVFrame *VAR_5 = ((void*)0);
    int VAR_6, VAR_7;

    FUNC_1(VAR_1->outputs[0], VAR_1);
    if (!VAR_2->eof_hrirs) {
        for (VAR_6 = 1; VAR_6 < VAR_2->nb_inputs; VAR_6++) {
            if (VAR_2->in[VAR_6].eof)
                continue;

            if ((VAR_7 = FUNC_2(VAR_1->inputs[VAR_6], VAR_6)) < 0)
                return VAR_7;

            if (!VAR_2->in[VAR_6].eof) {
                if (FUNC_7(VAR_1->inputs[VAR_6]) == VAR_0)
                    VAR_2->in[VAR_6].eof = 1;
            }
        }

        for (VAR_6 = 1; VAR_6 < VAR_2->nb_inputs; VAR_6++) {
            if (!VAR_2->in[VAR_6].eof)
                break;
        }

        if (VAR_6 != VAR_2->nb_inputs) {
            if (FUNC_6(VAR_1->outputs[0])) {
                for (VAR_6 = 1; VAR_6 < VAR_2->nb_inputs; VAR_6++) {
                    if (!VAR_2->in[VAR_6].eof)
                        FUNC_5(VAR_1->inputs[VAR_6]);
                }
            }

            return 0;
        } else {
            VAR_2->eof_hrirs = 1;
        }
    }

    if (!VAR_2->have_hrirs && VAR_2->eof_hrirs) {
        VAR_7 = FUNC_3(VAR_1, VAR_3);
        if (VAR_7 < 0)
            return VAR_7;
    }

    if ((VAR_7 = FUNC_4(VAR_1->inputs[0], VAR_2->size, VAR_2->size, &VAR_5)) > 0) {
        VAR_7 = FUNC_8(VAR_2, VAR_5, VAR_4);
        if (VAR_7 < 0)
            return VAR_7;
    }

    if (VAR_7 < 0)
        return VAR_7;

    FUNC_0(VAR_1->inputs[0], VAR_1->outputs[0]);
    if (FUNC_6(VAR_1->outputs[0]))
        FUNC_5(VAR_1->inputs[0]);

    return 0;
}
