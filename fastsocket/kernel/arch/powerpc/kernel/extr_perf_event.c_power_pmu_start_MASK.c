
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; int idx; int period_left; int sample_period; } ;
struct perf_event {int pmu; TYPE_1__ hw; } ;
typedef int s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct perf_event*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 s64 VAR_6;
 unsigned long VAR_7;

 if (!VAR_3->hw.idx || !VAR_3->hw.sample_period)
  return;

 if (!(VAR_3->hw.state & VAR_1))
  return;

 if (VAR_4 & VAR_0)
  FUNC_0(!(VAR_3->hw.state & VAR_2));

 FUNC_3(VAR_5);
 FUNC_5(VAR_3->pmu);

 VAR_3->hw.state = 0;
 VAR_6 = FUNC_1(&VAR_3->hw.period_left);

 VAR_7 = 0;
 if (VAR_6 < 0x80000000L)
  VAR_7 = 0x80000000L - VAR_6;

 FUNC_7(VAR_3->hw.idx, VAR_7);

 FUNC_4(VAR_3);
 FUNC_6(VAR_3->pmu);
 FUNC_2(VAR_5);
}
