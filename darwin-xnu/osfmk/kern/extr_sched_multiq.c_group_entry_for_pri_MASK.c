
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sched_group_t ;
typedef int * sched_entry_t ;
typedef size_t integer_t ;
struct TYPE_3__ {int * entries; } ;



__attribute__((used)) __attribute__((always_inline))
static inline sched_entry_t
FUNC_0(sched_group_t VAR_0, integer_t VAR_1)
{
 return &VAR_0->entries[VAR_1];
}
