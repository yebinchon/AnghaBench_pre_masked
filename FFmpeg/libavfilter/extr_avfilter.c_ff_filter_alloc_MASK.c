
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int priv_size; scalar_t__ (* preinit ) (TYPE_1__*) ;int (* uninit ) (TYPE_1__*) ;int outputs; int inputs; int * priv_class; } ;
struct TYPE_11__ {int nb_inputs; int nb_outputs; struct TYPE_11__* internal; struct TYPE_11__* priv; struct TYPE_11__* output_pads; struct TYPE_11__* outputs; struct TYPE_11__* input_pads; struct TYPE_11__* inputs; int execute; int * name; TYPE_2__ const* filter; int * av_class; } ;
typedef int AVFilterPad ;
typedef int AVFilterLink ;
typedef TYPE_1__ AVFilterContext ;
typedef TYPE_2__ AVFilter ;
typedef int AVClass ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**) ;
 void* FUNC_2 (int,int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int * FUNC_6 (char const*) ;
 int VAR_0 ;
 void* FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

AVFilterContext *FUNC_11(const AVFilter *VAR_2, const char *VAR_3)
{
    AVFilterContext *VAR_4;
    int VAR_5 = 0;

    if (!VAR_2)
        return ((void*)0);

    VAR_4 = FUNC_3(sizeof(AVFilterContext));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->av_class = &VAR_0;
    VAR_4->filter = VAR_2;
    VAR_4->name = VAR_3 ? FUNC_6(VAR_3) : ((void*)0);
    if (VAR_2->priv_size) {
        VAR_4->priv = FUNC_3(VAR_2->priv_size);
        if (!VAR_4->priv)
            goto err;
    }
    if (VAR_2->preinit) {
        if (VAR_2->preinit(VAR_4) < 0)
            goto err;
        VAR_5 = 1;
    }

    FUNC_5(VAR_4);
    if (VAR_2->priv_class) {
        *(const AVClass**)VAR_4->priv = VAR_2->priv_class;
        FUNC_5(VAR_4->priv);
    }

    VAR_4->internal = FUNC_3(sizeof(*VAR_4->internal));
    if (!VAR_4->internal)
        goto err;
    VAR_4->internal->execute = VAR_1;

    VAR_4->nb_inputs = FUNC_7(VAR_2->inputs);
    if (VAR_4->nb_inputs ) {
        VAR_4->input_pads = FUNC_2(VAR_4->nb_inputs, sizeof(AVFilterPad));
        if (!VAR_4->input_pads)
            goto err;
        FUNC_8(VAR_4->input_pads, VAR_2->inputs, sizeof(AVFilterPad) * VAR_4->nb_inputs);
        VAR_4->inputs = FUNC_4(VAR_4->nb_inputs, sizeof(AVFilterLink*));
        if (!VAR_4->inputs)
            goto err;
    }

    VAR_4->nb_outputs = FUNC_7(VAR_2->outputs);
    if (VAR_4->nb_outputs) {
        VAR_4->output_pads = FUNC_2(VAR_4->nb_outputs, sizeof(AVFilterPad));
        if (!VAR_4->output_pads)
            goto err;
        FUNC_8(VAR_4->output_pads, VAR_2->outputs, sizeof(AVFilterPad) * VAR_4->nb_outputs);
        VAR_4->outputs = FUNC_4(VAR_4->nb_outputs, sizeof(AVFilterLink*));
        if (!VAR_4->outputs)
            goto err;
    }

    return VAR_4;

err:
    if (VAR_5)
        VAR_2->uninit(VAR_4);
    FUNC_1(&VAR_4->inputs);
    FUNC_1(&VAR_4->input_pads);
    VAR_4->nb_inputs = 0;
    FUNC_1(&VAR_4->outputs);
    FUNC_1(&VAR_4->output_pads);
    VAR_4->nb_outputs = 0;
    FUNC_1(&VAR_4->priv);
    FUNC_1(&VAR_4->internal);
    FUNC_0(VAR_4);
    return ((void*)0);
}
