
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* processor_set_t ;
struct TYPE_5__ {int runq_stats; int queue; scalar_t__ count; } ;
struct TYPE_6__ {TYPE_1__ rt_runq; } ;


 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

void
FUNC_3(processor_set_t VAR_0)
{
 FUNC_2(VAR_0);

 VAR_0->rt_runq.count = 0;
 FUNC_1(&VAR_0->rt_runq.queue);
 FUNC_0(&VAR_0->rt_runq.runq_stats, 0, sizeof VAR_0->rt_runq.runq_stats);
}
