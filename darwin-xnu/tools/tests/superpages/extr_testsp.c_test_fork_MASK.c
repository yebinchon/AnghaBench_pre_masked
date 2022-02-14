
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *,int ,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_5 ;
 int FUNC_10 (int ,int*,int ) ;

boolean_t
FUNC_11() {
 mach_vm_address_t VAR_6 = 0;
 mach_vm_size_t VAR_7 = VAR_0;
 int VAR_8, VAR_9;
 pid_t VAR_10;

 VAR_8 = FUNC_7(FUNC_6(), &VAR_6, VAR_7, VAR_2 | VAR_3);
 if (!(VAR_9 = FUNC_0(VAR_8, "mach_vm_allocate"))) return VAR_9;

 FUNC_4(VAR_5);
 if ((VAR_10=FUNC_5())) {
  if (!(VAR_9 = FUNC_2(VAR_6, VAR_7))) return VAR_9;
  FUNC_10(VAR_10, &VAR_9, 0);
  if (!VAR_9) {
   FUNC_9(VAR_4, "child could access superpage");
   return VAR_9;
  }
 } else {
  if (!(VAR_9 = FUNC_1(VAR_6, VAR_7, ((void*)0)))) FUNC_3(VAR_9);
  FUNC_3(VAR_1);
 }

 VAR_8 = FUNC_8(FUNC_6(), VAR_6, VAR_7);
 if (!(VAR_9 = FUNC_0(VAR_8, "mach_vm_deallocate"))) return VAR_9;
 return VAR_1;
}
