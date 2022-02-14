
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_inherit_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef int mach_vm_offset_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ mach_port_name_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,uintptr_t,uintptr_t,int ,uintptr_t,int ) ;
 int FUNC_1 (scalar_t__,scalar_t__*,scalar_t__,int ,int,scalar_t__,scalar_t__,int ,int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

kern_return_t
FUNC_2(
 mach_port_name_t VAR_3,
 mach_vm_address_t *VAR_4,
 mach_vm_size_t VAR_5,
 mach_vm_offset_t VAR_6,
 int VAR_7,
 mach_port_name_t VAR_8,
 mach_vm_address_t VAR_9,
 boolean_t VAR_10,
 vm_prot_t *VAR_11,
 vm_prot_t *VAR_12,
        vm_inherit_t VAR_13)
{
 kern_return_t VAR_14;

 VAR_14 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
  VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
  VAR_13);

 if (&FUNC_0) {
  int VAR_15 = VAR_2 | VAR_1;
  int VAR_16 = VAR_7 & VAR_0;
  FUNC_0(VAR_15 | VAR_16, (uintptr_t)VAR_3, (uintptr_t)VAR_5, 0, (uintptr_t)*VAR_4, 0);
 }

 return (VAR_14);
}
