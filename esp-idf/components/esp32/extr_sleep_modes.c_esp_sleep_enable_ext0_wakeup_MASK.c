
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t gpio_num_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int rtc_num; } ;
struct TYPE_3__ {int wakeup_triggers; int ext0_trigger_level; int ext0_rtc_gpio_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__ VAR_8 ;

esp_err_t FUNC_2(gpio_num_t VAR_9, int VAR_10)
{
    if (VAR_10 < 0 || VAR_10 > 1) {
        return VAR_0;
    }
    if (!FUNC_1(VAR_9)) {
        return VAR_0;
    }
    if (VAR_8.wakeup_triggers & (VAR_4 | VAR_5)) {
        FUNC_0(VAR_6, "Conflicting wake-up triggers: touch / ULP");
        return VAR_1;
    }
    VAR_8.ext0_rtc_gpio_num = VAR_7[VAR_9].rtc_num;
    VAR_8.ext0_trigger_level = VAR_10;
    VAR_8.wakeup_triggers |= VAR_3;
    return VAR_2;
}
