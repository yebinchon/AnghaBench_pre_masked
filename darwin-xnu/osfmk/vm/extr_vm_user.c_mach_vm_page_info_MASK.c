
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_info_t ;
typedef int vm_page_info_flavor_t ;
typedef scalar_t__ vm_map_t ;
typedef int mach_vm_address_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int ,int *) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_2,
 mach_vm_address_t VAR_3,
 vm_page_info_flavor_t VAR_4,
 vm_page_info_t VAR_5,
 mach_msg_type_number_t *VAR_6)
{
 kern_return_t VAR_7;

 if (VAR_2 == VAR_1) {
  return VAR_0;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 return VAR_7;
}
