
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ weight; size_t event; scalar_t__ counter; int unassigned; } ;
struct perf_sched {size_t max_events; scalar_t__ max_weight; TYPE_1__ state; struct event_constraint** constraints; } ;
struct event_constraint {scalar_t__ weight; } ;



__attribute__((used)) static bool FUNC_0(struct perf_sched *VAR_0)
{
 struct event_constraint *VAR_1;

 if (!VAR_0->state.unassigned || !--VAR_0->state.unassigned)
  return 0;

 do {

  VAR_0->state.event++;
  if (VAR_0->state.event >= VAR_0->max_events) {

   VAR_0->state.event = 0;
   VAR_0->state.weight++;
   if (VAR_0->state.weight > VAR_0->max_weight)
    return 0;
  }
  VAR_1 = VAR_0->constraints[VAR_0->state.event];
 } while (VAR_1->weight != VAR_0->state.weight);

 VAR_0->state.counter = 0;

 return 1;
}
