
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long long config; int config2; int config1; } ;
struct hw_perf_event_extra {int idx; int config; int reg; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_2__ attr; struct hw_perf_event hw; } ;
struct intel_uncore_box {TYPE_1__* pmu; } ;
struct TYPE_3__ {int pmu_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 struct hw_perf_event_extra *VAR_6 = &VAR_4->hw.extra_reg;
 struct hw_perf_event_extra *VAR_7 = &VAR_4->hw.branch_reg;
 int VAR_8, VAR_9;

 VAR_9 = (VAR_4->hw.config & VAR_1) >>
  VAR_2;
 if (VAR_9 >= 0x18)
  return -VAR_0;

 VAR_6->idx = VAR_9;
 VAR_6->config = VAR_4->attr.config1;

 VAR_8 = VAR_9 / 6 + VAR_3->pmu->pmu_idx * 4;
 VAR_9 %= 6;
 switch (VAR_9) {
 case 0:
  VAR_6->reg = FUNC_0(VAR_8);
  break;
 case 1:
  VAR_6->reg = FUNC_1(VAR_8);
  break;
 case 2:
 case 3:
  VAR_6->reg = FUNC_2(VAR_8);
  break;
 case 4:
 case 5:
  if (VAR_9 == 4)
   VAR_6->reg = FUNC_3(VAR_8);
  else
   VAR_6->reg = FUNC_4(VAR_8);
  VAR_7->config = VAR_4->attr.config2;
  VAR_5->config |= VAR_4->attr.config & (~0ULL << 32);
  break;
 };
 return 0;
}
