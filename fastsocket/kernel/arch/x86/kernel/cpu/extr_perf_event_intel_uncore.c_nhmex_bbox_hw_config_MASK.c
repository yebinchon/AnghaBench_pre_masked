
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int config2; int config1; } ;
struct hw_perf_event_extra {int config; scalar_t__ idx; int reg; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {TYPE_2__ attr; struct hw_perf_event hw; } ;
struct intel_uncore_box {TYPE_1__* pmu; } ;
struct TYPE_3__ {scalar_t__ pmu_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct intel_uncore_box *VAR_6, struct perf_event *VAR_7)
{
 struct hw_perf_event *VAR_8 = &VAR_7->hw;
 struct hw_perf_event_extra *VAR_9 = &VAR_8->extra_reg;
 struct hw_perf_event_extra *VAR_10 = &VAR_8->branch_reg;
 int VAR_11, VAR_12;

 VAR_11 = (VAR_8->config & VAR_4) >>
  VAR_5;
 VAR_12 = (VAR_8->config & VAR_2) >>
    VAR_3;


 if ((VAR_11 == 0 && VAR_12 > 0x3) || (VAR_11 == 1 && VAR_12 > 0x6) ||
     (VAR_11 == 2 && VAR_12 != 0x4) || VAR_11 == 3)
  return 0;

 if (VAR_6->pmu->pmu_idx == 0)
  VAR_9->reg = VAR_0;
 else
  VAR_9->reg = VAR_1;
 VAR_9->idx = 0;
 VAR_9->config = VAR_7->attr.config1;
 VAR_10->config = VAR_7->attr.config2;
 return 0;
}
