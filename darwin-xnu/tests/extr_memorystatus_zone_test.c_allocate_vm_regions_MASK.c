
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,int *,int ,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,int) ;

__attribute__((used)) static void FUNC_8(void)
{
 uint64_t VAR_6 = VAR_0, VAR_7 = 0;

 FUNC_7("[%d] Allocating VM regions, each of size %lld KB\n", FUNC_1(), (VAR_6>>10));
 for (VAR_7 = 0; ; VAR_7++) {
  mach_vm_address_t VAR_8 = (mach_vm_address_t)((void*)0);


  int VAR_9 = FUNC_0((VAR_7 % 2)? VAR_4: VAR_5) | VAR_3;

  if ((FUNC_5(FUNC_4(), &VAR_8, (mach_vm_size_t)VAR_6, VAR_9)) != VAR_1) {
   break;
  }
 }
 FUNC_7("[%d] Number of allocations: %lld\n", FUNC_1(), VAR_7);


 FUNC_3(FUNC_2(), VAR_2);

 while (1) {
  FUNC_6();
 }
}
