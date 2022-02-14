
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef TYPE_2__* ipc_importance_task_t ;
struct TYPE_12__ {TYPE_1__* iit_task; } ;
struct TYPE_11__ {TYPE_2__* task_imp_base; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(task_t VAR_3)
{
 ipc_importance_task_t VAR_4;

 FUNC_6(VAR_3);
 FUNC_1();
 VAR_4 = VAR_3->task_imp_base;


 if (VAR_0 == VAR_4) {
  FUNC_4();
  FUNC_7(VAR_3);
  return;
 }


 FUNC_0(VAR_4->iit_task == VAR_3);
 VAR_4->iit_task = VAR_1;
 VAR_3->task_imp_base = VAR_0;
 FUNC_7(VAR_3);


 FUNC_2(VAR_4, VAR_2);

 FUNC_3(VAR_4);



 FUNC_5(VAR_3);
}
