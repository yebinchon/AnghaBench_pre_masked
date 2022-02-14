
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int freq_hz; int speed_mode; int clk_cfg; int timer_num; int duty_resolution; } ;
typedef TYPE_1__ ledc_timer_config_t ;
struct TYPE_6__ {int duty; int gpio_num; int channel; int hpoint; int timer_sel; int speed_mode; int intr_type; } ;
typedef TYPE_2__ ledc_channel_config_t ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_16 ;

esp_err_t FUNC_4(void)
{
    if (VAR_16 == 1) {
        return VAR_0;
    }
    VAR_16 = 1;

    ledc_timer_config_t VAR_17 = {
        .duty_resolution = VAR_14,
        .freq_hz = 5000,
        .speed_mode = VAR_12,
        .timer_num = VAR_13,
        .clk_cfg = VAR_1,
    };



    FUNC_2(&VAR_17);

    ledc_channel_config_t VAR_18 = {
        .channel = VAR_2,
        .duty = 100,
        .gpio_num = VAR_8,
        .intr_type = VAR_7,
        .speed_mode = VAR_12,
        .timer_sel = VAR_13,
        .hpoint = 0,
    };
    FUNC_0(&VAR_18);
    VAR_18.channel = VAR_3;
    VAR_18.gpio_num = VAR_9;
    FUNC_0(&VAR_18);
    VAR_18.channel = VAR_4;
    VAR_18.gpio_num = VAR_10;
    FUNC_0(&VAR_18);
    VAR_18.channel = VAR_5;
    VAR_18.gpio_num = VAR_11;
    FUNC_0(&VAR_18);
    FUNC_1(0);

    FUNC_3(VAR_15);
    return VAR_0;
}
