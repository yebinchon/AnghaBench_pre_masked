
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
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,char*) ;

boolean_t
FUNC_8() {
 int VAR_7;
 int VAR_8;
 mach_vm_address_t VAR_9 = 0;
 mach_vm_size_t VAR_10 = VAR_1;

 VAR_7 = FUNC_4(FUNC_3(), &VAR_9, VAR_10, VAR_3 | VAR_4);
 if (!(VAR_8 = FUNC_0(VAR_7, "mach_vm_allocate"))) return VAR_8;

 VAR_7 = FUNC_6(FUNC_2(), FUNC_3(), VAR_9, VAR_10, VAR_5);
 if ((VAR_8 = FUNC_0(VAR_7, "mach_vm_wire"))) {
  FUNC_7(VAR_6, "could unwire");
  return VAR_0;
 }

 if (!(VAR_8 = FUNC_1(VAR_9, VAR_10))) return VAR_8;

 VAR_7 = FUNC_5(FUNC_3(), VAR_9, VAR_10);
 if (!(VAR_8 = FUNC_0(VAR_7, "mach_vm_deallocate"))) return VAR_8;

 return VAR_2;
}
