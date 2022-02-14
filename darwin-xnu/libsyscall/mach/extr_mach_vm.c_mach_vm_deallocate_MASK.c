
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,uintptr_t,uintptr_t,uintptr_t,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_1 ;

kern_return_t
FUNC_3(
 mach_port_name_t VAR_2,
 mach_vm_address_t VAR_3,
 mach_vm_size_t VAR_4)
{
 kern_return_t VAR_5;

 if (&FUNC_0) {
  FUNC_0(VAR_1, (uintptr_t)VAR_2, (uintptr_t)VAR_3, (uintptr_t)VAR_4, 0, 0);
 }

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);

 if (VAR_5 == VAR_0)
  VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);

 return (VAR_5);
}
