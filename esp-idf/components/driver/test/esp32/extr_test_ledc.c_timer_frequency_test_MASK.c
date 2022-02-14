
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ledc_timer_t ;
struct TYPE_5__ {scalar_t__ speed_mode; int freq_hz; int clk_cfg; int timer_num; int duty_resolution; } ;
typedef TYPE_1__ ledc_timer_config_t ;
typedef int ledc_timer_bit_t ;
typedef scalar_t__ ledc_mode_t ;
typedef int ledc_channel_t ;
struct TYPE_6__ {scalar_t__ speed_mode; int duty; int timer_sel; int intr_type; int channel; int gpio_num; } ;
typedef TYPE_2__ ledc_channel_config_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ,int,int,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(ledc_channel_t VAR_4, ledc_timer_bit_t VAR_5, ledc_timer_t VAR_6, ledc_mode_t VAR_7)
{
    ledc_channel_config_t VAR_8 = {
        .gpio_num = VAR_3,
        .speed_mode = VAR_7,
        .channel = VAR_4,
        .intr_type = VAR_2,
        .timer_sel = VAR_6,
        .duty = 4000,
    };
    ledc_timer_config_t VAR_9 = {
        .speed_mode = VAR_7,
        .duty_resolution = VAR_5,
        .timer_num = VAR_6,
        .freq_hz = 5000,
        .clk_cfg = VAR_0,
    };
    FUNC_0(FUNC_2(&VAR_8));
    FUNC_0(FUNC_3(&VAR_9));

    if(VAR_8.speed_mode == VAR_1) {
        FUNC_1(VAR_8.speed_mode, VAR_8.timer_sel, 100, 100, 2);
        FUNC_1(VAR_8.speed_mode, VAR_8.timer_sel, 5000, 5000, 5);
        FUNC_1(VAR_8.speed_mode, VAR_8.timer_sel, 9000, 9025, 5);
    } else {
        FUNC_1(VAR_8.speed_mode, VAR_8.timer_sel, 10, 10, 1);



    }
}
