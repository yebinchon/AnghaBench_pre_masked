
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {struct perf_event* group_leader; } ;
struct cpu_hw_events {int n_events; } ;
struct TYPE_2__ {int (* schedule_events ) (struct cpu_hw_events*,int,int *) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cpu_hw_events*) ;
 int FUNC_1 (struct cpu_hw_events*) ;
 struct cpu_hw_events* FUNC_2 () ;
 int FUNC_3 (struct cpu_hw_events*,struct perf_event*,int) ;
 int FUNC_4 (struct cpu_hw_events*) ;
 int FUNC_5 (struct cpu_hw_events*,int,int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_6(struct perf_event *VAR_2)
{
 struct perf_event *VAR_3 = VAR_2->group_leader;
 struct cpu_hw_events *VAR_4;
 int VAR_5 = -VAR_0, VAR_6;

 VAR_4 = FUNC_2();
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);






 VAR_6 = FUNC_3(VAR_4, VAR_3, 1);
 if (VAR_6 < 0)
  goto out;

 VAR_4->n_events = VAR_6;
 VAR_6 = FUNC_3(VAR_4, VAR_2, 0);
 if (VAR_6 < 0)
  goto out;

 VAR_4->n_events = VAR_6;

 VAR_5 = VAR_1.schedule_events(VAR_4, VAR_6, ((void*)0));

out:
 FUNC_4(VAR_4);
 return VAR_5;
}
