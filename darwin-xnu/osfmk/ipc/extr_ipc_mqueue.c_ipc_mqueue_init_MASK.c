
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* ipc_mqueue_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {int imq_klist; int imq_fport; int imq_fullwaiters; int imq_qlimit; scalar_t__ imq_msgcount; scalar_t__ imq_seqno; int imq_messages; int imq_wait_queue; int imq_set_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int,int *,int *) ;

void
FUNC_4(
 ipc_mqueue_t VAR_6,
 boolean_t VAR_7)
{
 if (VAR_7) {
  FUNC_3(&VAR_6->imq_set_queue,
          VAR_3|VAR_5,
          ((void*)0), ((void*)0));
 } else {
  FUNC_2(&VAR_6->imq_wait_queue, VAR_3 | VAR_4);
  FUNC_0(&VAR_6->imq_messages);
  VAR_6->imq_seqno = 0;
  VAR_6->imq_msgcount = 0;
  VAR_6->imq_qlimit = VAR_2;
  VAR_6->imq_fullwaiters = VAR_0;



 }
 FUNC_1(&VAR_6->imq_klist);
}
