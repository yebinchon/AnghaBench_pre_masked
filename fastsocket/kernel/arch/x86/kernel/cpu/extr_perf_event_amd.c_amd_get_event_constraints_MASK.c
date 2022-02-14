
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int idx; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct event_constraint {int dummy; } ;
struct cpu_hw_events {struct amd_nb* amd_nb; } ;
struct amd_nb {struct event_constraint* event_constraints; struct perf_event** owners; } ;
struct TYPE_2__ {int num_counters; } ;


 scalar_t__ FUNC_0 (struct cpu_hw_events*) ;
 scalar_t__ FUNC_1 (struct hw_perf_event*) ;
 struct perf_event* FUNC_2 (struct perf_event**,int *,struct perf_event*) ;
 struct event_constraint VAR_0 ;
 struct event_constraint VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static struct event_constraint *
FUNC_3(struct cpu_hw_events *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 struct amd_nb *VAR_6 = VAR_3->amd_nb;
 struct perf_event *VAR_7 = ((void*)0);
 int VAR_8 = VAR_2.num_counters;
 int VAR_9, VAR_10, VAR_11 = -1;




 if (!(FUNC_0(VAR_3) && FUNC_1(VAR_5)))
  return &VAR_1;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {



  if (VAR_11 == -1 && !VAR_6->owners[VAR_9])
   VAR_11 = VAR_9;


  if (VAR_6->owners[VAR_9] == VAR_4)
   goto done;
 }




 if (VAR_5->idx != -1) {

  VAR_9 = VAR_5->idx;
 } else if (VAR_11 != -1) {

  VAR_9 = VAR_11;
 } else {





  VAR_9 = 0;
 }
 VAR_10 = VAR_9;
 do {
  VAR_7 = FUNC_2(VAR_6->owners+VAR_9, ((void*)0), VAR_4);
  if (!VAR_7)
   break;
  if (++VAR_9 == VAR_8)
   VAR_9 = 0;
 } while (VAR_9 != VAR_10);
done:
 if (!VAR_7)
  return &VAR_6->event_constraints[VAR_9];

 return &VAR_0;
}
