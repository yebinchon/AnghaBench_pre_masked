
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int p_memstat_effectivepriority; int p_memstat_requestedpriority; } ;



int
FUNC_0(proc_t VAR_0, boolean_t VAR_1)
{
 if (VAR_0) {
  if (VAR_1) {
   return VAR_0->p_memstat_effectivepriority;
  } else {
   return VAR_0->p_memstat_requestedpriority;
  }
 }
 return 0;
}
