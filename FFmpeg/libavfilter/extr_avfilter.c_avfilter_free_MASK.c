
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int nb_inputs; int nb_outputs; struct TYPE_12__* internal; struct TYPE_12__* var_values; int * enable; scalar_t__ command_queue; struct TYPE_12__* priv; struct TYPE_12__* outputs; struct TYPE_12__* inputs; struct TYPE_12__* output_pads; struct TYPE_12__* input_pads; struct TYPE_12__* name; int hw_device_ctx; TYPE_1__* filter; scalar_t__ graph; } ;
struct TYPE_11__ {scalar_t__ priv_class; int (* uninit ) (TYPE_2__*) ;} ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__,TYPE_2__*) ;
 int FUNC_7 (TYPE_2__) ;
 int FUNC_8 (TYPE_2__*) ;

void FUNC_9(AVFilterContext *VAR_0)
{
    int VAR_1;

    if (!VAR_0)
        return;

    if (VAR_0->graph)
        FUNC_6(VAR_0->graph, VAR_0);

    if (VAR_0->filter->uninit)
        VAR_0->filter->uninit(VAR_0);

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_inputs; VAR_1++) {
        FUNC_7(VAR_0->inputs[VAR_1]);
    }
    for (VAR_1 = 0; VAR_1 < VAR_0->nb_outputs; VAR_1++) {
        FUNC_7(VAR_0->outputs[VAR_1]);
    }

    if (VAR_0->filter->priv_class)
        FUNC_4(VAR_0->priv);

    FUNC_0(&VAR_0->hw_device_ctx);

    FUNC_3(&VAR_0->name);
    FUNC_3(&VAR_0->input_pads);
    FUNC_3(&VAR_0->output_pads);
    FUNC_3(&VAR_0->inputs);
    FUNC_3(&VAR_0->outputs);
    FUNC_3(&VAR_0->priv);
    while(VAR_0->command_queue){
        FUNC_5(VAR_0);
    }
    FUNC_4(VAR_0);
    FUNC_1(VAR_0->enable);
    VAR_0->enable = ((void*)0);
    FUNC_3(&VAR_0->var_values);
    FUNC_3(&VAR_0->internal);
    FUNC_2(VAR_0);
}
