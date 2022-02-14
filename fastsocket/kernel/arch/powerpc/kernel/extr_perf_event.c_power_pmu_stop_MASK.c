
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int idx; int sample_period; } ;
struct perf_event {int pmu; TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct perf_event *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_2->hw.idx || !VAR_2->hw.sample_period)
  return;

 if (VAR_2->hw.state & VAR_0)
  return;

 FUNC_1(VAR_4);
 FUNC_3(VAR_2->pmu);

 FUNC_5(VAR_2);
 VAR_2->hw.state |= VAR_0 | VAR_1;
 FUNC_6(VAR_2->hw.idx, 0);

 FUNC_2(VAR_2);
 FUNC_4(VAR_2->pmu);
 FUNC_0(VAR_4);
}
