
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int light_sleep_enable; int min_freq_mhz; int max_freq_mhz; } ;
typedef TYPE_1__ esp_pm_config_esp32_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(void)
{

    esp_err_t VAR_4 = FUNC_3();
    if (VAR_4 == VAR_3 || VAR_4 == VAR_2) {
        FUNC_0(FUNC_2());
        VAR_4 = FUNC_3();
    }
    FUNC_0( VAR_4 );
    FUNC_4();
}
