
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mach_vm_address_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*,scalar_t__,scalar_t__) ;

boolean_t
FUNC_1(mach_vm_address_t VAR_3, mach_vm_address_t VAR_4, char *VAR_5) {
 if (VAR_3 != VAR_4) {
  FUNC_0(VAR_2, "%s() returned address %llx instead of %llx", VAR_5, VAR_3, VAR_4);
  return VAR_0;
 }
 return VAR_1;
}
