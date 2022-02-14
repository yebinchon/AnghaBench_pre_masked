
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ipc_importance_task_t ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__ iit_assertcnt; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

boolean_t
FUNC_2(ipc_importance_task_t VAR_2)
{
 if (VAR_1 == VAR_2) {
    return VAR_0;
 }
 return (FUNC_0(VAR_2) ||
  (FUNC_1(VAR_2) &&
   VAR_2->iit_assertcnt > 0));
}
