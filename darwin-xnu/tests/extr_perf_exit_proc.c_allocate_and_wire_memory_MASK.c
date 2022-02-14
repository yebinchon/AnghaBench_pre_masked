
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int task_t ;
typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 char* FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ,int) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(mach_vm_size_t VAR_4) {
 int VAR_5;
 task_t VAR_6 = FUNC_3();
 mach_vm_address_t VAR_7;

 if (VAR_4 <= 0)
  return 0;

 VAR_5 = FUNC_4(VAR_6, &VAR_7, VAR_4, VAR_1);
 if (VAR_5 != VAR_0) {
  FUNC_7("mach_vm_allocate returned non-zero: %s\n", FUNC_1(VAR_5));
  return VAR_5;
 }
 VAR_5 = FUNC_5(VAR_6, VAR_7, VAR_4, 0, VAR_2 | VAR_3);;
 if (VAR_5 != VAR_0) {
  FUNC_7("mach_vm_protect returned non-zero: %s\n", FUNC_1(VAR_5));
  return VAR_5;
 }
 host_t VAR_8;
 VAR_5 = FUNC_0(FUNC_2(), &VAR_8);
 if (VAR_5 != VAR_0) {
  FUNC_7("host_get_host_priv_port retruned non-zero: %s\n", FUNC_1(VAR_5));
  return VAR_5;
 }
 VAR_5 = FUNC_6(VAR_8, VAR_6, VAR_7, VAR_4, VAR_2 | VAR_3);
 if (VAR_5 != VAR_0) {
  FUNC_7("mach_vm_wire returned non-zero: %s\n", FUNC_1(VAR_5));
  return VAR_5;
 }

 return 0;
}
