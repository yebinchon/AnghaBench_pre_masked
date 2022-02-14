
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mcpwm_fault_input_level_t ;
typedef scalar_t__ mcpwm_action_on_pwmxb_t ;
typedef scalar_t__ mcpwm_action_on_pwmxa_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_9 ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(mcpwm_fault_input_level_t VAR_10, mcpwm_action_on_pwmxa_t VAR_11, mcpwm_action_on_pwmxb_t VAR_12, int VAR_13, int VAR_14)
{
    if(VAR_11 == VAR_6) {
        FUNC_1(VAR_14, FUNC_3(VAR_0, VAR_8, 1000), VAR_13);
    } else if(VAR_11 == VAR_3) {
        FUNC_0(FUNC_2(VAR_0) == 0);
    } else if(VAR_11 == VAR_2) {
        FUNC_0(FUNC_2(VAR_0) == 1);
    }else {
        int VAR_15 = FUNC_2(VAR_0);
        FUNC_4(100 / VAR_9);
        FUNC_0(FUNC_2(VAR_0) == VAR_15);
    }

    if(VAR_12 == VAR_7) {
        FUNC_1(VAR_14, FUNC_3(VAR_1, VAR_8, 1000), VAR_13);
    } else if(VAR_12 == VAR_5) {
        FUNC_0(FUNC_2(VAR_1) == 0);
    } else if(VAR_12 == VAR_4) {
        FUNC_0(FUNC_2(VAR_1) == 1);
    }else {
        int VAR_16 = FUNC_2(VAR_1);
        FUNC_4(100 / VAR_9);
        FUNC_0(FUNC_2(VAR_1) == VAR_16);
    }
}
