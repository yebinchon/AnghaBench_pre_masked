
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_info_t ;
typedef int vm_page_info_flavor_t ;
typedef int vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,int ,int *) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_0,
 vm_map_offset_t VAR_1,
 vm_page_info_flavor_t VAR_2,
 vm_page_info_t VAR_3,
 mach_msg_type_number_t *VAR_4)
{
 return (FUNC_0(VAR_0,
           VAR_1,
           (VAR_1 + 1),
           VAR_2,
           VAR_3,
           VAR_4));
}
