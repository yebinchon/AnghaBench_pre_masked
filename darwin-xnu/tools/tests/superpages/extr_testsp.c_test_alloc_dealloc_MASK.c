
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *,int ,int) ;
 int FUNC_6 (int ,int ,int ) ;

boolean_t
FUNC_7() {
 mach_vm_address_t VAR_4 = 0;
 mach_vm_size_t VAR_5 = VAR_0;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_5(FUNC_4(), &VAR_4, VAR_5, VAR_2 | VAR_3);
 if (!(VAR_7 = FUNC_2(VAR_6, "mach_vm_allocate"))) return VAR_7;
 if (!(VAR_7 = FUNC_0(VAR_4, "mach_vm_allocate"))) return VAR_7;
 if (!(VAR_7 = FUNC_1(VAR_4))) return VAR_7;
 if (!(VAR_7 = FUNC_3(VAR_4, VAR_5))) return VAR_7;
 VAR_6 = FUNC_6(FUNC_4(), VAR_4, VAR_5);
 if (!(VAR_7 = FUNC_2(VAR_6, "mach_vm_deallocate"))) return VAR_7;
 return VAR_1;
}
