
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_3__ {int kcd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (void*,scalar_t__) ;
 int FUNC_2 (int **,scalar_t__,scalar_t__) ;

kern_return_t
FUNC_3(kcdata_descriptor_t VAR_3, mach_vm_address_t VAR_4, uint32_t VAR_5)
{
 kern_return_t VAR_6 = VAR_2;
 if (VAR_3->kcd_flags & VAR_0) {
  uint8_t VAR_7[16] = {};
  while (VAR_5) {
   uint32_t VAR_8 = FUNC_0(VAR_5, 16);
   VAR_6 = FUNC_2(&VAR_7, VAR_4, VAR_8);
   if (VAR_6)
    return VAR_1;
   VAR_5 -= VAR_8;
  }
  return VAR_2;
 } else {
  FUNC_1((void*)VAR_4, VAR_5);
  return VAR_2;
 }
}
