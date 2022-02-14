
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef scalar_t__ esp_adc_cal_value_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(esp_adc_cal_value_t VAR_5)
{
    if (VAR_5 == VAR_0) {
        return (FUNC_0()) ? VAR_4 : VAR_3;
    } else if (VAR_5 == VAR_1) {
        return (FUNC_1()) ? VAR_4 : VAR_3;
    } else {
        return VAR_2;
    }
}
