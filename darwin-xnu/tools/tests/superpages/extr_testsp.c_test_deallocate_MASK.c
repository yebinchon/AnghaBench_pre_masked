
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_vm_size_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*) ;

boolean_t
FUNC_5() {
 mach_vm_size_t VAR_6 = VAR_1;
 int VAR_7, VAR_8;

 if (!VAR_4) {
  FUNC_4(VAR_3, "skipped deallocation");
  return VAR_0;
 }
 VAR_7 = FUNC_3(FUNC_2(), VAR_4, VAR_5);
 if (!(VAR_8 = FUNC_0(VAR_7, "mach_vm_deallocate"))) return VAR_8;
 if (!(VAR_8 = FUNC_1(VAR_4, VAR_6, ((void*)0)))) return VAR_8;
 return VAR_2;
}
