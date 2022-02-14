
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct kcdata_descriptor {scalar_t__ kcd_addr_begin; } ;
typedef TYPE_1__* os_reason_t ;
typedef scalar_t__ mach_vm_address_t ;
struct TYPE_4__ {struct kcdata_descriptor osr_kcd_descriptor; int * osr_kcd_buf; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;

struct kcdata_descriptor *
FUNC_1(os_reason_t VAR_1)
{
 if (VAR_1 == VAR_0) {
  return ((void*)0);
 }

 if (VAR_1->osr_kcd_buf == ((void*)0)) {
  return ((void*)0);
 }

 FUNC_0(VAR_1->osr_kcd_descriptor.kcd_addr_begin == (mach_vm_address_t) VAR_1->osr_kcd_buf);
 if (VAR_1->osr_kcd_descriptor.kcd_addr_begin != (mach_vm_address_t) VAR_1->osr_kcd_buf) {
  return ((void*)0);
 }

 return &VAR_1->osr_kcd_descriptor;
}
