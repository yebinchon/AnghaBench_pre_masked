
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event_extra {scalar_t__ idx; int config; scalar_t__ reg; } ;
struct hw_perf_event {int config; scalar_t__ config_base; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;
 struct hw_perf_event_extra *VAR_6 = &VAR_5->extra_reg;
 struct hw_perf_event_extra *VAR_7 = &VAR_5->branch_reg;

 if (VAR_6->idx != VAR_0) {
  FUNC_0(VAR_6->reg, VAR_6->config);
  FUNC_0(VAR_6->reg + 1, VAR_7->config);
 }
 FUNC_0(VAR_5->config_base, VAR_2 |
  (VAR_5->config & VAR_1));
}
