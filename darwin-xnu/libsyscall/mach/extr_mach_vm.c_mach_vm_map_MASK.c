
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_prot_t ;
typedef scalar_t__ vm_inherit_t ;
typedef int memory_object_offset_t ;
typedef scalar_t__ mem_entry_name_port_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef int mach_vm_offset_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,uintptr_t,uintptr_t,int ,uintptr_t,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*,scalar_t__,int ,int,scalar_t__,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*,scalar_t__,int ,int,scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;

kern_return_t
FUNC_3(
 mach_port_name_t VAR_7,
 mach_vm_address_t *VAR_8,
 mach_vm_size_t VAR_9,
 mach_vm_offset_t VAR_10,
 int VAR_11,
 mem_entry_name_port_t VAR_12,
 memory_object_offset_t VAR_13,
 boolean_t VAR_14,
 vm_prot_t VAR_15,
 vm_prot_t VAR_16,
 vm_inherit_t VAR_17)
{
 kern_return_t VAR_18 = VAR_0;

 if (VAR_12 == VAR_1 && VAR_16 == VAR_4 &&
   VAR_17 == VAR_3)
  VAR_18 = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
    VAR_15);

 if (VAR_18 == VAR_0)
  VAR_18 = FUNC_1(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12,
   VAR_13, VAR_14, VAR_15, VAR_16, VAR_17);

 if (&FUNC_0) {
  int VAR_19 = VAR_6 | VAR_5;
  int VAR_20 = VAR_11 & VAR_2;
  FUNC_0(VAR_19 | VAR_20, (uintptr_t)VAR_7, (uintptr_t)VAR_9, 0, (uintptr_t)*VAR_8, 0);
 }

 return (VAR_18);
}
