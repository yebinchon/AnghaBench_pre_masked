
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {struct perf_event* group_leader; } ;
struct intel_uncore_pmu {int type; } ;
struct intel_uncore_box {int n_events; struct intel_uncore_pmu* pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_uncore_box*) ;
 int FUNC_1 () ;
 struct intel_uncore_box* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct intel_uncore_box*,int *,int) ;
 int FUNC_4 (struct intel_uncore_box*,struct perf_event*,int) ;

__attribute__((used)) static int FUNC_5(struct intel_uncore_pmu *VAR_2,
    struct perf_event *VAR_3)
{
 struct perf_event *VAR_4 = VAR_3->group_leader;
 struct intel_uncore_box *VAR_5;
 int VAR_6 = -VAR_0, VAR_7;

 VAR_5 = FUNC_2(VAR_2->type, FUNC_1());
 if (!VAR_5)
  return -VAR_1;

 VAR_5->pmu = VAR_2;






 VAR_7 = FUNC_4(VAR_5, VAR_4, 1);
 if (VAR_7 < 0)
  goto out;

 VAR_5->n_events = VAR_7;
 VAR_7 = FUNC_4(VAR_5, VAR_3, 0);
 if (VAR_7 < 0)
  goto out;

 VAR_5->n_events = VAR_7;

 VAR_6 = FUNC_3(VAR_5, ((void*)0), VAR_7);
out:
 FUNC_0(VAR_5);
 return VAR_6;
}
