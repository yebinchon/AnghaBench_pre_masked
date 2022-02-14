
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int dummy; } ;
struct event_constraint {int dummy; } ;
struct cpu_hw_events {int dummy; } ;


 struct event_constraint* FUNC_0 (struct perf_event*) ;
 struct event_constraint* FUNC_1 (struct perf_event*) ;
 struct event_constraint* FUNC_2 (struct cpu_hw_events*,struct perf_event*) ;
 struct event_constraint* FUNC_3 (struct cpu_hw_events*,struct perf_event*) ;

__attribute__((used)) static struct event_constraint *
FUNC_4(struct cpu_hw_events *VAR_0, struct perf_event *VAR_1)
{
 struct event_constraint *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_3(VAR_0, VAR_1);
}
