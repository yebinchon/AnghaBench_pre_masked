
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kern_return_t ;
typedef TYPE_1__* ipc_port_t ;
struct TYPE_3__ {scalar_t__ ip_in_pset; int ip_messages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

kern_return_t
FUNC_1(
 ipc_port_t VAR_2)
{
 if (VAR_2->ip_in_pset == 0)
  return VAR_0;




 FUNC_0(&VAR_2->ip_messages);
 return VAR_1;
}
