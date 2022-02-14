
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef scalar_t__ processor_t ;
struct TYPE_3__ {unsigned long long count_sum; } ;
struct TYPE_4__ {TYPE_1__ runq_stats; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_0(processor_t VAR_2)
{
 if (VAR_1 == VAR_2) {
  return VAR_0->runq_stats.count_sum;
 } else {
  return 0ULL;
 }
}
