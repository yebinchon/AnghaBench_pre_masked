
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_info_t ;
struct TYPE_2__ {int disposition; int ref_count; } ;
typedef TYPE_1__ vm_page_info_basic_data_t ;
typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int *) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_3,
 vm_map_offset_t VAR_4,
 int *VAR_5,
 int *VAR_6)
{
 kern_return_t VAR_7;
 vm_page_info_basic_data_t VAR_8;
 mach_msg_type_number_t VAR_9;

 VAR_9 = VAR_2;
 VAR_7 = FUNC_0(VAR_3,
         VAR_4,
         VAR_1,
         (vm_page_info_t) &VAR_8,
         &VAR_9);
 if (VAR_7 == VAR_0) {
  *VAR_5 = VAR_8.disposition;
  *VAR_6 = VAR_8.ref_count;
 } else {
  *VAR_5 = 0;
  *VAR_6 = 0;
 }

 return VAR_7;
}
