
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,uintptr_t,uintptr_t,int ,uintptr_t,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*,scalar_t__,int) ;
 int VAR_2 ;

kern_return_t
FUNC_3(
 mach_port_name_t VAR_3,
 mach_vm_address_t *VAR_4,
 mach_vm_size_t VAR_5,
 int VAR_6)
{
 kern_return_t VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_7 == VAR_0)
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 if (&FUNC_0) {
  int VAR_8 = VAR_6 & VAR_1;
  FUNC_0(VAR_2 | VAR_8, (uintptr_t)VAR_3, (uintptr_t)VAR_5, 0, (uintptr_t)*VAR_4, 0);
 }

 return (VAR_7);
}
