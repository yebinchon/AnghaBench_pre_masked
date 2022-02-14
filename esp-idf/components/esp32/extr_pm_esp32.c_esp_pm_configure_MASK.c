
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtc_cpu_freq_config_t ;
struct TYPE_2__ {int min_freq_mhz; int max_freq_mhz; scalar_t__ light_sleep_enable; } ;
typedef TYPE_1__ esp_pm_config_esp32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int FUNC_2 (int,int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 () ;
 int VAR_11 ;
 int * VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;

esp_err_t FUNC_7(const void* VAR_15)
{

    return VAR_1;


    const esp_pm_config_esp32_t* VAR_16 = (const esp_pm_config_esp32_t*) VAR_15;

    if (VAR_16->light_sleep_enable) {
        return VAR_1;
    }


    int VAR_17 = VAR_16->min_freq_mhz;
    int VAR_18 = VAR_16->max_freq_mhz;

    if (VAR_17 > VAR_18) {
        return VAR_0;
    }

    rtc_cpu_freq_config_t VAR_19;
    if (!FUNC_5(VAR_17, &VAR_19)) {
        FUNC_1(VAR_10, "invalid min_freq_mhz value (%d)", VAR_17);
        return VAR_0;
    }

    int VAR_20 = (int) FUNC_6();
    if (VAR_17 < VAR_20 && VAR_17 * VAR_3 / VAR_9 < VAR_8) {
        FUNC_1(VAR_10, "min_freq_mhz should be >= %d", VAR_9 * VAR_8 / VAR_3);
        return VAR_0;
    }

    if (!FUNC_5(VAR_18, &VAR_19)) {
        FUNC_1(VAR_10, "invalid max_freq_mhz value (%d)", VAR_18);
        return VAR_0;
    }

    int VAR_21 = VAR_18;
    if (VAR_18 == 240) {



        VAR_21 = 240;
    } else if (VAR_18 == 160 || VAR_18 == 80) {



        VAR_21 = 80;
    }

    VAR_21 = FUNC_2(VAR_21, VAR_17);

    FUNC_0(VAR_10, "Frequency switching config: "
                  "CPU_MAX: %d, APB_MAX: %d, APB_MIN: %d, Light sleep: %s",
                  VAR_18,
                  VAR_21,
                  VAR_17,
                  VAR_16->light_sleep_enable ? "ENABLED" : "DISABLED");

    FUNC_3(&VAR_14);
    FUNC_5(VAR_18, &VAR_12[VAR_6]);
    FUNC_5(VAR_21, &VAR_12[VAR_4]);
    FUNC_5(VAR_17, &VAR_12[VAR_5]);
    VAR_12[VAR_7] = VAR_12[VAR_5];
    VAR_13 = VAR_16->light_sleep_enable;
    VAR_11 = 1;
    FUNC_4(&VAR_14);

    return VAR_2;
}
