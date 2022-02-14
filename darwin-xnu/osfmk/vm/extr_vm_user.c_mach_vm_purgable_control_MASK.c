
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_purgable_t ;
typedef scalar_t__ vm_map_t ;
typedef int mach_vm_offset_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__,int*) ;
 int FUNC_1 (int ,int ) ;

kern_return_t
FUNC_2(
 vm_map_t VAR_4,
 mach_vm_offset_t VAR_5,
 vm_purgable_t VAR_6,
 int *VAR_7)
{
 if (VAR_2 == VAR_4)
  return VAR_0;

 if (VAR_6 == VAR_3) {

  return VAR_0;
 }

 return FUNC_0(VAR_4,
           FUNC_1(VAR_5, VAR_1),
           VAR_6,
           VAR_7);
}
