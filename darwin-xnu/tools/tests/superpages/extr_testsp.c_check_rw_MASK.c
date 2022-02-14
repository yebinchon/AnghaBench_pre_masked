
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;

boolean_t
FUNC_3(mach_vm_address_t VAR_4, mach_vm_size_t VAR_5) {
 int VAR_6;
 int VAR_7;
 if (!(VAR_6 = FUNC_1(VAR_4, VAR_5))) return VAR_6;
 if (!(VAR_6 = FUNC_0(VAR_4, VAR_5, &VAR_7))) return VAR_6;
 if ((VAR_5==VAR_1) && (VAR_7!=0xfff00000)) {
  FUNC_2(VAR_3, "checksum error");
  return VAR_0;
 }

 return VAR_2;
}
