
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int nb_inputs; int nb_outputs; TYPE_3__* filter; int name; TYPE_4__* output_pads; TYPE_2__** outputs; TYPE_4__* input_pads; TYPE_1__** inputs; } ;
struct TYPE_12__ {int nb_filters; TYPE_6__** filters; } ;
struct TYPE_11__ {int type; int name; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int dst; } ;
struct TYPE_8__ {int src; } ;
typedef TYPE_4__ AVFilterPad ;
typedef TYPE_5__ AVFilterGraph ;
typedef TYPE_6__ AVFilterContext ;
typedef int AVClass ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFilterGraph *VAR_2, AVClass *VAR_3)
{
    AVFilterContext *VAR_4;
    int VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_2->nb_filters; VAR_5++) {
        const AVFilterPad *VAR_7;
        VAR_4 = VAR_2->filters[VAR_5];

        for (VAR_6 = 0; VAR_6 < VAR_4->nb_inputs; VAR_6++) {
            if (!VAR_4->inputs[VAR_6] || !VAR_4->inputs[VAR_6]->src) {
                VAR_7 = &VAR_4->input_pads[VAR_6];
                FUNC_2(VAR_3, VAR_0,
                       "Input pad \"%s\" with type %s of the filter instance \"%s\" of %s not connected to any source\n",
                       VAR_7->name, FUNC_1(VAR_7->type), VAR_4->name, VAR_4->filter->name);
                return FUNC_0(VAR_1);
            }
        }

        for (VAR_6 = 0; VAR_6 < VAR_4->nb_outputs; VAR_6++) {
            if (!VAR_4->outputs[VAR_6] || !VAR_4->outputs[VAR_6]->dst) {
                VAR_7 = &VAR_4->output_pads[VAR_6];
                FUNC_2(VAR_3, VAR_0,
                       "Output pad \"%s\" with type %s of the filter instance \"%s\" of %s not connected to any destination\n",
                       VAR_7->name, FUNC_1(VAR_7->type), VAR_4->name, VAR_4->filter->name);
                return FUNC_0(VAR_1);
            }
        }
    }

    return 0;
}
