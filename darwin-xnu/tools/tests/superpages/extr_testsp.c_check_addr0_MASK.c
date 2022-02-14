
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_vm_address_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,char*) ;

boolean_t
FUNC_1(mach_vm_address_t VAR_3, char *VAR_4) {
 if (!VAR_3) {
  FUNC_0(VAR_2, "%s() returned address 0", VAR_4);
  return VAR_0;
 }
 return VAR_1;
}
