
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef TYPE_3__* processor_t ;
struct TYPE_8__ {int runq_bound_count; TYPE_1__* processor_set; } ;
struct TYPE_7__ {scalar_t__ bound_processor; } ;
struct TYPE_6__ {int pset_runq_bound_count; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) __attribute__((always_inline))
static inline void FUNC_1(processor_t VAR_2,
        thread_t VAR_3)
{
 if (VAR_3->bound_processor == VAR_0)
  return;

 FUNC_0(VAR_3->bound_processor == VAR_2);

 if (VAR_1)
  VAR_2->processor_set->pset_runq_bound_count++;

 VAR_2->runq_bound_count++;
}
