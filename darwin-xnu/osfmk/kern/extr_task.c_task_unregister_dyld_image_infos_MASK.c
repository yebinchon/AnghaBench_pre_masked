
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_copy_t ;
typedef int task_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__ dyld_kernel_image_info_array_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

kern_return_t
FUNC_1(task_t VAR_1,
                                 dyld_kernel_image_info_array_t VAR_2,
                                 mach_msg_type_number_t VAR_3)
{
 return FUNC_0(VAR_1, VAR_0,
  (vm_map_copy_t)VAR_2, VAR_3);
}
