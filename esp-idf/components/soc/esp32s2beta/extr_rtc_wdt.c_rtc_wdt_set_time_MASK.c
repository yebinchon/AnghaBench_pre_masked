
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
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;

esp_err_t FUNC_4(rtc_wdt_stage_t VAR_5, unsigned int VAR_6)
{
    if (VAR_5 > 3) {
        return VAR_2;
    }
    uint32_t VAR_7 = (uint32_t) ((uint64_t) FUNC_3() * VAR_6 / 1000);
    if (VAR_5 == VAR_4) {
        VAR_7 = VAR_7 >> (1 + FUNC_0(VAR_0, VAR_1));
    }
    FUNC_1(FUNC_2(VAR_5), VAR_7);
    return VAR_3;
}
