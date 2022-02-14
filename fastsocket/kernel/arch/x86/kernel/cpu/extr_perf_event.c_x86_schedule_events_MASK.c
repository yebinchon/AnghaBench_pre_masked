
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hw_perf_event {int idx; } ;
struct event_constraint {unsigned long* idxmsk; int weight; } ;
struct cpu_hw_events {TYPE_2__** event_list; } ;
struct TYPE_5__ {struct hw_perf_event hw; } ;
struct TYPE_4__ {int (* put_event_constraints ) (struct cpu_hw_events*,TYPE_2__*) ;struct event_constraint* (* get_event_constraints ) (struct cpu_hw_events*,TYPE_2__*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,unsigned long*) ;
 int FUNC_2 (unsigned long*,int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct event_constraint**,int,int,int,int*) ;
 struct event_constraint* FUNC_6 (struct cpu_hw_events*,TYPE_2__*) ;
 int FUNC_7 (struct cpu_hw_events*,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int,unsigned long*) ;
 TYPE_1__ VAR_2 ;

int FUNC_9(struct cpu_hw_events *VAR_3, int VAR_4, int *VAR_5)
{
 struct event_constraint *VAR_6, *VAR_7[VAR_1];
 unsigned long VAR_8[FUNC_0(VAR_1)];
 int VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 struct hw_perf_event *VAR_13;

 FUNC_2(VAR_8, VAR_1);

 for (VAR_9 = 0, VAR_10 = VAR_1, VAR_11 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_6 = VAR_2.get_event_constraints(VAR_3, VAR_3->event_list[VAR_9]);
  VAR_7[VAR_9] = VAR_6;
  VAR_10 = FUNC_4(VAR_10, VAR_6->weight);
  VAR_11 = FUNC_3(VAR_11, VAR_6->weight);
 }




 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_13 = &VAR_3->event_list[VAR_9]->hw;
  VAR_6 = VAR_7[VAR_9];


  if (VAR_13->idx == -1)
   break;


  if (!FUNC_8(VAR_13->idx, VAR_6->idxmsk))
   break;


  if (FUNC_8(VAR_13->idx, VAR_8))
   break;

  FUNC_1(VAR_13->idx, VAR_8);
  if (VAR_5)
   VAR_5[VAR_9] = VAR_13->idx;
 }


 if (VAR_9 != VAR_4)
  VAR_12 = FUNC_5(VAR_7, VAR_4, VAR_10, VAR_11, VAR_5);




 if (!VAR_5 || VAR_12) {
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   if (VAR_2.put_event_constraints)
    VAR_2.put_event_constraints(VAR_3, VAR_3->event_list[VAR_9]);
  }
 }
 return VAR_12 ? -VAR_0 : 0;
}
