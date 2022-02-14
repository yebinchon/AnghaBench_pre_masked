
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int mcpwm_unit_t ;
typedef int mcpwm_timer_t ;
typedef int mcpwm_io_signals_t ;
typedef int mcpwm_carrier_out_ivt_t ;
typedef int mcpwm_carrier_os_t ;
struct TYPE_3__ {int carrier_period; int carrier_duty; int pulse_width_in_os; int carrier_ivt_mode; int carrier_os_mode; } ;
typedef TYPE_1__ mcpwm_carrier_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(mcpwm_unit_t VAR_0, mcpwm_io_signals_t VAR_1, mcpwm_io_signals_t VAR_2, mcpwm_timer_t VAR_3,
        mcpwm_carrier_os_t VAR_4, mcpwm_carrier_out_ivt_t VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t VAR_8)
{
    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);

    mcpwm_carrier_config_t VAR_9;
    VAR_9.carrier_period = VAR_6;
    VAR_9.carrier_duty = VAR_7;
    VAR_9.carrier_os_mode = VAR_4;
    VAR_9.pulse_width_in_os = VAR_8;
    VAR_9.carrier_ivt_mode = VAR_5;
    FUNC_4(VAR_0, VAR_3, &VAR_9);

    if(!VAR_4) {




        FUNC_1(500, 62500/(VAR_6 + 1));
    } else {
        FUNC_1(500, 40000/((VAR_6 + 1)));
    }

    FUNC_0(FUNC_3(VAR_0, VAR_3));
    FUNC_1(2, 1000);
}
