
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event_extra {int idx; int config; int reg; } ;
struct hw_perf_event {int config; int config_base; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_uncore_box*,int) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct intel_uncore_box *VAR_2, struct perf_event *VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_3->hw;
 struct hw_perf_event_extra *VAR_5 = &VAR_4->extra_reg;
 struct hw_perf_event_extra *VAR_6 = &VAR_4->branch_reg;
 int VAR_7, VAR_8;

 VAR_7 = VAR_5->idx % 6;
 VAR_8 = VAR_7;
 if (VAR_8 > 2)
  VAR_8--;
 VAR_8 += (VAR_5->idx / 6) * 5;

 switch (VAR_7) {
 case 0:
 case 1:
  FUNC_1(VAR_5->reg, VAR_5->config);
  break;
 case 2:
 case 3:
  FUNC_1(VAR_5->reg, FUNC_0(VAR_2, VAR_8));
  break;
 case 4:
 case 5:
  FUNC_1(VAR_5->reg, VAR_5->config);
  FUNC_1(VAR_5->reg + 1, VAR_4->config >> 32);
  FUNC_1(VAR_5->reg + 2, VAR_6->config);
  break;
 };

 FUNC_1(VAR_4->config_base, VAR_0 |
  (VAR_4->config & VAR_1));
}
