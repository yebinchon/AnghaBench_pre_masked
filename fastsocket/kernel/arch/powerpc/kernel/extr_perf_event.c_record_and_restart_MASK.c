
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct pt_regs {int dummy; } ;
struct perf_sample_data {scalar_t__ period; int addr; } ;
struct TYPE_4__ {int sample_type; } ;
struct TYPE_3__ {scalar_t__ sample_period; int state; scalar_t__ last_period; int period_left; int prev_count; int idx; } ;
struct perf_event {TYPE_2__ attr; TYPE_1__ hw; int count; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,unsigned long) ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (struct perf_event*,struct perf_sample_data*,struct pt_regs*) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (struct pt_regs*,int *) ;
 int FUNC_7 (struct perf_sample_data*,unsigned long long) ;
 int FUNC_8 (struct perf_event*,int ) ;
 int FUNC_9 (struct pt_regs*) ;
 int FUNC_10 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_11(struct perf_event *VAR_2, unsigned long VAR_3,
          struct pt_regs *VAR_4)
{
 u64 VAR_5 = VAR_2->hw.sample_period;
 s64 VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 if (VAR_2->hw.state & VAR_0) {
  FUNC_10(VAR_2->hw.idx, 0);
  return;
 }


 VAR_6 = FUNC_2(&VAR_2->hw.prev_count);
 VAR_7 = FUNC_0(VAR_6, VAR_3);
 FUNC_1(VAR_7, &VAR_2->count);





 VAR_3 = 0;
 VAR_8 = FUNC_2(&VAR_2->hw.period_left) - VAR_7;
 if (VAR_7 == 0)
  VAR_8++;
 if (VAR_5) {
  if (VAR_8 <= 0) {
   VAR_8 += VAR_5;
   if (VAR_8 <= 0)
    VAR_8 = VAR_5;
   VAR_9 = FUNC_9(VAR_4);
   VAR_2->hw.last_period = VAR_2->hw.sample_period;
  }
  if (VAR_8 < 0x80000000LL)
   VAR_3 = 0x80000000LL - VAR_8;
 }

 FUNC_10(VAR_2->hw.idx, VAR_3);
 FUNC_3(&VAR_2->hw.prev_count, VAR_3);
 FUNC_3(&VAR_2->hw.period_left, VAR_8);
 FUNC_5(VAR_2);




 if (VAR_9) {
  struct perf_sample_data VAR_10;

  FUNC_7(&VAR_10, ~0ULL);
  VAR_10.period = VAR_2->hw.last_period;

  if (VAR_2->attr.sample_type & VAR_1)
   FUNC_6(VAR_4, &VAR_10.addr);

  if (FUNC_4(VAR_2, &VAR_10, VAR_4))
   FUNC_8(VAR_2, 0);
 }
}
