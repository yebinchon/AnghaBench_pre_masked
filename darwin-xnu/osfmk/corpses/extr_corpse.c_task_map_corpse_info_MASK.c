
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_address_t ;
typedef scalar_t__ uint32_t ;
typedef int task_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*,scalar_t__*) ;

kern_return_t
FUNC_1(
 task_t VAR_1,
 task_t VAR_2,
 vm_address_t *VAR_3,
 uint32_t *VAR_4)
{
 kern_return_t VAR_5;
 mach_vm_address_t VAR_6;
 mach_vm_size_t VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_2, &VAR_6, &VAR_7);
 if (VAR_5 != VAR_0) {
  return VAR_5;
 }

 *VAR_3 = (vm_address_t)VAR_6;
 *VAR_4 = (uint32_t) VAR_7;
 return VAR_0;
}
