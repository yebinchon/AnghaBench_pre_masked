
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * inputs; int ** outputs; TYPE_1__* priv; } ;
struct TYPE_6__ {int * alpha_frame; int * main_frame; } ;
typedef TYPE_1__ AlphaMergeContext ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_1)
{
    AVFilterLink *VAR_2 = VAR_1->outputs[0];
    AlphaMergeContext *VAR_3 = VAR_1->priv;
    int VAR_4;

    FUNC_1(VAR_2, VAR_1);

    if (!VAR_3->main_frame) {
        VAR_4 = FUNC_5(VAR_1->inputs[0], &VAR_3->main_frame);
        if (VAR_4 < 0)
            return VAR_4;
    }

    if (!VAR_3->alpha_frame) {
        VAR_4 = FUNC_5(VAR_1->inputs[1], &VAR_3->alpha_frame);
        if (VAR_4 < 0)
            return VAR_4;
    }

    if (VAR_3->main_frame && VAR_3->alpha_frame) {
        FUNC_3(VAR_1, VAR_3->main_frame, VAR_3->alpha_frame);
        VAR_4 = FUNC_4(VAR_2, VAR_3->main_frame);
        FUNC_2(&VAR_3->alpha_frame);
        VAR_3->main_frame = ((void*)0);
        return VAR_4;
    }

    FUNC_0(VAR_1->inputs[0], VAR_2);
    FUNC_0(VAR_1->inputs[1], VAR_2);

    if (FUNC_7(VAR_1->outputs[0]) &&
        !FUNC_8(VAR_1->inputs[0]) &&
        !VAR_3->main_frame) {
        FUNC_6(VAR_1->inputs[0]);
        return 0;
    }

    if (FUNC_7(VAR_1->outputs[0]) &&
        !FUNC_8(VAR_1->inputs[1]) &&
        !VAR_3->alpha_frame) {
        FUNC_6(VAR_1->inputs[1]);
        return 0;
    }

    return VAR_0;
}
