
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__*,int,int) ;
 int FUNC_3 (int ,scalar_t__,int) ;
 int FUNC_4 (int ,char*,int) ;

boolean_t
FUNC_5() {
 mach_vm_address_t VAR_7 = 0, VAR_8;
 mach_vm_size_t VAR_9 = VAR_2;
 int VAR_10, VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(FUNC_1(), &VAR_7, VAR_9, VAR_4 | VAR_5);
 if (!(VAR_11 = FUNC_0(VAR_10, "mach_vm_allocate"))) return VAR_11;


 for (VAR_12=0; VAR_12<VAR_2/VAR_1; VAR_12++) {
  VAR_8 = VAR_7 + VAR_12*VAR_1;
  VAR_9 = VAR_1;
  VAR_10 = FUNC_2(FUNC_1(), &VAR_8, VAR_9, 0);
  if ((VAR_11 = FUNC_0(VAR_10, "mach_vm_allocate"))) {
   FUNC_4(VAR_6, "could allocate already allocated space, page %d", VAR_12);
   FUNC_3(FUNC_1(), VAR_7, VAR_9);
   return VAR_0;
  }
 }
 VAR_10 = FUNC_3(FUNC_1(), VAR_7, VAR_9);
 if (!(VAR_11 = FUNC_0(VAR_10, "mach_vm_deallocate"))) return VAR_11;
 return VAR_3;
}
