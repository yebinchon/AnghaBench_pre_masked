
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mach_msg_priority_t ;
typedef TYPE_1__* ipc_kmsg_t ;
typedef TYPE_2__* ipc_kmsg_queue_t ;
typedef int boolean_t ;
struct TYPE_6__ {TYPE_1__* ikmq_base; } ;
struct TYPE_5__ {scalar_t__ ikm_qos_override; struct TYPE_5__* ikm_prev; } ;


 int VAR_0 ;
 int VAR_1 ;

boolean_t
FUNC_0(
 ipc_kmsg_queue_t VAR_2,
 ipc_kmsg_t VAR_3,
 mach_msg_priority_t VAR_4)
{
 ipc_kmsg_t VAR_5 = VAR_2->ikmq_base;
 ipc_kmsg_t VAR_6 = VAR_3;


 while (VAR_4 > VAR_6->ikm_qos_override) {
  VAR_6->ikm_qos_override = VAR_4;
  if (VAR_6 == VAR_5)
   return VAR_1;
   VAR_6 = VAR_6->ikm_prev;
 }
 return VAR_0;
}
