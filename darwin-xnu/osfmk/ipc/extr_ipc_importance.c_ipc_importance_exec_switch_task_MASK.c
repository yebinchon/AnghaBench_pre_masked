
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef TYPE_2__* ipc_importance_task_t ;
typedef int ipc_importance_inherit_t ;
struct TYPE_11__ {TYPE_1__* iit_task; } ;
struct TYPE_10__ {TYPE_2__* task_imp_base; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

ipc_importance_inherit_t
FUNC_5(
 task_t VAR_2,
 task_t VAR_3)
{
 ipc_importance_inherit_t VAR_4 = VAR_0;
 ipc_importance_task_t VAR_5 = VAR_1;
 ipc_importance_task_t VAR_6 = VAR_1;

 FUNC_3(VAR_2);


 VAR_4 = FUNC_0(VAR_2, VAR_3);


 FUNC_1();

 VAR_5 = VAR_2->task_imp_base;
 VAR_6 = VAR_3->task_imp_base;

 VAR_5->iit_task = VAR_3;
 VAR_6->iit_task = VAR_2;

 VAR_2->task_imp_base = VAR_6;
 VAR_3->task_imp_base = VAR_5;







 FUNC_2();

 return VAR_4;
}
