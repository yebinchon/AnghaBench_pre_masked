
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_tag_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int vm_inherit_t ;
typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_offset_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__*,int ,scalar_t__,int,int ,int ,scalar_t__,scalar_t__,int ,int *,int *,int ) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_4,
 mach_vm_offset_t *VAR_5,
 mach_vm_size_t VAR_6,
 mach_vm_offset_t VAR_7,
 int VAR_8,
 vm_tag_t VAR_9,
 vm_map_t VAR_10,
 mach_vm_offset_t VAR_11,
 boolean_t VAR_12,
 vm_prot_t *VAR_13,
 vm_prot_t *VAR_14,
 vm_inherit_t VAR_15)
{
 vm_map_offset_t VAR_16;
 kern_return_t VAR_17;

 if (VAR_3 == VAR_4 || VAR_3 == VAR_10)
  return VAR_0;


 if (VAR_8 & ~VAR_1)
  return VAR_0;

 VAR_16 = (vm_map_offset_t)*VAR_5;

 VAR_17 = FUNC_0(VAR_4,
     &VAR_16,
     VAR_6,
     VAR_7,
     VAR_8,
     VAR_2,
     VAR_9,
     VAR_10,
     VAR_11,
     VAR_12,
     VAR_13,
     VAR_14,
     VAR_15);
 *VAR_5 = VAR_16;
 return VAR_17;
}
