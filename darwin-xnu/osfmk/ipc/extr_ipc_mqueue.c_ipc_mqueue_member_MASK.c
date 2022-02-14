
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
typedef TYPE_1__* ipc_mqueue_t ;
typedef int boolean_t ;
struct TYPE_4__ {struct waitq_set imq_set_queue; struct waitq imq_wait_queue; } ;


 int FUNC_0 (struct waitq*,struct waitq_set*) ;

boolean_t
FUNC_1(
 ipc_mqueue_t VAR_0,
 ipc_mqueue_t VAR_1)
{
 struct waitq *VAR_2 = &VAR_0->imq_wait_queue;
 struct waitq_set *VAR_3 = &VAR_1->imq_set_queue;

 return FUNC_0(VAR_2, VAR_3);

}
