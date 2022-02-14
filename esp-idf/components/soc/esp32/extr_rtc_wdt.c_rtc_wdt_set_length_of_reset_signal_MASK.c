
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtc_wdt_reset_sig_t ;
typedef int rtc_wdt_length_sig_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

esp_err_t FUNC_1(rtc_wdt_reset_sig_t VAR_5, rtc_wdt_length_sig_t VAR_6)
{
    if (VAR_5 > 1 || VAR_6 > 7) {
        return VAR_0;
    }
    if (VAR_5 == 0) {
        FUNC_0(VAR_2, VAR_4, VAR_6);
    } else {
        FUNC_0(VAR_2, VAR_3, VAR_6);
    }

    return VAR_1;
}
