
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_map_t ;
typedef int vm_map_size_t ;
typedef scalar_t__ vm_map_copy_t ;
typedef int vm_map_address_t ;
typedef scalar_t__ vm_address_t ;
typedef scalar_t__ pointer_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,int ,scalar_t__*) ;

kern_return_t
FUNC_3(
 vm_map_t VAR_4,
 vm_address_t VAR_5,
 vm_size_t VAR_6,
 pointer_t *VAR_7,
 mach_msg_type_number_t *VAR_8)
{
 kern_return_t VAR_9;
 vm_map_copy_t VAR_10;

 if (VAR_4 == VAR_3)
  return(VAR_1);

 mach_msg_type_number_t VAR_11;
 if (FUNC_1(VAR_6, &VAR_11)) {






  return VAR_1;
 }

 VAR_9 = FUNC_2(VAR_4,
   (vm_map_address_t)VAR_5,
   (vm_map_size_t)VAR_6,
   VAR_0,
   &VAR_10);

 if (VAR_2 == VAR_9) {
  *VAR_7 = (pointer_t) VAR_10;
  *VAR_8 = VAR_11;
  FUNC_0(*VAR_8 == VAR_6);
 }
 return(VAR_9);
}
