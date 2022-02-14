
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* processor_t ;
struct TYPE_6__ {scalar_t__ current_pri; struct TYPE_6__* processor_primary; } ;
struct TYPE_5__ {scalar_t__ sched_pri; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(processor_t VAR_2, thread_t VAR_3)
{
 if (VAR_2->processor_primary != VAR_2) {




  if ((VAR_2->processor_primary->current_pri >= VAR_0) && ((VAR_3->sched_pri < VAR_0) || !VAR_1)) {
   return 1;
  }
 }

 return 0;
}
