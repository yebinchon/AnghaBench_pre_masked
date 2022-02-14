
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu {int dummy; } ;
struct TYPE_2__ {int type; } ;
struct perf_event {int (* destroy ) (struct perf_event*) ;struct pmu* pmu; struct perf_event* group_leader; TYPE_1__ attr; } ;


 int VAR_0 ;



 int FUNC_0 (struct perf_event*) ;
 struct pmu VAR_1 ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (struct perf_event*) ;

__attribute__((used)) static int FUNC_4(struct perf_event *VAR_2)
{
 struct pmu *VAR_3;
 int VAR_4;

 switch (VAR_2->attr.type) {
 case 128:
 case 130:
 case 129:
  break;

 default:
  return -VAR_0;
 }

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4) {





  VAR_3 = VAR_2->pmu;
  VAR_2->pmu = &VAR_1;

  if (VAR_2->group_leader != VAR_2)
   VAR_4 = FUNC_3(VAR_2);
  else
   VAR_4 = FUNC_2(VAR_2);

  VAR_2->pmu = VAR_3;
 }
 if (VAR_4) {
  if (VAR_2->destroy)
   VAR_2->destroy(VAR_2);
 }

 return VAR_4;
}
