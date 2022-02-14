
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* ipc_mqueue_t ;
struct TYPE_4__ {int imq_wait_queue; int imq_klist; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int ,int *,int ,int ) ;

void
FUNC_4(
 ipc_mqueue_t VAR_4)
{
 if (FUNC_0(VAR_4)) {
  FUNC_2(&VAR_4->imq_klist);
  FUNC_1(&VAR_4->imq_klist);
 }

 FUNC_3(&VAR_4->imq_wait_queue,
      VAR_0,
      VAR_1,
      ((void*)0),
      VAR_2,
      VAR_3);
}
