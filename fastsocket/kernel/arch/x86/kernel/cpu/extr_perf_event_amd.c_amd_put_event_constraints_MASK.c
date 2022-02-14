
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hw_perf_event {int dummy; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct cpu_hw_events {struct amd_nb* amd_nb; } ;
struct amd_nb {struct perf_event** owners; } ;
struct TYPE_2__ {int num_counters; } ;


 scalar_t__ FUNC_0 (struct cpu_hw_events*) ;
 scalar_t__ FUNC_1 (struct hw_perf_event*) ;
 int FUNC_2 (struct perf_event**,struct perf_event*,int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_3(struct cpu_hw_events *VAR_1,
          struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 struct amd_nb *VAR_4 = VAR_1->amd_nb;
 int VAR_5;




 if (!(FUNC_0(VAR_1) && FUNC_1(VAR_3)))
  return;
 for (VAR_5 = 0; VAR_5 < VAR_0.num_counters; VAR_5++) {
  if (VAR_4->owners[VAR_5] == VAR_2) {
   (void)FUNC_2(VAR_4->owners+VAR_5, VAR_2, ((void*)0));
   break;
  }
 }
}
