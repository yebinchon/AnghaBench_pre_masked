
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef TYPE_3__* processor_t ;
struct TYPE_8__ {unsigned long long count_sum; } ;
struct TYPE_10__ {TYPE_2__ runq_stats; } ;
struct TYPE_9__ {scalar_t__ cpu_id; TYPE_1__* processor_set; } ;
struct TYPE_7__ {scalar_t__ cpu_set_low; } ;


 TYPE_5__* FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static uint64_t
FUNC_1(processor_t VAR_0)
{
 if (VAR_0->cpu_id == VAR_0->processor_set->cpu_set_low)
  return FUNC_0(VAR_0)->runq_stats.count_sum;
 else
  return 0ULL;
}
