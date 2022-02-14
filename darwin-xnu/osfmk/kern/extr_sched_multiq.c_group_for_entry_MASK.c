
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sched_group_t ;
typedef TYPE_1__* sched_entry_t ;
struct TYPE_3__ {int sched_pri; } ;



__attribute__((used)) __attribute__((always_inline))
static inline sched_group_t
FUNC_0(sched_entry_t VAR_0)
{
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wcast-align"
 sched_group_t VAR_1 = (sched_group_t)(VAR_0 - VAR_0->sched_pri);
#pragma clang diagnostic pop
 return VAR_1;
}
