
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {unsigned int nb_inputs; unsigned int nb_outputs; TYPE_2__** inputs; TYPE_1__** outputs; } ;
struct TYPE_9__ {unsigned int nb_filters; int sink_links_count; TYPE_2__** sink_links; TYPE_4__** filters; } ;
struct TYPE_8__ {int age_index; TYPE_3__* graph; } ;
struct TYPE_7__ {int age_index; TYPE_3__* graph; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterGraph ;
typedef TYPE_4__ AVFilterContext ;
typedef int AVClass ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_2__** FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(AVFilterGraph *VAR_3,
                                             AVClass *VAR_4)
{
    unsigned VAR_5, VAR_6;
    int VAR_7 = 0, VAR_8 = 0;
    AVFilterContext *VAR_9;
    AVFilterLink **VAR_10;

    for (VAR_5 = 0; VAR_5 < VAR_3->nb_filters; VAR_5++) {
        VAR_9 = VAR_3->filters[VAR_5];
        for (VAR_6 = 0; VAR_6 < VAR_9->nb_inputs; VAR_6++) {
            VAR_9->inputs[VAR_6]->graph = VAR_3;
            VAR_9->inputs[VAR_6]->age_index = -1;
        }
        for (VAR_6 = 0; VAR_6 < VAR_9->nb_outputs; VAR_6++) {
            VAR_9->outputs[VAR_6]->graph = VAR_3;
            VAR_9->outputs[VAR_6]->age_index= -1;
        }
        if (!VAR_9->nb_outputs) {
            if (VAR_9->nb_inputs > VAR_2 - VAR_7)
                return FUNC_0(VAR_0);
            VAR_7 += VAR_9->nb_inputs;
        }
    }
    VAR_10 = FUNC_2(VAR_7, sizeof(*VAR_10));
    if (!VAR_10)
        return FUNC_0(VAR_1);
    for (VAR_5 = 0; VAR_5 < VAR_3->nb_filters; VAR_5++) {
        VAR_9 = VAR_3->filters[VAR_5];
        if (!VAR_9->nb_outputs) {
            for (VAR_6 = 0; VAR_6 < VAR_9->nb_inputs; VAR_6++) {
                VAR_10[VAR_8] = VAR_9->inputs[VAR_6];
                VAR_9->inputs[VAR_6]->age_index = VAR_8++;
            }
        }
    }
    FUNC_1(VAR_8 == VAR_7);
    VAR_3->sink_links = VAR_10;
    VAR_3->sink_links_count = VAR_7;
    return 0;
}
