
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int index; int nb_outputs; int format; int nb_inputs; struct TYPE_10__** inputs; int frame_queue; struct TYPE_10__* graph; TYPE_2__* ist; struct TYPE_10__** outputs; TYPE_1__* ost; } ;
struct TYPE_9__ {int nb_filters; TYPE_3__** filters; } ;
struct TYPE_8__ {TYPE_3__* filter; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ InputStream ;
typedef TYPE_3__ FilterGraph ;
typedef int AVFrame ;


 int FUNC_0 (TYPE_3__**,int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 TYPE_3__** VAR_0 ;
 int VAR_1 ;

int FUNC_4(InputStream *VAR_2, OutputStream *VAR_3)
{
    FilterGraph *VAR_4 = FUNC_2(sizeof(*VAR_4));

    if (!VAR_4)
        FUNC_3(1);
    VAR_4->index = VAR_1;

    FUNC_0(VAR_4->outputs, VAR_4->nb_outputs);
    if (!(VAR_4->outputs[0] = FUNC_2(sizeof(*VAR_4->outputs[0]))))
        FUNC_3(1);
    VAR_4->outputs[0]->ost = VAR_3;
    VAR_4->outputs[0]->graph = VAR_4;
    VAR_4->outputs[0]->format = -1;

    VAR_3->filter = VAR_4->outputs[0];

    FUNC_0(VAR_4->inputs, VAR_4->nb_inputs);
    if (!(VAR_4->inputs[0] = FUNC_2(sizeof(*VAR_4->inputs[0]))))
        FUNC_3(1);
    VAR_4->inputs[0]->ist = VAR_2;
    VAR_4->inputs[0]->graph = VAR_4;
    VAR_4->inputs[0]->format = -1;

    VAR_4->inputs[0]->frame_queue = FUNC_1(8 * sizeof(AVFrame*));
    if (!VAR_4->inputs[0]->frame_queue)
        FUNC_3(1);

    FUNC_0(VAR_2->filters, VAR_2->nb_filters);
    VAR_2->filters[VAR_2->nb_filters - 1] = VAR_4->inputs[0];

    FUNC_0(VAR_0, VAR_1);
    VAR_0[VAR_1 - 1] = VAR_4;

    return 0;
}
