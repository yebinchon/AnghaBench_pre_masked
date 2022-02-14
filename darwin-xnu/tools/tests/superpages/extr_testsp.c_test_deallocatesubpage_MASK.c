
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__*,int ,int) ;
 int FUNC_4 (int ,scalar_t__,int ) ;

boolean_t
FUNC_5() {
 int VAR_5;
 int VAR_6;
 mach_vm_address_t VAR_7 = 0;
 mach_vm_size_t VAR_8 = VAR_1;

 VAR_5 = FUNC_3(FUNC_2(), &VAR_7, VAR_8, VAR_3 | VAR_4);
 if (!(VAR_6 = FUNC_0(VAR_5, "mach_vm_allocate"))) return VAR_6;
 VAR_5 = FUNC_4(FUNC_2(), VAR_7 + VAR_0, VAR_8);
 if (!(VAR_6 = FUNC_0(VAR_5, "mach_vm_deallocate"))) return VAR_6;
 if (!(VAR_6 = FUNC_1(VAR_7, VAR_8, ((void*)0)))) return VAR_6;
 return VAR_2;
}
