
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_num_t ;
typedef int esp_err_t ;
typedef int adc_unit_t ;
typedef scalar_t__ adc_channel_t ;
typedef scalar_t__ adc1_channel_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,char*,int ) ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

esp_err_t FUNC_8(adc_unit_t VAR_5, adc_channel_t VAR_6)
{
    FUNC_1(VAR_5);
    gpio_num_t VAR_7 = 0;
    if (VAR_5 & VAR_1) {
        FUNC_2((adc1_channel_t) VAR_6 < VAR_0, "ADC1 channel error", VAR_2);
        FUNC_0(FUNC_3((adc1_channel_t) VAR_6, &VAR_7));
        FUNC_0(FUNC_5(VAR_7));
        FUNC_0(FUNC_7(VAR_7));
        FUNC_0(FUNC_6(VAR_7));
        FUNC_0(FUNC_4(VAR_7, VAR_4));
    }
    return VAR_3;
}
