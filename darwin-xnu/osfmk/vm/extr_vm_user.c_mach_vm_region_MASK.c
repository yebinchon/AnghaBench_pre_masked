
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_region_info_t ;
typedef int vm_region_flavor_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int mach_port_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__*,scalar_t__*,int ,int ,int *,int *) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_4,
 mach_vm_offset_t *VAR_5,
 mach_vm_size_t *VAR_6,
 vm_region_flavor_t VAR_7,
 vm_region_info_t VAR_8,
 mach_msg_type_number_t *VAR_9,
 mach_port_t *VAR_10)
{
 vm_map_offset_t VAR_11;
 vm_map_size_t VAR_12;
 kern_return_t VAR_13;

 if (VAR_1 == VAR_4)
  return VAR_0;

 VAR_11 = (vm_map_offset_t)*VAR_5;
 VAR_12 = (vm_map_size_t)*VAR_6;


 if (VAR_2 == VAR_7)
  VAR_7 = VAR_3;

 VAR_13 = FUNC_0(VAR_4,
      &VAR_11, &VAR_12,
      VAR_7, VAR_8, VAR_9,
      VAR_10);

 *VAR_5 = VAR_11;
 *VAR_6 = VAR_12;
 return VAR_13;
}
