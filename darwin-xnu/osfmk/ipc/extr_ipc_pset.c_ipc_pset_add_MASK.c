
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint64_t ;
typedef int kern_return_t ;
typedef TYPE_1__* ipc_pset_t ;
typedef TYPE_2__* ipc_port_t ;
struct TYPE_8__ {int ip_messages; } ;
struct TYPE_7__ {int ips_messages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;

kern_return_t
FUNC_4(
 ipc_pset_t VAR_0,
 ipc_port_t VAR_1,
 uint64_t *VAR_2,
 uint64_t *VAR_3)
{
 kern_return_t VAR_4;

 FUNC_0(FUNC_3(VAR_0));
 FUNC_0(FUNC_1(VAR_1));

 VAR_4 = FUNC_2(&VAR_1->ip_messages, &VAR_0->ips_messages,
       VAR_2, VAR_3);

 return VAR_4;
}
