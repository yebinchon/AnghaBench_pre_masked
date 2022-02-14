
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_address_t ;
typedef int mach_vm_address_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;


 int FUNC_0 (int ,int*,int ,int) ;

kern_return_t
FUNC_1(
 mach_port_name_t VAR_0,
 vm_address_t *VAR_1,
 vm_size_t VAR_2,
 int VAR_3)
{
 kern_return_t VAR_4;
 mach_vm_address_t VAR_5;

 VAR_5 = (mach_vm_address_t)*VAR_1;
 VAR_4 = FUNC_0(VAR_0, &VAR_5, VAR_2, VAR_3);

 *VAR_1 = VAR_5;




 return (VAR_4);
}
