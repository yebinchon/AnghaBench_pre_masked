
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ mach_exception_data_type_t ;
typedef int instr ;
typedef int exception_type_t ;
typedef int arm_saved_state_t ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void
FUNC_7(arm_saved_state_t *VAR_3, uint32_t VAR_4)
{
 exception_type_t VAR_5 = VAR_2;
 mach_exception_data_type_t VAR_6[2] = {VAR_1};
 mach_msg_type_number_t VAR_7 = 2;
 uint32_t VAR_8 = 0;

 (void)VAR_4;

 if (!FUNC_5(VAR_3)) {
  FUNC_6("MSR/MRS trap (EC 0x%x) from 32-bit state\n", VAR_0);
 }

 if (FUNC_1(FUNC_3(VAR_3))) {
  FUNC_6("MSR/MRS trap (EC 0x%x) from kernel\n", VAR_0);
 }

 FUNC_0(FUNC_4(VAR_3), (char *)&VAR_8, sizeof(VAR_8));
 VAR_6[1] = VAR_8;

 FUNC_2(VAR_5, VAR_6, VAR_7);
}
