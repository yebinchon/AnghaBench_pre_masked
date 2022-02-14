
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mcpwm_unit_t ;
typedef int mcpwm_timer_t ;
typedef int mcpwm_io_signals_t ;
typedef int mcpwm_fault_signal_t ;
typedef int mcpwm_fault_input_level_t ;
typedef int mcpwm_action_on_pwmxb_t ;
typedef int mcpwm_action_on_pwmxa_t ;
struct TYPE_3__ {int pin_bit_mask; int mode; int intr_type; } ;
typedef TYPE_1__ gpio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ,int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_8 ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(mcpwm_unit_t VAR_9, mcpwm_io_signals_t VAR_10, mcpwm_io_signals_t VAR_11, mcpwm_timer_t VAR_12,
        mcpwm_fault_signal_t VAR_13, mcpwm_fault_input_level_t VAR_14, mcpwm_io_signals_t VAR_15,
        mcpwm_action_on_pwmxa_t VAR_16, mcpwm_action_on_pwmxb_t VAR_17)
{
    gpio_config_t VAR_18;
    VAR_18.intr_type = VAR_2;
    VAR_18.mode = VAR_3;
    VAR_18.pin_bit_mask = (1 << VAR_0);
    FUNC_2(&VAR_18);
    FUNC_3(VAR_0, !VAR_14);

    FUNC_9(VAR_4, VAR_6);
    FUNC_9(VAR_5, VAR_7);

    FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12);
    FUNC_8(VAR_9, VAR_15, VAR_1);


    FUNC_0(FUNC_6(VAR_9, VAR_14, VAR_13));
    FUNC_0(FUNC_7(VAR_9, VAR_12, VAR_13, VAR_16, VAR_17));
    FUNC_10(1000 / VAR_8);

    FUNC_3(VAR_0, VAR_14);
    FUNC_10(1000 / VAR_8);
    FUNC_1(VAR_14, VAR_16, VAR_17, 1000, 5);
    FUNC_0(FUNC_5(VAR_9, VAR_13));
}
