
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int mach_vm_address_t ;
typedef scalar_t__ kern_return_t ;
typedef int kcdata_descriptor_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*,scalar_t__) ;

kern_return_t FUNC_3(
  kcdata_descriptor_t VAR_3,
  uint32_t VAR_4,
  uint32_t VAR_5,
  uint64_t VAR_6)
{
 mach_vm_address_t VAR_7;
 kern_return_t VAR_8;
 FUNC_0(VAR_4 == VAR_1 || VAR_4 == VAR_0);
 uint32_t VAR_9 = (VAR_4 == VAR_0)? sizeof(uint32_t): 0;
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_9, VAR_6, &VAR_7);
 if (VAR_8 != VAR_2)
  return VAR_8;

 if (VAR_9)
  VAR_8 = FUNC_2(VAR_3, VAR_7, &VAR_5, VAR_9);
 return VAR_8;
}
