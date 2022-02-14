
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {scalar_t__ ip_sync_link_state; scalar_t__ ip_sync_inheritor_port; int ip_messages; int ip_specialreply; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

void
FUNC_7(
 ipc_port_t VAR_5,
 ipc_port_t VAR_6)
{
 boolean_t VAR_7 = VAR_0;


 FUNC_6(VAR_6);


 FUNC_2(VAR_5);
 FUNC_0(&VAR_5->ip_messages);


 if (!VAR_5->ip_specialreply ||
     VAR_5->ip_sync_link_state != VAR_2 ||
     VAR_5->ip_sync_inheritor_port != VAR_1) {
  VAR_7 = VAR_4;
 } else {

  FUNC_3(VAR_6);
  VAR_5->ip_sync_inheritor_port = VAR_6;
  VAR_5->ip_sync_link_state = VAR_3;
 }

 FUNC_1(&VAR_5->ip_messages);
 FUNC_4(VAR_5);

 if (VAR_7) {
  FUNC_5(VAR_6);
 }

 return;
}
