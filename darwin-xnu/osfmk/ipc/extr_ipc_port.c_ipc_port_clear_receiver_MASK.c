
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
typedef TYPE_2__* ipc_mqueue_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {scalar_t__ imq_seqno; } ;
struct TYPE_9__ {scalar_t__ ip_in_pset; TYPE_2__ ip_messages; scalar_t__ ip_strict_guard; scalar_t__ ip_guarded; scalar_t__ ip_context; scalar_t__ ip_mscount; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_1__*) ;

boolean_t
FUNC_6(
 ipc_port_t VAR_1,
 boolean_t VAR_2)
{
 ipc_mqueue_t VAR_3 = &VAR_1->ip_messages;
 boolean_t VAR_4 = VAR_0;






 if (VAR_1->ip_in_pset != 0) {
  FUNC_5(VAR_1);
  FUNC_0(VAR_1->ip_in_pset == 0);
 }





 FUNC_1(VAR_3);
 FUNC_3(VAR_3);
 VAR_1->ip_mscount = 0;
 VAR_3->imq_seqno = 0;
 VAR_1->ip_context = VAR_1->ip_guarded = VAR_1->ip_strict_guard = 0;

 if (VAR_2) {







  VAR_4 = FUNC_4(VAR_3);
 }

 FUNC_2(&VAR_1->ip_messages);

 return VAR_4;
}
