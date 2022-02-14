
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ipc_table_size_t ;
typedef TYPE_1__* ipc_port_t ;
typedef TYPE_2__* ipc_port_request_t ;
struct TYPE_12__ {int ipr_size; } ;
struct TYPE_11__ {int ip_messages; TYPE_2__* ip_requests; } ;


 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;

void
FUNC_8(
 ipc_port_t VAR_2)
{
 ipc_port_request_t VAR_3 = VAR_2->ip_requests;

 FUNC_0(FUNC_7(VAR_2) == VAR_1);
 FUNC_0(FUNC_3(VAR_2) == VAR_1);

 if (FUNC_1(VAR_2)) {
  FUNC_6("Trying to free an active port. port %p", VAR_2);
 }

 if (VAR_3 != VAR_0) {
  ipc_table_size_t VAR_4 = VAR_3->ipr_size;
  FUNC_5(VAR_4, VAR_3);
  VAR_2->ip_requests = VAR_0;
 }

 FUNC_2(&VAR_2->ip_messages);




}
