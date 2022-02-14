
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ purged_memory_critical; scalar_t__ purged_memory_warn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

boolean_t
FUNC_0(task_t VAR_4, int VAR_5)
{
 if (VAR_4 == ((void*)0)) {
  return VAR_0;
 }

 if (VAR_5 == VAR_3)
  return (VAR_4->purged_memory_warn ? VAR_1 : VAR_0);
 else if (VAR_5 == VAR_2)
  return (VAR_4->purged_memory_critical ? VAR_1 : VAR_0);
 else
  return VAR_1;
}
