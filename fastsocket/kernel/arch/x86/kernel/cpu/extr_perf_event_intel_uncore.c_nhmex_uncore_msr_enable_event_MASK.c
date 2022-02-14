
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw_perf_event {scalar_t__ idx; int config; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {TYPE_2__* pmu; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int event_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;

 if (VAR_5->idx >= VAR_2)
  FUNC_0(VAR_5->config_base, VAR_0);
 else if (VAR_3->pmu->type->event_mask & VAR_0)
  FUNC_0(VAR_5->config_base, VAR_5->config | VAR_1);
 else
  FUNC_0(VAR_5->config_base, VAR_5->config | VAR_0);
}
