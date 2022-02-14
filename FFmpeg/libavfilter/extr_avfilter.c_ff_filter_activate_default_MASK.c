
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int frame_blocked_in; scalar_t__ frame_wanted_out; } ;
struct TYPE_9__ {int fifo; int status_out; scalar_t__ status_in; int min_samples; } ;
struct TYPE_8__ {unsigned int nb_inputs; unsigned int nb_outputs; TYPE_5__** outputs; TYPE_2__** inputs; } ;
typedef TYPE_1__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1)
{
    unsigned VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_inputs; VAR_2++) {
        if (FUNC_5(VAR_1->inputs[VAR_2], VAR_1->inputs[VAR_2]->min_samples)) {
            return FUNC_1(VAR_1->inputs[VAR_2]);
        }
    }
    for (VAR_2 = 0; VAR_2 < VAR_1->nb_inputs; VAR_2++) {
        if (VAR_1->inputs[VAR_2]->status_in && !VAR_1->inputs[VAR_2]->status_out) {
            FUNC_0(!FUNC_2(&VAR_1->inputs[VAR_2]->fifo));
            return FUNC_4(VAR_1, VAR_1->inputs[VAR_2]);
        }
    }
    for (VAR_2 = 0; VAR_2 < VAR_1->nb_outputs; VAR_2++) {
        if (VAR_1->outputs[VAR_2]->frame_wanted_out &&
            !VAR_1->outputs[VAR_2]->frame_blocked_in) {
            return FUNC_3(VAR_1->outputs[VAR_2]);
        }
    }
    return VAR_0;
}
