
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_sync_t ;
typedef scalar_t__ vm_map_t ;
typedef int vm_map_size_t ;
typedef int vm_map_address_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int ,int ) ;

kern_return_t
FUNC_1(
 vm_map_t VAR_2,
 mach_vm_address_t VAR_3,
 mach_vm_size_t VAR_4,
 vm_sync_t VAR_5)
{

 if (VAR_2 == VAR_1)
  return(VAR_0);

 return FUNC_0(VAR_2, (vm_map_address_t)VAR_3,
   (vm_map_size_t)VAR_4, VAR_5);
}
