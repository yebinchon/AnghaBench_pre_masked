
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_msg_type_number_t ;
typedef int mach_exception_data_type_t ;
typedef int exception_type_t ;
typedef int arm_saved_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static void
FUNC_6(arm_saved_state_t *VAR_2)
{
 exception_type_t VAR_3;
 mach_exception_data_type_t VAR_4[2];
 mach_msg_type_number_t VAR_5 = 2;

 if (!FUNC_0(FUNC_3(VAR_2))) {
  FUNC_5("PC alignment exception from kernel.", VAR_2);
 }

 VAR_3 = VAR_1;
 VAR_4[0] = VAR_0;
 VAR_4[1] = FUNC_4(VAR_2);

 FUNC_2(VAR_3, VAR_4, VAR_5);
 FUNC_1(0);
}
