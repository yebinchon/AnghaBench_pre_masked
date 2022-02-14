
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * run_queue_t ;
typedef TYPE_2__* processor_t ;
struct TYPE_5__ {int runq; TYPE_1__* processor_set; } ;
struct TYPE_4__ {int pset_runq; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) __attribute__((always_inline))
static inline run_queue_t FUNC_0(processor_t VAR_1)
{
 if (VAR_0)
  return &VAR_1->processor_set->pset_runq;
 else
  return &VAR_1->runq;
}
