
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ipc_kmsg_t ;
typedef TYPE_2__* ipc_kmsg_queue_t ;
struct TYPE_10__ {TYPE_1__* ikmq_base; } ;
struct TYPE_9__ {scalar_t__ ikm_next; scalar_t__ ikm_prev; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

void
FUNC_3(
 ipc_kmsg_queue_t VAR_2,
 ipc_kmsg_t VAR_3)
{
 ipc_kmsg_t VAR_4, VAR_5;

 FUNC_1(VAR_2->ikmq_base != VAR_1);

 VAR_4 = VAR_3->ikm_next;
 VAR_5 = VAR_3->ikm_prev;

 if (VAR_4 == VAR_3) {
  FUNC_1(VAR_5 == VAR_3);
  FUNC_1(VAR_2->ikmq_base == VAR_3);

  VAR_2->ikmq_base = VAR_1;
 } else {
  if (FUNC_0(VAR_4->ikm_prev != VAR_3 || VAR_5->ikm_next != VAR_3)) {
   FUNC_2("ipc_kmsg_rmqueue: inconsistent prev/next pointers. "
    "(prev->next: %p, next->prev: %p, kmsg: %p)",
    VAR_5->ikm_next, VAR_4->ikm_prev, VAR_3);
  }

  if (VAR_2->ikmq_base == VAR_3)
   VAR_2->ikmq_base = VAR_4;

  VAR_4->ikm_prev = VAR_5;
  VAR_5->ikm_next = VAR_4;
 }

 FUNC_1((VAR_3->ikm_next = VAR_0) == VAR_0);
 FUNC_1((VAR_3->ikm_prev = VAR_0) == VAR_0);
}
