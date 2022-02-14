
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {scalar_t__ idx; } ;
struct TYPE_2__ {struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ hw; } ;
struct cpu_hw_events {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpu_hw_events*,struct hw_perf_event_extra*) ;

__attribute__((used)) static void
FUNC_1(struct cpu_hw_events *VAR_1,
     struct perf_event *VAR_2)
{
 struct hw_perf_event_extra *VAR_3;

 VAR_3 = &VAR_2->hw.extra_reg;
 if (VAR_3->idx != VAR_0)
  FUNC_0(VAR_1, VAR_3);

 VAR_3 = &VAR_2->hw.branch_reg;
 if (VAR_3->idx != VAR_0)
  FUNC_0(VAR_1, VAR_3);
}
