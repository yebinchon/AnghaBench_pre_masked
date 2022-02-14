
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ esp_sleep_source_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int wakeup_triggers; scalar_t__ ext1_trigger_mode; scalar_t__ ext1_rtc_gpio_mask; scalar_t__ ext0_trigger_level; scalar_t__ ext0_rtc_gpio_num; scalar_t__ sleep_duration; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;

esp_err_t FUNC_2(esp_sleep_source_t VAR_20)
{



    if (VAR_20 == VAR_2) {
        VAR_19.wakeup_triggers = 0;
    } else if (FUNC_0(VAR_20, VAR_6, VAR_13)) {
        VAR_19.wakeup_triggers &= ~VAR_13;
        VAR_19.sleep_duration = 0;
    } else if (FUNC_0(VAR_20, VAR_3, VAR_10)) {
        VAR_19.ext0_rtc_gpio_num = 0;
        VAR_19.ext0_trigger_level = 0;
        VAR_19.wakeup_triggers &= ~VAR_10;
    } else if (FUNC_0(VAR_20, VAR_4, VAR_11)) {
        VAR_19.ext1_rtc_gpio_mask = 0;
        VAR_19.ext1_trigger_mode = 0;
        VAR_19.wakeup_triggers &= ~VAR_11;
    } else if (FUNC_0(VAR_20, VAR_7, VAR_14)) {
        VAR_19.wakeup_triggers &= ~VAR_14;
    } else if (FUNC_0(VAR_20, VAR_5, VAR_12)) {
        VAR_19.wakeup_triggers &= ~VAR_12;
    } else if (FUNC_0(VAR_20, VAR_8, (VAR_15 | VAR_16))) {
        VAR_19.wakeup_triggers &= ~(VAR_15 | VAR_16);
    }





    else {
        FUNC_1(VAR_18, "Incorrect wakeup source (%d) to disable.", (int) VAR_20);
        return VAR_0;
    }
    return VAR_1;
}
