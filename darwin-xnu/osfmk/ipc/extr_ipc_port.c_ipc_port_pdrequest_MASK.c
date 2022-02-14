
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ipc_port_t ;
struct TYPE_7__ {struct TYPE_7__* ip_pdrequest; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(
 ipc_port_t VAR_0,
 ipc_port_t VAR_1,
 ipc_port_t *VAR_2)
{
 ipc_port_t VAR_3;

 FUNC_0(FUNC_1(VAR_0));

 VAR_3 = VAR_0->ip_pdrequest;
 VAR_0->ip_pdrequest = VAR_1;
 FUNC_2(VAR_0);

 *VAR_2 = VAR_3;
}
