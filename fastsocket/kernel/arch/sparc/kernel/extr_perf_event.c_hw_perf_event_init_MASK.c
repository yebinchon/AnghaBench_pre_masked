
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct perf_event {int dummy; } ;


 struct pmu const* FUNC_0 (int) ;
 int FUNC_1 (struct perf_event*) ;
 struct pmu const VAR_0 ;

const struct pmu *FUNC_2(struct perf_event *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 if (VAR_2)
  return FUNC_0(VAR_2);
 return &VAR_0;
}
