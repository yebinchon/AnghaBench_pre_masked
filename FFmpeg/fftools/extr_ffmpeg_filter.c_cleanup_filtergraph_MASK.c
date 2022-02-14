
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nb_outputs; int nb_inputs; int graph; TYPE_1__** inputs; TYPE_2__** outputs; } ;
struct TYPE_6__ {int * filter; } ;
struct TYPE_5__ {int * filter; } ;
typedef TYPE_3__ FilterGraph ;
typedef int AVFilterContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(FilterGraph *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->nb_outputs; VAR_1++)
        VAR_0->outputs[VAR_1]->filter = (AVFilterContext *)((void*)0);
    for (VAR_1 = 0; VAR_1 < VAR_0->nb_inputs; VAR_1++)
        VAR_0->inputs[VAR_1]->filter = (AVFilterContext *)((void*)0);
    FUNC_0(&VAR_0->graph);
}
