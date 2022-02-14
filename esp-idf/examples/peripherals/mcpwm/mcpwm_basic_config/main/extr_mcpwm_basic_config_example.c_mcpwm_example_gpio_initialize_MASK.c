
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mcpwm_cap2_in_num; int mcpwm_cap1_in_num; int mcpwm_cap0_in_num; int mcpwm_fault2_in_num; int mcpwm_fault1_in_num; int mcpwm_fault0_in_num; int mcpwm_sync2_in_num; int mcpwm_sync1_in_num; int mcpwm_sync0_in_num; int mcpwm2b_out_num; int mcpwm2a_out_num; int mcpwm1b_out_num; int mcpwm1a_out_num; int mcpwm0b_out_num; int mcpwm0a_out_num; } ;
typedef TYPE_1__ mcpwm_pin_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    FUNC_3("initializing mcpwm gpio...\n");
    mcpwm_pin_config_t VAR_31 = {
        .mcpwm0a_out_num = VAR_6,
        .mcpwm0b_out_num = VAR_7,
        .mcpwm1a_out_num = VAR_8,
        .mcpwm1b_out_num = VAR_9,
        .mcpwm2a_out_num = VAR_10,
        .mcpwm2b_out_num = VAR_11,
        .mcpwm_sync0_in_num = VAR_12,
        .mcpwm_sync1_in_num = VAR_13,
        .mcpwm_sync2_in_num = VAR_14,
        .mcpwm_fault0_in_num = VAR_3,
        .mcpwm_fault1_in_num = VAR_4,
        .mcpwm_fault2_in_num = VAR_5,
        .mcpwm_cap0_in_num = VAR_0,
        .mcpwm_cap1_in_num = VAR_1,
        .mcpwm_cap2_in_num = VAR_2
    };
    FUNC_2(VAR_30, &VAR_31);

    FUNC_0(VAR_0);
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    FUNC_0(VAR_12);
    FUNC_0(VAR_13);
    FUNC_0(VAR_14);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
}
