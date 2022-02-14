
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kcdata_item {int dummy; } ;
typedef int mach_vm_address_t ;
typedef int kern_return_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_4__ {int kcd_flags; int kcd_addr_end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

kern_return_t
FUNC_1(kcdata_descriptor_t VAR_2)
{




 const mach_vm_address_t VAR_3 = 16;
 VAR_2->kcd_addr_end -= sizeof(struct kcdata_item) + VAR_3;

 if (!(VAR_2->kcd_flags & VAR_0)) {

  return FUNC_0(VAR_2);
 } else {
  return VAR_1;
 }
}
