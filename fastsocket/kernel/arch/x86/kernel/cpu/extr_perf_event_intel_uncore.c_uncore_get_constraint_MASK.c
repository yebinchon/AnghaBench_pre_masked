
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {size_t idx; int alloc; scalar_t__ config; } ;
struct TYPE_2__ {struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_extra_reg {scalar_t__ config1; scalar_t__ config2; int lock; int ref; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;
struct event_constraint {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct event_constraint VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct intel_uncore_box*) ;

__attribute__((used)) static struct event_constraint *
FUNC_5(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct intel_uncore_extra_reg *VAR_4;
 struct hw_perf_event_extra *VAR_5 = &VAR_3->hw.extra_reg;
 struct hw_perf_event_extra *VAR_6 = &VAR_3->hw.branch_reg;
 unsigned long VAR_7;
 bool VAR_8 = 0;






 if (VAR_5->idx == VAR_0 ||
     (!FUNC_4(VAR_2) && VAR_5->alloc))
  return ((void*)0);

 VAR_4 = &VAR_2->shared_regs[VAR_5->idx];
 FUNC_2(&VAR_4->lock, VAR_7);
 if (!FUNC_1(&VAR_4->ref) ||
     (VAR_4->config1 == VAR_5->config && VAR_4->config2 == VAR_6->config)) {
  FUNC_0(&VAR_4->ref);
  VAR_4->config1 = VAR_5->config;
  VAR_4->config2 = VAR_6->config;
  VAR_8 = 1;
 }
 FUNC_3(&VAR_4->lock, VAR_7);

 if (VAR_8) {
  if (!FUNC_4(VAR_2))
   VAR_5->alloc = 1;
  return ((void*)0);
 }

 return &VAR_1;
}
