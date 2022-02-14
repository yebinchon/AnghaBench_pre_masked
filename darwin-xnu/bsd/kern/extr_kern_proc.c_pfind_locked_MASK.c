
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_10__ {TYPE_2__* lh_first; } ;
struct TYPE_8__ {TYPE_2__* le_next; } ;
struct TYPE_9__ {scalar_t__ p_pid; TYPE_1__ p_hash; } ;


 TYPE_7__* FUNC_0 (scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (char*,TYPE_2__*,TYPE_2__*,scalar_t__,scalar_t__) ;

proc_t
FUNC_2(pid_t VAR_1)
{
 proc_t VAR_2;




 if (!VAR_1)
  return (VAR_0);

 for (VAR_2 = FUNC_0(VAR_1)->lh_first; VAR_2 != 0; VAR_2 = VAR_2->p_hash.le_next) {
  if (VAR_2->p_pid == VAR_1) {






   return (VAR_2);
  }
 }
 return (((void*)0));
}
