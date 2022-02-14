
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hw_perf_event_extra {int alloc; int idx; int config; } ;
struct hw_perf_event {int config; struct hw_perf_event_extra branch_reg; struct hw_perf_event_extra extra_reg; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct intel_uncore_extra_reg {int config; scalar_t__ config1; scalar_t__ config2; int lock; int ref; } ;
struct intel_uncore_box {struct intel_uncore_extra_reg* shared_regs; } ;
struct event_constraint {int dummy; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct event_constraint VAR_0 ;
 int FUNC_4 (struct intel_uncore_box*,struct perf_event*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct intel_uncore_box*) ;

__attribute__((used)) static struct event_constraint *
FUNC_8(struct intel_uncore_box *VAR_1, struct perf_event *VAR_2)
{
 struct hw_perf_event *VAR_3 = &VAR_2->hw;
 struct hw_perf_event_extra *VAR_4 = &VAR_3->extra_reg;
 struct hw_perf_event_extra *VAR_5 = &VAR_3->branch_reg;
 struct intel_uncore_extra_reg *VAR_6;
 unsigned long VAR_7;
 int VAR_8, VAR_9;
 u64 VAR_10;
 bool VAR_11 = 0;

 if (!FUNC_7(VAR_1) && VAR_4->alloc)
  return ((void*)0);

 VAR_8 = VAR_4->idx % 6;
 VAR_10 = VAR_4->config;
again:
 VAR_9 = VAR_8;

 if (VAR_9 > 2)
  VAR_9--;
 VAR_9 += (VAR_4->idx / 6) * 5;

 VAR_6 = &VAR_1->shared_regs[VAR_9];
 FUNC_5(&VAR_6->lock, VAR_7);
 if (VAR_8 < 2) {
  if (!FUNC_3(&VAR_6->ref) || VAR_6->config == VAR_4->config) {
   FUNC_2(&VAR_6->ref);
   VAR_6->config = VAR_4->config;
   VAR_11 = 1;
  }
 } else if (VAR_8 == 2 || VAR_8 == 3) {




  u64 VAR_12 = 0xff << ((VAR_8 - 2) * 8);
  if (!FUNC_0(FUNC_3(&VAR_6->ref), VAR_8 - 2, 8) ||
    !((VAR_6->config ^ VAR_10) & VAR_12)) {
   FUNC_1(1 << ((VAR_8 - 2) * 8), &VAR_6->ref);
   VAR_6->config &= ~VAR_12;
   VAR_6->config |= VAR_10 & VAR_12;
   VAR_11 = 1;
  }
 } else {
  if (!FUNC_3(&VAR_6->ref) ||
    (VAR_6->config == (VAR_3->config >> 32) &&
     VAR_6->config1 == VAR_4->config &&
     VAR_6->config2 == VAR_5->config)) {
   FUNC_2(&VAR_6->ref);
   VAR_6->config = (VAR_3->config >> 32);
   VAR_6->config1 = VAR_4->config;
   VAR_6->config2 = VAR_5->config;
   VAR_11 = 1;
  }
 }
 FUNC_6(&VAR_6->lock, VAR_7);

 if (!VAR_11) {






  if (VAR_8 % 2)
   VAR_8--;
  else
   VAR_8++;
  if (VAR_8 != VAR_4->idx % 6) {
   if (VAR_8 == 2)
    VAR_10 >>= 8;
   else if (VAR_8 == 3)
    VAR_10 <<= 8;
   goto again;
  }
 } else {
  if (!FUNC_7(VAR_1)) {
   if (VAR_8 != VAR_4->idx % 6)
    FUNC_4(VAR_1, VAR_2);
   VAR_4->alloc = 1;
  }
  return ((void*)0);
 }
 return &VAR_0;
}
