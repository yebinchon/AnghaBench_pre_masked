
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {int period; } ;
struct TYPE_2__ {unsigned long sample_period; int state; int last_period; int period_left; int prev_count; int idx; } ;
struct perf_event {TYPE_1__ hw; int count; } ;
typedef unsigned long s64 ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 (unsigned long,int *) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct perf_sample_data*,int ) ;
 int FUNC_7 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_8(struct perf_event *VAR_1, unsigned long VAR_2,
          struct pt_regs *VAR_3)
{
 u64 VAR_4 = VAR_1->hw.sample_period;
 s64 VAR_5, VAR_6, VAR_7;
 int VAR_8 = 0;

 if (VAR_1->hw.state & VAR_0) {
  FUNC_7(VAR_1->hw.idx, 0);
  return;
 }


 VAR_5 = FUNC_2(&VAR_1->hw.prev_count);
 VAR_6 = (VAR_2 - VAR_5) & 0xfffffffful;
 FUNC_1(VAR_6, &VAR_1->count);





 VAR_2 = 0;
 VAR_7 = FUNC_2(&VAR_1->hw.period_left) - VAR_6;
 if (VAR_4) {
  if (VAR_7 <= 0) {
   VAR_7 += VAR_4;
   if (VAR_7 <= 0)
    VAR_7 = VAR_4;
   VAR_8 = 1;
  }
  if (VAR_7 < 0x80000000LL)
   VAR_2 = 0x80000000LL - VAR_7;
 }

 FUNC_7(VAR_1->hw.idx, VAR_2);
 FUNC_3(&VAR_1->hw.prev_count, VAR_2);
 FUNC_3(&VAR_1->hw.period_left, VAR_7);
 FUNC_5(VAR_1);




 if (VAR_8) {
  struct perf_sample_data VAR_9;

  FUNC_6(&VAR_9, 0);
  VAR_9.period = VAR_1->hw.last_period;

  if (FUNC_4(VAR_1, &VAR_9, VAR_3))
   FUNC_0(VAR_1, 0);
 }
}
