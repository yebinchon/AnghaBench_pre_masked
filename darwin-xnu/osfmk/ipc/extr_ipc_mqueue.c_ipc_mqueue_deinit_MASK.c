
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ipc_mqueue_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int imq_wait_queue; int imq_set_queue; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(
 ipc_mqueue_t VAR_0)
{
 boolean_t VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  FUNC_2(&VAR_0->imq_set_queue);
 else
  FUNC_1(&VAR_0->imq_wait_queue);
}
