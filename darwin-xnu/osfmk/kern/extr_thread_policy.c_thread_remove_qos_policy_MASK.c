
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct task_pend_token {int dummy; } ;
typedef int kern_return_t ;
struct TYPE_7__ {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,struct task_pend_token*) ;
 int FUNC_3 (TYPE_1__*,struct task_pend_token*) ;

kern_return_t
FUNC_4(thread_t VAR_2)
{
 struct task_pend_token VAR_3 = {};

 FUNC_0(VAR_2);
 if (!VAR_2->active) {
  FUNC_1(VAR_2);
  return VAR_1;
 }

 FUNC_3(VAR_2, &VAR_3);

 FUNC_1(VAR_2);

 FUNC_2(VAR_2, &VAR_3);

 return VAR_0;
}
