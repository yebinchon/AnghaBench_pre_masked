
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef scalar_t__ adc_atten_t ;
typedef scalar_t__ adc1_channel_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

esp_err_t FUNC_3(adc1_channel_t VAR_5, adc_atten_t VAR_6)
{
    FUNC_0(VAR_5 < VAR_0, "ADC Channel Err", VAR_3);
    FUNC_0(VAR_6 < VAR_1, "ADC Atten Err", VAR_3);
    FUNC_1(VAR_2, VAR_5);
    FUNC_2(VAR_2, VAR_5, VAR_6);
    return VAR_4;
}
