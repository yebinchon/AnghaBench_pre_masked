
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct TYPE_22__ {int nb_threads; } ;
struct TYPE_21__ {struct TYPE_21__* next; int pad_idx; TYPE_1__* filter_ctx; } ;
struct TYPE_20__ {int nb_outputs; TYPE_16__** outputs; int graph_desc; } ;
struct TYPE_19__ {int output_pads; } ;
struct TYPE_18__ {TYPE_3__* out_tmp; int name; int type; TYPE_2__* graph; } ;
typedef TYPE_2__ FilterGraph ;
typedef TYPE_3__ AVFilterInOut ;
typedef TYPE_4__ AVFilterGraph ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_16__**,int) ;
 TYPE_16__* FUNC_2 (int) ;
 TYPE_4__* FUNC_3 () ;
 int FUNC_4 (TYPE_4__**) ;
 int FUNC_5 (TYPE_4__*,int ,TYPE_3__**,TYPE_3__**) ;
 int FUNC_6 (TYPE_3__**) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_2__*,TYPE_3__*) ;

int FUNC_11(FilterGraph *VAR_1)
{
    AVFilterInOut *VAR_2, *VAR_3, *VAR_4;
    AVFilterGraph *VAR_5;
    int VAR_6 = 0;



    VAR_5 = FUNC_3();
    if (!VAR_5)
        return FUNC_0(VAR_0);
    VAR_5->nb_threads = 1;

    VAR_6 = FUNC_5(VAR_5, VAR_1->graph_desc, &VAR_2, &VAR_3);
    if (VAR_6 < 0)
        goto fail;

    for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
        FUNC_10(VAR_1, VAR_4);

    for (VAR_4 = VAR_3; VAR_4;) {
        FUNC_1(VAR_1->outputs, VAR_1->nb_outputs);
        VAR_1->outputs[VAR_1->nb_outputs - 1] = FUNC_2(sizeof(*VAR_1->outputs[0]));
        if (!VAR_1->outputs[VAR_1->nb_outputs - 1])
            FUNC_9(1);

        VAR_1->outputs[VAR_1->nb_outputs - 1]->graph = VAR_1;
        VAR_1->outputs[VAR_1->nb_outputs - 1]->out_tmp = VAR_4;
        VAR_1->outputs[VAR_1->nb_outputs - 1]->type = FUNC_7(VAR_4->filter_ctx->output_pads,
                                                                         VAR_4->pad_idx);
        VAR_1->outputs[VAR_1->nb_outputs - 1]->name = FUNC_8(VAR_1, VAR_4, 0);
        VAR_4 = VAR_4->next;
        VAR_1->outputs[VAR_1->nb_outputs - 1]->out_tmp->next = ((void*)0);
    }

fail:
    FUNC_6(&VAR_2);
    FUNC_4(&VAR_5);
    return VAR_6;
}
