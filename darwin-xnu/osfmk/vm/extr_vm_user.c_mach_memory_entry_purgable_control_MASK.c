
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_purgable_t ;
typedef int kern_return_t ;
typedef int ipc_port_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int*) ;

kern_return_t
FUNC_1(
 ipc_port_t VAR_2,
 vm_purgable_t VAR_3,
 int *VAR_4)
{
 if (VAR_3 == VAR_1) {

  return VAR_0;
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
