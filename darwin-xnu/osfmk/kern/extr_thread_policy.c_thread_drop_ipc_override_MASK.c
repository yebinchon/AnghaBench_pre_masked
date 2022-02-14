
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct task_pend_token {int dummy; } ;
typedef int spl_t ;
struct TYPE_7__ {scalar_t__ ipc_overrides; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int ,struct task_pend_token*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct task_pend_token*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(thread_t VAR_3)
{
 struct task_pend_token VAR_4 = {};

 spl_t VAR_5 = FUNC_2();
 FUNC_4(VAR_3);

 FUNC_0(VAR_3->ipc_overrides > 0);

 if (--VAR_3->ipc_overrides == 0) {





  FUNC_1(VAR_3, VAR_0,
                                    VAR_1, VAR_2,
                                    0, &VAR_4);
 }

 FUNC_6(VAR_3);
 FUNC_3(VAR_5);

 FUNC_5(VAR_3, &VAR_4);
}
