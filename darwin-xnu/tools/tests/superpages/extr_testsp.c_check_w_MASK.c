
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
 int VAR_3 ;
 int FUNC_0 (int ) ;
 char** VAR_4 ;
 int FUNC_1 (int ,char*,char*) ;

boolean_t
FUNC_2(mach_vm_address_t VAR_5, mach_vm_size_t VAR_6) {
 char *VAR_7 = (char*)(uintptr_t)VAR_5;
 int VAR_8, VAR_9;

 if ((VAR_9 = FUNC_0(VAR_3)) != 0) {
  FUNC_1(VAR_2, "%s when writing", VAR_4[VAR_9]);
  return VAR_0;
 }

 for (VAR_8=0; VAR_8<VAR_6; VAR_8++)
  (VAR_7)[VAR_8] = VAR_8 & 0xFF;

 return VAR_1;
}
