
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef scalar_t__ adc_bits_width_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,scalar_t__) ;

esp_err_t FUNC_3(adc_bits_width_t VAR_4)
{
    FUNC_0(VAR_4 < VAR_1, "ADC bit width error", VAR_2);
    FUNC_2(VAR_0, VAR_4);
    FUNC_1(VAR_0, 1);
    return VAR_3;
}
