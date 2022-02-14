
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_3__ {scalar_t__ low_mem_notified_critical; scalar_t__ low_mem_notified_warn; } ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(task_t VAR_2, int VAR_3)
{
 if (VAR_2 == ((void*)0)) {
  return;
 }

 if (VAR_3 == VAR_1)
  VAR_2->low_mem_notified_warn = 0;
 else if (VAR_3 == VAR_0)
  VAR_2->low_mem_notified_critical = 0;
}
