
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
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__*,int ,int) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__,int ,int ) ;

boolean_t
FUNC_7() {
 int VAR_6;
 int VAR_7;
 mach_vm_address_t VAR_8 = 0;
 mach_vm_size_t VAR_9 = VAR_1;

 VAR_6 = FUNC_4(FUNC_3(), &VAR_8, VAR_9, VAR_3 | VAR_4);
 if (!(VAR_7 = FUNC_0(VAR_6, "mach_vm_allocate"))) return VAR_7;

 FUNC_6(FUNC_3(), VAR_8+VAR_0, VAR_0, 0, VAR_5);
 if (!(VAR_7 = FUNC_0(VAR_6, "mach_vm_protect"))) return VAR_7;

 if (!(VAR_7 = FUNC_2(VAR_8, VAR_9, ((void*)0)))) return VAR_7;
 if (!(VAR_7 = FUNC_1(VAR_8, VAR_9))) return VAR_7;

 VAR_6 = FUNC_5(FUNC_3(), VAR_8, VAR_9);
 if (!(VAR_7 = FUNC_0(VAR_6, "mach_vm_deallocate"))) return VAR_7;

 return VAR_2;
}
