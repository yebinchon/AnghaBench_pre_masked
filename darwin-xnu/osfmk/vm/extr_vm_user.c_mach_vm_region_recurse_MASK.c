
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_region_submap_info_64_t ;
typedef scalar_t__ vm_region_recurse_info_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_address_t ;
typedef int uint32_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__*,scalar_t__*,int *,int ,int *) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_2,
 mach_vm_address_t *VAR_3,
 mach_vm_size_t *VAR_4,
 uint32_t *VAR_5,
 vm_region_recurse_info_t VAR_6,
 mach_msg_type_number_t *VAR_7)
{
 vm_map_address_t VAR_8;
 vm_map_size_t VAR_9;
 kern_return_t VAR_10;

 if (VAR_1 == VAR_2)
  return VAR_0;

 VAR_8 = (vm_map_address_t)*VAR_3;
 VAR_9 = (vm_map_size_t)*VAR_4;

 VAR_10 = FUNC_0(
   VAR_2,
   &VAR_8,
   &VAR_9,
   VAR_5,
   (vm_region_submap_info_64_t)VAR_6,
   VAR_7);

 *VAR_3 = VAR_8;
 *VAR_4 = VAR_9;
 return VAR_10;
}
