
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event_extra {int idx; int reg; unsigned long long config; } ;
struct hw_perf_event {int config_base; int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct intel_uncore_box*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct intel_uncore_box *VAR_5, struct perf_event *VAR_6)
{
 struct hw_perf_event *VAR_7 = &VAR_6->hw;
 struct hw_perf_event_extra *VAR_8 = &VAR_7->extra_reg;
 struct hw_perf_event_extra *VAR_9 = &VAR_7->branch_reg;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_8->idx, 0, 8);
 if (VAR_10 != 0xff)
  FUNC_2(FUNC_0(VAR_8->reg, 0, 16),
   FUNC_1(VAR_5, VAR_10));
 VAR_10 = FUNC_0(VAR_8->idx, 1, 8);
 if (VAR_10 != 0xff)
  FUNC_2(FUNC_0(VAR_8->reg, 1, 16),
   FUNC_1(VAR_5, VAR_10));

 FUNC_2(VAR_9->reg, 0);
 if (VAR_9->config != ~0ULL) {
  FUNC_2(VAR_9->reg + 1,
   VAR_9->config & VAR_2);
  FUNC_2(VAR_9->reg + 2, VAR_0 &
   (VAR_9->config >> VAR_1));
  FUNC_2(VAR_9->reg, VAR_3);
 }

 FUNC_2(VAR_7->config_base, VAR_7->config | VAR_4);
}
