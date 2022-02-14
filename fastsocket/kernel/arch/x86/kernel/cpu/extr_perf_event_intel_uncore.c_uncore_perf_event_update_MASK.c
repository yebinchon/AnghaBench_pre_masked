
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {scalar_t__ idx; int prev_count; } ;
struct perf_event {int count; TYPE_1__ hw; } ;
struct intel_uncore_box {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct intel_uncore_box*) ;
 int FUNC_4 (struct intel_uncore_box*) ;
 int FUNC_5 (struct intel_uncore_box*,struct perf_event*) ;

__attribute__((used)) static void FUNC_6(struct intel_uncore_box *VAR_1, struct perf_event *VAR_2)
{
 u64 VAR_3, VAR_4, VAR_5;
 int VAR_6;

 if (VAR_2->hw.idx >= VAR_0)
  VAR_6 = 64 - FUNC_3(VAR_1);
 else
  VAR_6 = 64 - FUNC_4(VAR_1);


again:
 VAR_3 = FUNC_1(&VAR_2->hw.prev_count);
 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (FUNC_2(&VAR_2->hw.prev_count, VAR_4) != VAR_3)
  goto again;

 VAR_5 = (VAR_4 << VAR_6) - (VAR_3 << VAR_6);
 VAR_5 >>= VAR_6;

 FUNC_0(VAR_5, &VAR_2->count);
}
