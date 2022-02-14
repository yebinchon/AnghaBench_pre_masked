
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef int adc_unit_t ;
typedef int adc_channel_t ;
typedef scalar_t__ adc_atten_t ;
typedef scalar_t__ adc1_channel_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;

__attribute__((used)) static esp_err_t FUNC_5(adc_unit_t VAR_11, adc_channel_t VAR_12, adc_atten_t VAR_13)
{
    FUNC_0(VAR_11);
    if (VAR_11 & VAR_2) {
        FUNC_1((adc1_channel_t)VAR_12 < VAR_0, "ADC Channel Err", VAR_4);
    }
    FUNC_1(VAR_13 < VAR_1, "ADC Atten Err", VAR_4);

    FUNC_3(&VAR_10);
    if (VAR_11 & VAR_2) {

        FUNC_2(VAR_8, VAR_6, VAR_13, (VAR_12 * 2));
    }
    if (VAR_11 & VAR_3) {

        FUNC_2(VAR_9, VAR_7, VAR_13, (VAR_12 * 2));
    }
    FUNC_4(&VAR_10);
    return VAR_5;
}
