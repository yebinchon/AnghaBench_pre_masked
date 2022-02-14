
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef int vm_behavior_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_offset_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_1,
 vm_offset_t VAR_2,
 vm_size_t VAR_3,
 vm_behavior_t VAR_4)
{
 if (VAR_2 + VAR_3 < VAR_2)
  return VAR_0;

 return FUNC_0(VAR_1,
        (mach_vm_offset_t) VAR_2,
        (mach_vm_size_t) VAR_3,
        VAR_4);
}
