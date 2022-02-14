
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int wifi_pd_en; int dig_dbias_wak; int rtc_dbias_slp; int rtc_dbias_wak; int dig_dbias_slp; int member_0; } ;
typedef TYPE_1__ rtc_sleep_config_t ;
typedef int pm_sw_reject_t ;
typedef int pm_sleep_mode_t ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__) ;

pm_sw_reject_t FUNC_5(pm_sleep_mode_t VAR_2, void(*VAR_3)(void))
{
    (void) VAR_3;

    FUNC_2();
    if (FUNC_1()) {
        FUNC_3();
        return VAR_1;
    }

    rtc_sleep_config_t VAR_4 = { 0 };

    switch (VAR_2) {
        case 128:
            VAR_4.wifi_pd_en = 1;
            VAR_4.dig_dbias_wak = 4;
            VAR_4.dig_dbias_slp = 0;
            VAR_4.rtc_dbias_wak = 0;
            VAR_4.rtc_dbias_slp = 0;
            FUNC_4(VAR_4);
            break;

        default:
            FUNC_0(0 && "unsupported sleep mode");
    }
    return VAR_0;
}
