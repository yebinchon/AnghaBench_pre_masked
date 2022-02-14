
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event_extra {scalar_t__ idx; int config; int reg; } ;
struct hw_perf_event {int config; int config_base; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_1,
     struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 struct hw_perf_event_extra *VAR_4 = &VAR_3->extra_reg;

 if (VAR_4->idx != VAR_0)
  FUNC_0(VAR_4->reg, VAR_4->config);

 FUNC_0(VAR_3->config_base, VAR_3->config);
}
