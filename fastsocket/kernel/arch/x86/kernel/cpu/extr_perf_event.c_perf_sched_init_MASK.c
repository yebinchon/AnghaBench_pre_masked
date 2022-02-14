
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int event; int weight; int unassigned; } ;
struct perf_sched {int max_events; int max_weight; TYPE_1__ state; struct event_constraint** constraints; } ;
struct event_constraint {int weight; } ;


 int FUNC_0 (struct perf_sched*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct perf_sched *VAR_0, struct event_constraint **VAR_1,
       int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->max_events = VAR_2;
 VAR_0->max_weight = VAR_4;
 VAR_0->constraints = VAR_1;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_1[VAR_5]->weight == VAR_3)
   break;
 }

 VAR_0->state.event = VAR_5;
 VAR_0->state.weight = VAR_3;
 VAR_0->state.unassigned = VAR_2;
}
