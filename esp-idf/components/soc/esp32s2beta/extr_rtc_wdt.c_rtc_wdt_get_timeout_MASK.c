
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int rtc_wdt_stage_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

esp_err_t FUNC_3(rtc_wdt_stage_t VAR_2, unsigned int* VAR_3)
{
    if (VAR_2 > 3) {
        return VAR_0;
    }
    uint32_t VAR_4;
    VAR_4 = FUNC_0(FUNC_1(VAR_2));
    *VAR_3 = VAR_4 * 1000 / FUNC_2();

    return VAR_1;
}
