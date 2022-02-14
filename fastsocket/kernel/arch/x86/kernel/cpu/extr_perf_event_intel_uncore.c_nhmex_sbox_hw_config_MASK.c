
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int config; unsigned long long config1; unsigned long long config2; } ;
struct hw_perf_event_extra {unsigned long long config; scalar_t__ idx; int reg; } ;
struct TYPE_4__ {struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;
struct intel_uncore_box {TYPE_3__* pmu; } ;
struct TYPE_6__ {scalar_t__ pmu_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event_extra *VAR_5 = &VAR_4->hw.extra_reg;
 struct hw_perf_event_extra *VAR_6 = &VAR_4->hw.branch_reg;

 if (VAR_4->attr.config & VAR_2) {
  VAR_5->config = VAR_4->attr.config1;
  VAR_6->config = VAR_4->attr.config2;
 } else {
  VAR_5->config = ~0ULL;
  VAR_6->config = ~0ULL;
 }

 if (VAR_3->pmu->pmu_idx == 0)
  VAR_5->reg = VAR_0;
 else
  VAR_5->reg = VAR_1;

 VAR_5->idx = 0;

 return 0;
}
