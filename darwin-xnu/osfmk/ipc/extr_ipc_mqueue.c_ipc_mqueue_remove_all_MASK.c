
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct waitq_set {int dummy; } ;
typedef TYPE_1__* ipc_mqueue_t ;
struct TYPE_4__ {struct waitq_set imq_set_queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct waitq_set*) ;
 int FUNC_3 (struct waitq_set*) ;

void
FUNC_4(ipc_mqueue_t VAR_0)
{
 struct waitq_set *VAR_1 = &VAR_0->imq_set_queue;

 FUNC_1(VAR_0);
 FUNC_0(FUNC_3(VAR_1));
 FUNC_2(VAR_1);

}
