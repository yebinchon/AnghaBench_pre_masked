
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int mcpwm_unit_t ;
typedef int mcpwm_timer_t ;
typedef int mcpwm_sync_signal_t ;
typedef int mcpwm_io_signals_t ;
struct TYPE_5__ {int frequency; double cmpr_a; double cmpr_b; int duty_mode; int counter_mode; } ;
typedef TYPE_1__ mcpwm_config_t ;
struct TYPE_6__ {int pin_bit_mask; int mode; int intr_type; } ;
typedef TYPE_2__ gpio_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int) ;
 int VAR_8 ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(mcpwm_unit_t VAR_9, mcpwm_io_signals_t VAR_10, mcpwm_io_signals_t VAR_11, mcpwm_timer_t VAR_12,
        mcpwm_sync_signal_t VAR_13, mcpwm_io_signals_t VAR_14)
{
    gpio_config_t VAR_15;
    VAR_15.intr_type = VAR_0;
    VAR_15.mode = VAR_1;
    VAR_15.pin_bit_mask = (1 << VAR_7);
    FUNC_0(&VAR_15);
    FUNC_2(VAR_7, 0);

    FUNC_3(VAR_9, VAR_10, VAR_2);
    FUNC_3(VAR_9, VAR_11, VAR_3);
    FUNC_3(VAR_9, VAR_14, VAR_4);
    mcpwm_config_t VAR_16 = {
        .frequency = 1000,
        .cmpr_a = 50.0,
        .cmpr_b = 50.0,
        .counter_mode = VAR_6,
        .duty_mode = VAR_5,
    };
    FUNC_4(VAR_9, VAR_12, &VAR_16);
    FUNC_1(VAR_4);

    FUNC_6(VAR_9, VAR_12, VAR_13, 200);
    FUNC_2(VAR_7, 1);
    FUNC_7(2000 / VAR_8);
    FUNC_5(VAR_9, VAR_12);
    FUNC_7(2000 / VAR_8);
}
