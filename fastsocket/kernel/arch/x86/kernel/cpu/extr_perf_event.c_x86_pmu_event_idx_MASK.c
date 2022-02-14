
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idx; } ;
struct perf_event {TYPE_1__ hw; } ;
struct TYPE_4__ {scalar_t__ num_counters_fixed; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct perf_event *VAR_2)
{
 int VAR_3 = VAR_2->hw.idx;

 if (VAR_1.num_counters_fixed && VAR_3 >= VAR_0) {
  VAR_3 -= VAR_0;
  VAR_3 |= 1 << 30;
 }

 return VAR_3 + 1;
}
