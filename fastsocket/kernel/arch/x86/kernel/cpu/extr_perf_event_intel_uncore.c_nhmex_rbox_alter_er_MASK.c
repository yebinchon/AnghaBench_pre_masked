
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event_extra {int idx; int config; int reg; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {TYPE_1__* pmu; } ;
struct TYPE_2__ {int pmu_idx; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;

void FUNC_4(struct intel_uncore_box *VAR_1, struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 struct hw_perf_event_extra *VAR_4 = &VAR_3->extra_reg;
 int VAR_5;


 if (VAR_4->idx % 2) {
  VAR_4->idx--;
  VAR_3->config -= 1 << VAR_0;
 } else {
  VAR_4->idx++;
  VAR_3->config += 1 << VAR_0;
 }


 VAR_5 = VAR_4->idx / 6 + VAR_1->pmu->pmu_idx * 4;
 switch (VAR_4->idx % 6) {
 case 0:
  VAR_4->reg = FUNC_0(VAR_5);
  break;
 case 1:
  VAR_4->reg = FUNC_1(VAR_5);
  break;
 case 2:

  VAR_4->config >>= 8;
  break;
 case 3:

  VAR_4->config <<= 8;
  break;
 case 4:
  VAR_4->reg = FUNC_2(VAR_5);
  break;
 case 5:
  VAR_4->reg = FUNC_3(VAR_5);
  break;
 };
}
