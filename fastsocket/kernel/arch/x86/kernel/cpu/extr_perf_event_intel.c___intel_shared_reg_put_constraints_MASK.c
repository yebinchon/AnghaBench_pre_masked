
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {size_t idx; scalar_t__ alloc; } ;
struct er_account {int ref; } ;
struct cpu_hw_events {TYPE_1__* shared_regs; } ;
struct TYPE_2__ {struct er_account* regs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct cpu_hw_events *VAR_0,
       struct hw_perf_event_extra *VAR_1)
{
 struct er_account *VAR_2;






 if (!VAR_1->alloc)
  return;

 VAR_2 = &VAR_0->shared_regs->regs[VAR_1->idx];


 FUNC_0(&VAR_2->ref);


 VAR_1->alloc = 0;
}
