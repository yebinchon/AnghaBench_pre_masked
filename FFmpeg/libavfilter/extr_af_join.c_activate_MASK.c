
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_10__ {int nb_samples; } ;
struct TYPE_9__ {int nb_inputs; int * inputs; int * outputs; TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_4__** input_frames; } ;
typedef TYPE_1__ JoinContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int*,int *) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_4__**) ;
 int FUNC_4 (int ,int,int,TYPE_4__**) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_0)
{
    JoinContext *VAR_1 = VAR_0->priv;
    int VAR_2, VAR_3, VAR_4;
    int VAR_5 = 0;
    int64_t VAR_6;

    FUNC_0(VAR_0->outputs[0], VAR_0);

    if (!VAR_1->input_frames[0]) {
        VAR_3 = FUNC_3(VAR_0->inputs[0], &VAR_1->input_frames[0]);
        if (VAR_3 < 0) {
            return VAR_3;
        } else if (FUNC_1(VAR_0->inputs[0], &VAR_4, &VAR_6)) {
            FUNC_7(VAR_0->outputs[0], VAR_4, VAR_6);
            return 0;
        } else {
            if (FUNC_6(VAR_0->outputs[0]) && !VAR_1->input_frames[0]) {
                FUNC_5(VAR_0->inputs[0]);
                return 0;
            }
        }
        if (!VAR_1->input_frames[0]) {
            return 0;
        }
    }

    VAR_5 = VAR_1->input_frames[0]->nb_samples;

    for (VAR_2 = 1; VAR_2 < VAR_0->nb_inputs && VAR_5 > 0; VAR_2++) {
        if (VAR_1->input_frames[VAR_2])
            continue;

        if (FUNC_2(VAR_0->inputs[VAR_2], VAR_5) > 0) {
            VAR_3 = FUNC_4(VAR_0->inputs[VAR_2], VAR_5, VAR_5, &VAR_1->input_frames[VAR_2]);
            if (VAR_3 < 0) {
                return VAR_3;
            } else if (FUNC_1(VAR_0->inputs[VAR_2], &VAR_4, &VAR_6)) {
                FUNC_7(VAR_0->outputs[0], VAR_4, VAR_6);
                return 0;
            }
        } else {
            if (FUNC_6(VAR_0->outputs[0])) {
                FUNC_5(VAR_0->inputs[VAR_2]);
                return 0;
            }
        }
    }

    return FUNC_8(VAR_0);
}
