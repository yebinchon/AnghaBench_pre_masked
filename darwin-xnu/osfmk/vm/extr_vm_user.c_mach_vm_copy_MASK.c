
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_map_t ;
typedef int vm_map_size_t ;
typedef int vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ,int *) ;

kern_return_t
FUNC_3(
 vm_map_t VAR_4,
 mach_vm_address_t VAR_5,
 mach_vm_size_t VAR_6,
 mach_vm_address_t VAR_7)
{
 vm_map_copy_t VAR_8;
 kern_return_t VAR_9;

 if (VAR_4 == VAR_3)
  return VAR_1;

 VAR_9 = FUNC_2(VAR_4, (vm_map_address_t)VAR_5,
      (vm_map_size_t)VAR_6, VAR_0, &VAR_8);

 if (VAR_2 == VAR_9) {
  VAR_9 = FUNC_1(VAR_4,
    (vm_map_address_t)VAR_7,
    VAR_8, VAR_0 );

  if (VAR_2 != VAR_9)
   FUNC_0(VAR_8);
 }
 return VAR_9;
}
