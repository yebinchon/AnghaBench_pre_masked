
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ledc_timer_t ;
struct TYPE_5__ {int freq_hz; int clk_cfg; int timer_num; int duty_resolution; int speed_mode; } ;
typedef TYPE_1__ ledc_timer_config_t ;
typedef int ledc_timer_bit_t ;
typedef int ledc_mode_t ;
typedef int ledc_channel_t ;
struct TYPE_6__ {int duty; int channel; int speed_mode; int timer_sel; int intr_type; int gpio_num; } ;
typedef TYPE_2__ ledc_channel_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4(ledc_channel_t VAR_3, ledc_timer_bit_t VAR_4, ledc_timer_t VAR_5, ledc_mode_t VAR_6)
{
    ledc_channel_config_t VAR_7 = {
        .gpio_num = VAR_2,
        .speed_mode = VAR_6,
        .channel = VAR_3,
        .intr_type = VAR_1,
        .timer_sel = VAR_5,
        .duty = 4000,
    };
    ledc_timer_config_t VAR_8 = {
        .speed_mode = VAR_6,
        .duty_resolution = VAR_4,
        .timer_num = VAR_5,
        .freq_hz = 5000,
        .clk_cfg = VAR_0,
    };
    FUNC_0(FUNC_1(&VAR_7));
    FUNC_0(FUNC_2(&VAR_8));


    FUNC_3(VAR_7.speed_mode, VAR_7.channel, 0);
    FUNC_3(VAR_7.speed_mode, VAR_7.channel, 1);
    FUNC_3(VAR_7.speed_mode, VAR_7.channel, 1 << 12);
    FUNC_3(VAR_7.speed_mode, VAR_7.channel, (1 << 13) - 1);
    FUNC_3(VAR_7.speed_mode, VAR_7.channel, (1 << 13) - 2);
}
