
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ipc_kmsg_t ;
typedef TYPE_2__* ipc_kmsg_queue_t ;
struct TYPE_7__ {scalar_t__ ikmq_base; } ;
struct TYPE_6__ {struct TYPE_6__* ikm_next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

ipc_kmsg_t
FUNC_1(
 ipc_kmsg_queue_t VAR_1,
 ipc_kmsg_t VAR_2)
{
 ipc_kmsg_t VAR_3;

 FUNC_0(VAR_1->ikmq_base != VAR_0);

 VAR_3 = VAR_2->ikm_next;
 if (VAR_1->ikmq_base == VAR_3)
  VAR_3 = VAR_0;

 return VAR_3;
}
