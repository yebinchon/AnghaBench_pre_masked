
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ esp_sleep_ext1_wakeup_mode_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int rtc_num; } ;
struct TYPE_3__ {int wakeup_triggers; scalar_t__ ext1_trigger_mode; int ext1_rtc_gpio_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 TYPE_1__ VAR_6 ;

esp_err_t FUNC_3(uint64_t VAR_7, esp_sleep_ext1_wakeup_mode_t VAR_8)
{
    if (VAR_8 > VAR_1) {
        return VAR_0;
    }

    uint32_t VAR_9 = 0;
    for (int VAR_10 = 0; VAR_7; ++VAR_10, VAR_7 >>= 1) {
        if ((VAR_7 & 1) == 0) {
            continue;
        }
        if (!FUNC_2(VAR_10)) {
            FUNC_1(VAR_4, "Not an RTC IO: GPIO%d", VAR_10);
            return VAR_0;
        }
        VAR_9 |= FUNC_0(VAR_5[VAR_10].rtc_num);
    }
    VAR_6.ext1_rtc_gpio_mask = VAR_9;
    VAR_6.ext1_trigger_mode = VAR_8;
    VAR_6.wakeup_triggers |= VAR_3;
    return VAR_2;
}
