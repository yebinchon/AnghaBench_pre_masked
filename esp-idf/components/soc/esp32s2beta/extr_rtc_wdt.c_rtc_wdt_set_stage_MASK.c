
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtc_wdt_stage_t ;
typedef int rtc_wdt_stage_action_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

esp_err_t FUNC_1(rtc_wdt_stage_t VAR_10, rtc_wdt_stage_action_t VAR_11)
{
    if (VAR_10 > 3 || VAR_11 > 4) {
        return VAR_0;
    }
    if (VAR_10 == VAR_7) {
        FUNC_0(VAR_2, VAR_3, VAR_11);
    } else if (VAR_10 == VAR_8) {
        FUNC_0(VAR_2, VAR_4, VAR_11);
    } else if (VAR_10 == VAR_9) {
        FUNC_0(VAR_2, VAR_5, VAR_11);
    } else {
        FUNC_0(VAR_2, VAR_6, VAR_11);
    }

    return VAR_1;
}
