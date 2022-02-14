
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* ipc_pset_t ;
typedef TYPE_2__* ipc_port_t ;
typedef int boolean_t ;
struct TYPE_7__ {int ip_messages; } ;
struct TYPE_6__ {int ips_messages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;

boolean_t
FUNC_3(
 ipc_pset_t VAR_0,
 ipc_port_t VAR_1)
{
 FUNC_0(FUNC_1(VAR_1));

 return (FUNC_2(&VAR_1->ip_messages, &VAR_0->ips_messages));
}
