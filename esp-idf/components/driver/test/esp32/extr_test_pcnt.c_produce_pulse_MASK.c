
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int freq_hz; int clk_cfg; int duty_resolution; int timer_num; int speed_mode; } ;
typedef TYPE_1__ ledc_timer_config_t ;
struct TYPE_6__ {int duty; int hpoint; int gpio_num; int intr_type; int timer_sel; int channel; int speed_mode; } ;
typedef TYPE_2__ ledc_channel_config_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(void)
{
    ledc_timer_config_t VAR_7 = {
        .speed_mode = VAR_2,
        .timer_num = VAR_4,
        .duty_resolution = VAR_5,
        .freq_hz = 1,
        .clk_cfg = VAR_0,
    };
    FUNC_0(FUNC_2(&VAR_7));

    ledc_channel_config_t VAR_8 = {
        .speed_mode = VAR_2,
        .channel = VAR_1,
        .timer_sel = VAR_4,
        .intr_type = VAR_3,
        .gpio_num = VAR_6,
        .duty = 100,
        .hpoint = 0,
    };
    FUNC_0(FUNC_1(&VAR_8));
}
