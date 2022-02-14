
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,scalar_t__*,int ,int) ;
 int FUNC_6 (void*,size_t,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int,int) ;

__attribute__((used)) static void FUNC_9(void)
{
 uint64_t VAR_7 = VAR_0, VAR_8 = 0;

 FUNC_8("[%d] Allocating VM regions, each of size %lld KB, each backed by a VM object\n", FUNC_1(), (VAR_7>>10));
 for (VAR_8 = 0; ; VAR_8++) {
  mach_vm_address_t VAR_9 = (mach_vm_address_t)((void*)0);


  int VAR_10 = FUNC_0((VAR_8 % 2)? VAR_5: VAR_6) | VAR_4;

  if ((FUNC_5(FUNC_4(), &VAR_9, (mach_vm_size_t)VAR_7, VAR_10)) != VAR_1) {
   break;
  }

  *((int *)VAR_9) = 0;

  FUNC_6((void *)VAR_9, (size_t)VAR_7, VAR_2);
 }
 FUNC_8("[%d] Number of allocations: %lld\n", FUNC_1(), VAR_8);


 FUNC_3(FUNC_2(), VAR_3);

 while (1) {
  FUNC_7();
 }
}
