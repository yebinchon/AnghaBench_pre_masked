
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mach_vm_address_t ;
typedef TYPE_1__* kcdata_descriptor_t ;
struct TYPE_4__ {int kcd_user_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

kcdata_descriptor_t
FUNC_3(mach_vm_address_t VAR_3, unsigned VAR_4,
  uint32_t VAR_5, unsigned VAR_6)
{
 kcdata_descriptor_t VAR_7;

 if (VAR_5 & VAR_0) {
  if (VAR_1 != FUNC_1(VAR_5)) {
   return ((void*)0);
  }
 }

 VAR_7 = FUNC_0(VAR_3, VAR_2, VAR_4,
   VAR_6);
 if (VAR_7) {
  VAR_7->kcd_user_flags = VAR_5;
 } else if (VAR_5 & VAR_0) {
  FUNC_2(VAR_5);
 }
 return VAR_7;
}
