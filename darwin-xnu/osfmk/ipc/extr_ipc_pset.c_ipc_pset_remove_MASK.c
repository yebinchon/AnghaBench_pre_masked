
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int kern_return_t ;
typedef TYPE_1__* ipc_pset_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_7__ {scalar_t__ ip_in_pset; int ip_messages; } ;
struct TYPE_6__ {int ips_messages; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;

kern_return_t
FUNC_3(
 ipc_pset_t VAR_1,
 ipc_port_t VAR_2)
{
 kern_return_t VAR_3;

 FUNC_0(FUNC_1(VAR_2));

 if (VAR_2->ip_in_pset == 0)
  return VAR_0;

 VAR_3 = FUNC_2(&VAR_2->ip_messages, &VAR_1->ips_messages);

 return VAR_3;
}
