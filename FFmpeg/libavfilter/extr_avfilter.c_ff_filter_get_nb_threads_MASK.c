
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nb_threads; TYPE_1__* graph; } ;
struct TYPE_4__ {int nb_threads; } ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (scalar_t__,int) ;

int FUNC_1(AVFilterContext *VAR_0)
{
     if (VAR_0->nb_threads > 0)
         return FUNC_0(VAR_0->nb_threads, VAR_0->graph->nb_threads);
     return VAR_0->graph->nb_threads;
}
