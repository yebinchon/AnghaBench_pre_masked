
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config1; } ;
struct hw_perf_event_extra {int config; scalar_t__ idx; scalar_t__ reg; } ;
struct hw_perf_event {struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_2__ attr; struct hw_perf_event hw; } ;
struct intel_uncore_box {TYPE_1__* pmu; } ;
struct TYPE_3__ {int pmu_idx; int * type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_7, struct perf_event *VAR_8)
{
 struct hw_perf_event *VAR_9 = &VAR_8->hw;
 struct hw_perf_event_extra *VAR_10 = &VAR_9->extra_reg;

 if (VAR_7->pmu->type == &VAR_5) {
  VAR_10->reg = VAR_0 +
   VAR_2 * VAR_7->pmu->pmu_idx;
  VAR_10->config = VAR_8->attr.config1 &
   VAR_1;
 } else {
  if (VAR_7->pmu->type == &VAR_6) {
   VAR_10->reg = VAR_3;
   VAR_10->config = VAR_8->attr.config1 & VAR_4;
  } else {
   return 0;
  }
 }
 VAR_10->idx = 0;

 return 0;
}
