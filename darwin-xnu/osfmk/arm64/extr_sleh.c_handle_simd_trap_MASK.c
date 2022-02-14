
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
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_6(arm_saved_state_t *VAR_2, uint32_t VAR_3)
{
 exception_type_t VAR_4 = VAR_1;
 mach_exception_data_type_t VAR_5[2] = {VAR_0};
 mach_msg_type_number_t VAR_6 = 2;
 uint32_t VAR_7 = 0;

 if (FUNC_1(FUNC_3(VAR_2))) {
  FUNC_5("ESR (0x%x) for SIMD trap from userland, actually came from kernel?", VAR_3);
 }

 FUNC_0(FUNC_4(VAR_2), (char *)&VAR_7, sizeof(VAR_7));
 VAR_5[1] = VAR_7;

 FUNC_2(VAR_4, VAR_5, VAR_6);
}
