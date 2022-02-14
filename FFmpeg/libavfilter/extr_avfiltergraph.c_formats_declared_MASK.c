
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nb_inputs; int nb_outputs; TYPE_2__** outputs; TYPE_1__** inputs; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ in_channel_layouts; scalar_t__ in_samplerates; int in_formats; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ out_channel_layouts; scalar_t__ out_samplerates; int out_formats; } ;
typedef TYPE_3__ AVFilterContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(AVFilterContext *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_inputs; VAR_2++) {
        if (!VAR_1->inputs[VAR_2]->out_formats)
            return 0;
        if (VAR_1->inputs[VAR_2]->type == VAR_0 &&
            !(VAR_1->inputs[VAR_2]->out_samplerates &&
              VAR_1->inputs[VAR_2]->out_channel_layouts))
            return 0;
    }
    for (VAR_2 = 0; VAR_2 < VAR_1->nb_outputs; VAR_2++) {
        if (!VAR_1->outputs[VAR_2]->in_formats)
            return 0;
        if (VAR_1->outputs[VAR_2]->type == VAR_0 &&
            !(VAR_1->outputs[VAR_2]->in_samplerates &&
              VAR_1->outputs[VAR_2]->in_channel_layouts))
            return 0;
    }
    return 1;
}
