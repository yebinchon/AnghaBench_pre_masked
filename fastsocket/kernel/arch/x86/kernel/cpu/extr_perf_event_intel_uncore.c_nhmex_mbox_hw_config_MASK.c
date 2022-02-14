
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int config1; int config2; } ;
struct hw_perf_event_extra {int idx; int reg; unsigned long long config; } ;
struct TYPE_4__ {int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; } ;
struct intel_uncore_type {unsigned int msr_offset; } ;
struct intel_uncore_box {TYPE_3__* pmu; } ;
struct extra_reg {int msr; int event; int config_mask; int valid_mask; int idx; } ;
struct TYPE_6__ {unsigned int pmu_idx; struct intel_uncore_type* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (struct extra_reg*) ;
 struct extra_reg* VAR_6 ;

__attribute__((used)) static int FUNC_3(struct intel_uncore_box *VAR_7, struct perf_event *VAR_8)
{
 struct intel_uncore_type *VAR_9 = VAR_7->pmu->type;
 struct hw_perf_event_extra *VAR_10 = &VAR_8->hw.extra_reg;
 struct hw_perf_event_extra *VAR_11 = &VAR_8->hw.branch_reg;
 struct extra_reg *VAR_12;
 unsigned VAR_13;
 int VAR_14 = 0;

 if (FUNC_0(VAR_10->idx != -1))
  return -VAR_0;





 for (VAR_12 = VAR_6; VAR_12->msr; VAR_12++) {
  if (VAR_12->event != (VAR_8->hw.config & VAR_12->config_mask))
   continue;
  if (VAR_8->attr.config1 & ~VAR_12->valid_mask)
   return -VAR_0;
  if (VAR_12->idx == FUNC_1(VAR_10->idx, 0, 8) ||
      VAR_12->idx == FUNC_1(VAR_10->idx, 1, 8))
   continue;
  if (FUNC_0(VAR_14 >= 2))
   return -VAR_0;

  VAR_13 = VAR_12->msr + VAR_9->msr_offset * VAR_7->pmu->pmu_idx;
  if (FUNC_0(VAR_13 >= 0xffff || VAR_12->idx >= 0xff))
   return -VAR_0;


  if (VAR_12->idx == VAR_2)
   VAR_14 = 1;

  VAR_10->idx &= ~(0xff << (VAR_14 * 8));
  VAR_10->reg &= ~(0xffff << (VAR_14 * 16));
  VAR_10->idx |= FUNC_2(VAR_12) << (VAR_14 * 8);
  VAR_10->reg |= VAR_13 << (VAR_14 * 16);
  VAR_10->config = VAR_8->attr.config1;
  VAR_14++;
 }

 VAR_11->idx = VAR_1;
 if (VAR_8->attr.config2 & VAR_5)
  VAR_11->config = VAR_8->attr.config2;
 else
  VAR_11->config = ~0ULL;
 if (VAR_7->pmu->pmu_idx == 0)
  VAR_11->reg = VAR_3;
 else
  VAR_11->reg = VAR_4;

 return 0;
}
