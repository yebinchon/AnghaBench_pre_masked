
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int nb_outputs; TYPE_1__** outputs; } ;
struct TYPE_4__ {scalar_t__ frame_blocked_in; } ;
typedef TYPE_2__ AVFilterContext ;



__attribute__((used)) static void FUNC_0(AVFilterContext *VAR_0)
{
    unsigned VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_outputs; VAR_1++)
        VAR_0->outputs[VAR_1]->frame_blocked_in = 0;
}
