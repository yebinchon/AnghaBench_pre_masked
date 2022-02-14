
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_map_t ;
typedef int vm_machine_attribute_val_t ;
typedef int vm_machine_attribute_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int *) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int ) ;

kern_return_t
FUNC_4(
 vm_map_t VAR_3,
 mach_vm_address_t VAR_4,
 mach_vm_size_t VAR_5,
 vm_machine_attribute_t VAR_6,
 vm_machine_attribute_val_t* VAR_7)
{
 if ((VAR_3 == VAR_2) || (VAR_4 + VAR_5 < VAR_4))
  return(VAR_0);

 if (VAR_5 == 0)
  return VAR_1;

 return FUNC_1(
  VAR_3,
  FUNC_3(VAR_4,
      FUNC_0(VAR_3)),
  FUNC_2(VAR_4+VAR_5,
      FUNC_0(VAR_3)),
  VAR_6,
  VAR_7);
}
