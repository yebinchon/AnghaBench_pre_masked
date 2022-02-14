
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int mcpwm_unit_t ;
typedef int mcpwm_timer_t ;
typedef int mcpwm_io_signals_t ;
struct TYPE_3__ {int frequency; double cmpr_a; double cmpr_b; int duty_mode; int counter_mode; } ;
typedef TYPE_1__ mcpwm_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(mcpwm_unit_t VAR_4, mcpwm_io_signals_t VAR_5, mcpwm_io_signals_t VAR_6, mcpwm_timer_t VAR_7)
{
    FUNC_0(VAR_4, VAR_5, VAR_0);
    FUNC_0(VAR_4, VAR_6, VAR_1);
    mcpwm_config_t VAR_8 = {
        .frequency = 1000,
        .cmpr_a = 50.0,
        .cmpr_b = 50.0,
        .counter_mode = VAR_3,
        .duty_mode = VAR_2,
    };
    FUNC_1(VAR_4, VAR_7, &VAR_8);
}
