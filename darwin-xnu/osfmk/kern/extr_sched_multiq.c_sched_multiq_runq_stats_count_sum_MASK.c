
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_4__* processor_t ;
struct TYPE_10__ {scalar_t__ count_sum; } ;
struct TYPE_15__ {TYPE_1__ runq_stats; } ;
struct TYPE_12__ {scalar_t__ count_sum; } ;
struct TYPE_14__ {TYPE_3__ runq_stats; } ;
struct TYPE_13__ {scalar_t__ cpu_id; TYPE_2__* processor_set; } ;
struct TYPE_11__ {scalar_t__ cpu_set_low; } ;


 TYPE_8__* FUNC_0 (TYPE_4__*) ;
 TYPE_6__* FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static uint64_t
FUNC_2(processor_t VAR_0)
{





 uint64_t VAR_1 = FUNC_0(VAR_0)->runq_stats.count_sum;

 if (VAR_0->cpu_id == VAR_0->processor_set->cpu_set_low)
  return VAR_1 + FUNC_1(VAR_0)->runq_stats.count_sum;
 else
  return VAR_1;
}
