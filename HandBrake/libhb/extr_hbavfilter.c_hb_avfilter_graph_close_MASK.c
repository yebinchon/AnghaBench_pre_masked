
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame; struct TYPE_4__* settings; int * avgraph; } ;
typedef TYPE_1__ hb_avfilter_graph_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3(hb_avfilter_graph_t ** VAR_0)
{
    hb_avfilter_graph_t * VAR_1 = *VAR_0;

    if (VAR_1 == ((void*)0))
    {
        return;
    }
    if (VAR_1->avgraph != ((void*)0))
    {
        FUNC_1(&VAR_1->avgraph);
    }
    FUNC_2(VAR_1->settings);
    FUNC_0(&VAR_1->frame);
    FUNC_2(VAR_1);
    *VAR_0 = ((void*)0);
}
