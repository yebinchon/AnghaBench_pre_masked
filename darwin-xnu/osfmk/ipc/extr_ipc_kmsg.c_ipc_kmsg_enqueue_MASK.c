
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ipc_kmsg_t ;
typedef TYPE_2__* ipc_kmsg_queue_t ;
struct TYPE_7__ {TYPE_1__* ikmq_base; } ;
struct TYPE_6__ {struct TYPE_6__* ikm_next; struct TYPE_6__* ikm_prev; } ;


 TYPE_1__* VAR_0 ;

void
FUNC_0(
 ipc_kmsg_queue_t VAR_1,
 ipc_kmsg_t VAR_2)
{
 ipc_kmsg_t VAR_3 = VAR_1->ikmq_base;
 ipc_kmsg_t VAR_4;

 if (VAR_3 == VAR_0) {
  VAR_1->ikmq_base = VAR_2;
  VAR_2->ikm_next = VAR_2;
  VAR_2->ikm_prev = VAR_2;
 } else {
  VAR_4 = VAR_3->ikm_prev;
  VAR_2->ikm_next = VAR_3;
  VAR_2->ikm_prev = VAR_4;
  VAR_3->ikm_prev = VAR_2;
  VAR_4->ikm_next = VAR_2;
 }
}
