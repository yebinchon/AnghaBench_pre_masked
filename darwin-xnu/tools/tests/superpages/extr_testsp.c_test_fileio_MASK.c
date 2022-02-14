
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int boolean_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 int VAR_9 ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__*,unsigned int,int) ;
 int FUNC_6 (int ,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_7 (void*,void*,unsigned int) ;
 int FUNC_8 (char*,int ) ;
 unsigned int FUNC_9 (int,void*,unsigned int) ;
 int FUNC_10 (int ,char*,...) ;

boolean_t
FUNC_11() {
 mach_vm_address_t VAR_10 = 0;
 mach_vm_address_t VAR_11 = 0;
 mach_vm_size_t VAR_12 = VAR_5;
 int VAR_13, VAR_14;
 int VAR_15;
 unsigned int VAR_16;


 VAR_13 = FUNC_5(FUNC_4(), &VAR_10, VAR_12, VAR_7 | VAR_8);
 if (!(VAR_14 = FUNC_0(VAR_13, "mach_vm_allocate (1)"))) return VAR_14;


 VAR_13 = FUNC_5(FUNC_4(), &VAR_11, VAR_12, VAR_7);
 if (!(VAR_14 = FUNC_0(VAR_13, "mach_vm_allocate (2)"))) return VAR_14;

 if ((VAR_15 = FUNC_8(VAR_1, VAR_3))<0) {
  FUNC_10(VAR_9, "couldn't open %s", VAR_1);
  return VAR_0;
 }
 FUNC_2(VAR_15, VAR_2, 1);

 if ((VAR_16 = FUNC_9(VAR_15, (void*)(uintptr_t)VAR_10, VAR_5)) < VAR_5) {
  FUNC_10(VAR_9, "short read (1)");
  return VAR_0;
 }
 FUNC_3(VAR_15, 0, VAR_4);

 if ((VAR_16 = FUNC_9(VAR_15, (void*)(uintptr_t)VAR_11, VAR_5)) < VAR_5) {
  FUNC_10(VAR_9, "short read (2)");
  return VAR_0;
 }
 FUNC_1(VAR_15);


 if (FUNC_7((void*)(uintptr_t)VAR_10, (void*)(uintptr_t)VAR_11, VAR_16)) {
  FUNC_10(VAR_9, "read data corrupt");
  return VAR_0;
 }

 VAR_13 = FUNC_6(FUNC_4(), VAR_10, VAR_12);
 if (!(VAR_14 = FUNC_0(VAR_13, "mach_vm_deallocate (1)"))) return VAR_14;
 VAR_13 = FUNC_6(FUNC_4(), VAR_11, VAR_12);
 if (!(VAR_14 = FUNC_0(VAR_13, "mach_vm_deallocate (2)"))) return VAR_14;
 return VAR_6;
}
