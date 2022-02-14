
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;

boolean_t
FUNC_2(mach_vm_address_t VAR_4, mach_vm_size_t VAR_5) {
 int VAR_6;
 boolean_t VAR_7;

 for (VAR_6=0; VAR_6<VAR_5/VAR_1; VAR_6++) {
  if ((VAR_7 = FUNC_0(VAR_4+VAR_6*VAR_1, VAR_1))) {
   FUNC_1(VAR_3, "page still writable");
   return VAR_0;
  }
 }
 return VAR_2;
}
