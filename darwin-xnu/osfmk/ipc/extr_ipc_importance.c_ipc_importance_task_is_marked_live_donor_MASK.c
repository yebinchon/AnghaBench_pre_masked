
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ipc_importance_task_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ iit_live_donor; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

boolean_t
FUNC_0(ipc_importance_task_t VAR_2)
{
 if (VAR_1 == VAR_2) {
    return VAR_0;
 }
 return (0 != VAR_2->iit_live_donor);
}
