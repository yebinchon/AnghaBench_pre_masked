
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef int uint32_t ;
typedef int rtc_wdt_stage_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(rtc_wdt_stage_t VAR_9, unsigned int VAR_10)
{
    if (VAR_9 > 3) {
        return VAR_0;
    }
    uint32_t VAR_11 = (uint32_t) ((uint64_t) FUNC_1() * VAR_10 / 1000);
    if (VAR_9 == VAR_6) {
        FUNC_0(VAR_2, VAR_11);
    } else if (VAR_9 == VAR_7) {
        FUNC_0(VAR_3, VAR_11);
    } else if (VAR_9 == VAR_8) {
        FUNC_0(VAR_4, VAR_11);
    } else {
        FUNC_0(VAR_5, VAR_11);
    }

    return VAR_1;
}
