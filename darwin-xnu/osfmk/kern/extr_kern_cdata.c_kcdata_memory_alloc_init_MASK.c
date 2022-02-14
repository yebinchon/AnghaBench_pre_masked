
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct kcdata_descriptor {int dummy; } ;
typedef void* mach_vm_address_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_7__ {unsigned int kcd_flags; unsigned int kcd_length; void* kcd_addr_end; void* kcd_addr_begin; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*,unsigned int,int ,void**) ;
 int FUNC_3 (TYPE_1__*) ;

kcdata_descriptor_t FUNC_4(mach_vm_address_t VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6)
{
 kcdata_descriptor_t VAR_7 = ((void*)0);
 mach_vm_address_t VAR_8 = 0;

 VAR_7 = FUNC_1(sizeof(struct kcdata_descriptor));
 if (VAR_7 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_0(VAR_7, sizeof(struct kcdata_descriptor));
 VAR_7->kcd_addr_begin = VAR_3;
 VAR_7->kcd_addr_end = VAR_3;
 VAR_7->kcd_flags = (VAR_6 & VAR_0)? VAR_0 : VAR_1;
 VAR_7->kcd_length = VAR_5;


 if (VAR_2 != FUNC_2(VAR_7, VAR_4, 0, &VAR_8)){
  FUNC_3(VAR_7);
  return ((void*)0);
 }

 return VAR_7;
}
