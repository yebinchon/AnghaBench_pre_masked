
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int natural_t ;
typedef int mach_vm_address_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;
typedef int ipc_space_t ;


 int FUNC_0 (int ,int ,int *,int *) ;

kern_return_t
FUNC_1(
 ipc_space_t VAR_0,
 mach_port_name_t VAR_1,
 natural_t *VAR_2,
 mach_vm_address_t *VAR_3)
{
 kern_return_t VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 return (VAR_4);
}
