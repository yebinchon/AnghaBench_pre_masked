
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {int idx; scalar_t__ alloc; } ;
struct TYPE_2__ {struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_1__ hw; } ;
struct intel_uncore_extra_reg {int ref; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 scalar_t__ FUNC_2 (struct intel_uncore_box*) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore_box *VAR_0, struct perf_event *VAR_1)
{
 struct intel_uncore_extra_reg *VAR_2;
 struct hw_perf_event_extra *VAR_3 = &VAR_1->hw.extra_reg;
 int VAR_4, VAR_5;

 if (FUNC_2(VAR_0) || !VAR_3->alloc)
  return;

 VAR_4 = VAR_3->idx % 6;
 VAR_5 = VAR_4;
 if (VAR_5 > 2)
  VAR_5--;
 VAR_5 += (VAR_3->idx / 6) * 5;

 VAR_2 = &VAR_0->shared_regs[VAR_5];
 if (VAR_4 == 2 || VAR_4 == 3)
  FUNC_1(1 << ((VAR_4 - 2) * 8), &VAR_2->ref);
 else
  FUNC_0(&VAR_2->ref);

 VAR_3->alloc = 0;
}
