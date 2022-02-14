
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long mach_vm_address_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,unsigned long long*,int,int ) ;

int FUNC_2(void)
{
 kern_return_t VAR_2;
 mach_vm_address_t VAR_3 = 50ULL * 1024ULL * 1024ULL * 1024ULL;

 VAR_2 = FUNC_1(FUNC_0(), &VAR_3, 4096, VAR_1);

 if (VAR_2 == VAR_0) {
  return 0;
 } else {
  return 1;
 }
}
