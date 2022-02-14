
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ mcpwm_unit_t ;
struct TYPE_3__ {int mcpwm_cap2_in_num; int mcpwm_cap1_in_num; int mcpwm_cap0_in_num; int mcpwm_fault2_in_num; int mcpwm_fault1_in_num; int mcpwm_fault0_in_num; int mcpwm_sync2_in_num; int mcpwm_sync1_in_num; int mcpwm_sync0_in_num; int mcpwm2b_out_num; int mcpwm2a_out_num; int mcpwm1b_out_num; int mcpwm1a_out_num; int mcpwm0b_out_num; int mcpwm0a_out_num; } ;
typedef TYPE_1__ mcpwm_pin_config_t ;
typedef int esp_err_t ;


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
 int FUNC_0 (int,int ,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (scalar_t__,int ,int ) ;

esp_err_t FUNC_2(mcpwm_unit_t VAR_17, const mcpwm_pin_config_t *VAR_18)
{
    FUNC_0(VAR_17 < VAR_15, VAR_16, VAR_0);
    FUNC_1(VAR_17, VAR_2, VAR_18->mcpwm0a_out_num);
    FUNC_1(VAR_17, VAR_3, VAR_18->mcpwm0b_out_num);
    FUNC_1(VAR_17, VAR_4, VAR_18->mcpwm1a_out_num);
    FUNC_1(VAR_17, VAR_5, VAR_18->mcpwm1b_out_num);
    FUNC_1(VAR_17, VAR_6, VAR_18->mcpwm2a_out_num);
    FUNC_1(VAR_17, VAR_7, VAR_18->mcpwm2b_out_num);
    FUNC_1(VAR_17, VAR_12, VAR_18->mcpwm_sync0_in_num);
    FUNC_1(VAR_17, VAR_13, VAR_18->mcpwm_sync1_in_num);
    FUNC_1(VAR_17, VAR_14, VAR_18->mcpwm_sync2_in_num);
    FUNC_1(VAR_17, VAR_11, VAR_18->mcpwm_fault0_in_num);
    FUNC_1(VAR_17, VAR_11, VAR_18->mcpwm_fault1_in_num);
    FUNC_1(VAR_17, VAR_11, VAR_18->mcpwm_fault2_in_num);
    FUNC_1(VAR_17, VAR_8, VAR_18->mcpwm_cap0_in_num);
    FUNC_1(VAR_17, VAR_9, VAR_18->mcpwm_cap1_in_num);
    FUNC_1(VAR_17, VAR_10, VAR_18->mcpwm_cap2_in_num);
    return VAR_1;
}
