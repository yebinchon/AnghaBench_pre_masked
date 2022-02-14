
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_3__ {int purged_memory_warn; int purged_memory_critical; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(task_t VAR_2, int VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  return;
 }

 if (VAR_3 == VAR_1)
  VAR_2->purged_memory_warn = 1;
 else if (VAR_3 == VAR_0)
  VAR_2->purged_memory_critical = 1;
}
