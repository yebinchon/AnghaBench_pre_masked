
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int turnstile_inheritor_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_4__ {int ip_sync_link_state; int ip_sync_inheritor_ts; int * ip_sync_inheritor_port; int ip_messages; int ip_specialreply; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

turnstile_inheritor_t
FUNC_4(
 ipc_port_t VAR_1)
{
 FUNC_0(VAR_1->ip_specialreply);
 FUNC_2(&VAR_1->ip_messages);

 switch (VAR_1->ip_sync_link_state) {
 case 130:
  if (VAR_1->ip_sync_inheritor_port != ((void*)0)) {
   return FUNC_3(VAR_1->ip_sync_inheritor_port);
  }
  break;
 case 129:
  return FUNC_1(VAR_1);
 case 128:
  return VAR_1->ip_sync_inheritor_ts;
 }
 return VAR_0;
}
