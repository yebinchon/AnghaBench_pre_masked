
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {scalar_t__ idx; int config; int config_base; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct intel_uncore_box *VAR_3, struct perf_event *VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_4->hw;

 if (VAR_5->idx < VAR_2)
  FUNC_0(VAR_5->config_base, VAR_5->config | VAR_1);
 else
  FUNC_0(VAR_5->config_base, VAR_0);
}
