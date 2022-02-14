
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_sleep_source_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int wakeup_triggers; scalar_t__ ext1_trigger_mode; scalar_t__ ext1_rtc_gpio_mask; scalar_t__ ext0_trigger_level; scalar_t__ ext0_rtc_gpio_num; scalar_t__ sleep_duration; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
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
 TYPE_1__ VAR_11 ;

esp_err_t FUNC_2(esp_sleep_source_t VAR_12)
{



    if (FUNC_0(VAR_12, VAR_4, VAR_8)) {
        VAR_11.wakeup_triggers &= ~VAR_8;
        VAR_11.sleep_duration = 0;
    }
    else if (FUNC_0(VAR_12, VAR_2, VAR_6)) {
        VAR_11.ext0_rtc_gpio_num = 0;
        VAR_11.ext0_trigger_level = 0;
        VAR_11.wakeup_triggers &= ~VAR_6;
    }
    else if (FUNC_0(VAR_12, VAR_3, VAR_7)) {
        VAR_11.ext1_rtc_gpio_mask = 0;
        VAR_11.ext1_trigger_mode = 0;
        VAR_11.wakeup_triggers &= ~VAR_7;
    }
    else if (FUNC_0(VAR_12, VAR_5, VAR_9)) {
        VAR_11.wakeup_triggers &= ~VAR_9;
    }
    else {
        FUNC_1(VAR_10, "Incorrect wakeup source (%d) to disable.", (int) VAR_12);
        return VAR_0;
    }
    return VAR_1;
}
