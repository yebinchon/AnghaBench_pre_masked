
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct TYPE_3__ {scalar_t__ purged_memory_critical; scalar_t__ purged_memory_warn; } ;



void
FUNC_0(task_t VAR_0)
{
 if (VAR_0 == ((void*)0)) {
  return;
 }

 VAR_0->purged_memory_warn = 0;
 VAR_0->purged_memory_critical = 0;
}
