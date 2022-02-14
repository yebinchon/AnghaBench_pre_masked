
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* ipc_importance_task_t ;
struct TYPE_6__ {int iie_task_refs_added; } ;
struct TYPE_5__ {TYPE_3__ iit_elem; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(ipc_importance_task_t VAR_1)
{
 if (VAR_0 == VAR_1)
  return;



 FUNC_1(&VAR_1->iit_elem);
}
