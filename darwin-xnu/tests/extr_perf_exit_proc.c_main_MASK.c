
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mach_vm_size_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int *,int) ;

int FUNC_3(int VAR_0, char *VAR_1[]) {
 int VAR_2 = 0;
 int VAR_3;
 mach_vm_size_t VAR_4 = 0;

 if (VAR_0 > 1) {
  VAR_2 = (int)FUNC_2(VAR_1[1], ((void*)0), 10);
 }
 if (VAR_0 > 2) {
  VAR_4 = (mach_vm_size_t)FUNC_2(VAR_1[2], ((void*)0), 10);
 }

 VAR_3 = FUNC_0(VAR_4);
 if (VAR_3) {
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3) {
  return VAR_3;
 }

 return 0;
}
