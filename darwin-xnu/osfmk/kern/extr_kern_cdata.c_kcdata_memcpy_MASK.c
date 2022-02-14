
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_3__ {int kcd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void const*,scalar_t__,int ) ;
 int FUNC_1 (void*,void const*,int ) ;

kern_return_t FUNC_2(kcdata_descriptor_t VAR_3, mach_vm_address_t VAR_4, const void *VAR_5, uint32_t VAR_6)
{
 if (VAR_3->kcd_flags & VAR_0) {
  if (FUNC_0(VAR_5, VAR_4, VAR_6))
   return VAR_1;
 } else {
  FUNC_1((void *)VAR_4, VAR_5, VAR_6);
 }
 return VAR_2;
}
