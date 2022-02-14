
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct kcdata_descriptor {int dummy; } ;
typedef void* mach_vm_address_t ;
typedef int kern_return_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_5__ {unsigned int kcd_flags; unsigned int kcd_length; void* kcd_addr_end; void* kcd_addr_begin; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int ,void**) ;

kern_return_t FUNC_2(kcdata_descriptor_t VAR_3, mach_vm_address_t VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7)
{
 mach_vm_address_t VAR_8 = 0;

 if (VAR_3 == ((void*)0)) {
  return VAR_2;
 }
 FUNC_0(VAR_3, sizeof(struct kcdata_descriptor));
 VAR_3->kcd_addr_begin = VAR_4;
 VAR_3->kcd_addr_end = VAR_4;
 VAR_3->kcd_flags = (VAR_7 & VAR_0)? VAR_0 : VAR_1;
 VAR_3->kcd_length = VAR_6;


 return FUNC_1(VAR_3, VAR_5, 0, &VAR_8);
}
