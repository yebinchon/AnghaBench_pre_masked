
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,char*) ;

boolean_t
FUNC_4() {
 int VAR_6;
 int VAR_7;
 mach_vm_address_t VAR_8 = VAR_1;
 mach_vm_size_t VAR_9 = VAR_2;

 VAR_6 = FUNC_2(FUNC_1(), &VAR_8, VAR_9, VAR_4);

 if ((VAR_7 = FUNC_0(VAR_6, "mach_vm_allocate"))) {
  FUNC_3(VAR_5, "mach_vm_allocate() should have failed");
  return VAR_0;
 }
 return VAR_3;
}
