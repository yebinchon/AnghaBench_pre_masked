
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t rtc_cpu_freq_t ;
struct TYPE_2__ {scalar_t__ min_cpu_freq; size_t max_cpu_freq; scalar_t__ light_sleep_enable; } ;
typedef TYPE_1__ esp_pm_config_esp32_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,int ,char*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (size_t) ;
 int VAR_12 ;
 size_t* VAR_13 ;
 int * VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;

esp_err_t FUNC_5(const void* VAR_17)
{

    return VAR_1;


    const esp_pm_config_esp32_t* VAR_18 = (const esp_pm_config_esp32_t*) VAR_17;

    if (VAR_18->light_sleep_enable) {
        return VAR_1;
    }


    if (VAR_18->min_cpu_freq == VAR_9) {

        return VAR_1;
    }

    rtc_cpu_freq_t VAR_19 = VAR_18->min_cpu_freq;
    rtc_cpu_freq_t VAR_20 = VAR_18->max_cpu_freq;
    int VAR_21 = FUNC_4(VAR_19);
    int VAR_22 = FUNC_4(VAR_20);
    if (VAR_21 > VAR_22) {
        return VAR_0;
    }

    rtc_cpu_freq_t VAR_23 = VAR_20;
    if (VAR_20 == VAR_8) {



        VAR_23 = VAR_8;
    } else if (VAR_20 == VAR_7 || VAR_20 == VAR_10) {



        VAR_23 = VAR_10;
    }

    VAR_23 = FUNC_1(VAR_23, VAR_19);

    FUNC_0(VAR_11, "Frequency switching config: "
                  "CPU_MAX: %s, APB_MAX: %s, APB_MIN: %s, Light sleep: %s",
                  VAR_14[VAR_20],
                  VAR_14[VAR_23],
                  VAR_14[VAR_19],
                  VAR_18->light_sleep_enable ? "ENABLED" : "DISABLED");

    FUNC_2(&VAR_16);
    VAR_13[VAR_5] = VAR_20;
    VAR_13[VAR_3] = VAR_23;
    VAR_13[VAR_4] = VAR_19;
    VAR_13[VAR_6] = VAR_19;
    VAR_15 = VAR_18->light_sleep_enable;
    VAR_12 = 1;
    FUNC_3(&VAR_16);

    return VAR_2;
}
