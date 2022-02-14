
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event_extra {unsigned long long config; scalar_t__ reg; } ;
struct hw_perf_event {int config; scalar_t__ config_base; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;
 struct hw_perf_event_extra *VAR_5 = &VAR_4->extra_reg;
 struct hw_perf_event_extra *VAR_6 = &VAR_4->branch_reg;

 FUNC_0(VAR_5->reg, 0);
 if (VAR_5->config != ~0ULL || VAR_6->config != ~0ULL) {
  FUNC_0(VAR_5->reg + 1, VAR_5->config);
  FUNC_0(VAR_5->reg + 2, VAR_6->config);
  FUNC_0(VAR_5->reg, VAR_1);
 }
 FUNC_0(VAR_4->config_base, VAR_4->config | VAR_0);
}
