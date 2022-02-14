
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int event_base; int config_base; scalar_t__ last_tag; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_box {scalar_t__* tags; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_uncore_box*,int) ;
 int FUNC_1 (struct intel_uncore_box*) ;
 int FUNC_2 (struct intel_uncore_box*) ;
 int FUNC_3 (struct intel_uncore_box*,int) ;

__attribute__((used)) static void FUNC_4(struct intel_uncore_box *VAR_1, struct perf_event *VAR_2, int VAR_3)
{
 struct hw_perf_event *VAR_4 = &VAR_2->hw;

 VAR_4->idx = VAR_3;
 VAR_4->last_tag = ++VAR_1->tags[VAR_3];

 if (VAR_4->idx == VAR_0) {
  VAR_4->event_base = FUNC_2(VAR_1);
  VAR_4->config_base = FUNC_1(VAR_1);
  return;
 }

 VAR_4->config_base = FUNC_0(VAR_1, VAR_4->idx);
 VAR_4->event_base = FUNC_3(VAR_1, VAR_4->idx);
}
