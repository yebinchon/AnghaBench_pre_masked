
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int config; int prev_count; } ;
struct perf_event {TYPE_1__ hw; } ;


 int FUNC_0 (int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_0)
{
 u64 VAR_1, VAR_2;
 int VAR_3;

 do {
  VAR_1 = FUNC_2(&VAR_0->hw.prev_count);
  VAR_3 = FUNC_0(VAR_0->hw.config, &VAR_2);
  if (VAR_3) {
   if (VAR_3 != 3)
    break;





   VAR_2 = 0;
  }
 } while (FUNC_1(&VAR_0->hw.prev_count, VAR_1, VAR_2) != VAR_1);

 return VAR_3;
}
