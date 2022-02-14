
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_purgable_t ;
typedef scalar_t__ vm_offset_t ;
typedef int mach_vm_offset_t ;
typedef int mach_port_name_t ;
typedef int kern_return_t ;


 int FUNC_0 (int ,int ,int ,int*) ;

kern_return_t
FUNC_1(
 mach_port_name_t VAR_0,
 vm_offset_t VAR_1,
 vm_purgable_t VAR_2,
 int *VAR_3)
{
 return FUNC_0(VAR_0,
     (mach_vm_offset_t) VAR_1,
     VAR_2,
     VAR_3);
}
