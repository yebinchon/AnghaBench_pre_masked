
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int esp_err_t ;
typedef int adc_unit_t ;
typedef int adc_channel_t ;
typedef int adc_bits_width_t ;
typedef int adc_atten_t ;
typedef scalar_t__ adc1_channel_t ;
struct TYPE_2__ {int* saradc_sar1_patt_tab; int* saradc_sar2_patt_tab; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,char*,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_8 ;

__attribute__((used)) static esp_err_t FUNC_4(adc_unit_t VAR_9, int VAR_10, adc_channel_t VAR_11, adc_bits_width_t VAR_12, adc_atten_t VAR_13)
{
    FUNC_0(VAR_9);
    if (VAR_9 & VAR_2) {
        FUNC_1((adc1_channel_t) VAR_11 < VAR_0, "ADC1 channel error", VAR_5);
    }
    FUNC_1(VAR_12 < VAR_4, "ADC bit width error", VAR_5);
    FUNC_1(VAR_13 < VAR_1, "ADC Atten Err", VAR_5);

    FUNC_2(&VAR_8);




    uint8_t VAR_14 = (VAR_11 << 4) | (VAR_12 << 2) | (VAR_13 << 0);
    if (VAR_9 & VAR_2) {
        VAR_7.saradc_sar1_patt_tab[VAR_10 / 4] &= (~(0xff << ((3 - (VAR_10 % 4)) * 8)));
        VAR_7.saradc_sar1_patt_tab[VAR_10 / 4] |= (VAR_14 << ((3 - (VAR_10 % 4)) * 8));
    }
    if (VAR_9 & VAR_3) {
        VAR_7.saradc_sar2_patt_tab[VAR_10 / 4] &= (~(0xff << ((3 - (VAR_10 % 4)) * 8)));
        VAR_7.saradc_sar2_patt_tab[VAR_10 / 4] |= (VAR_14 << ((3 - (VAR_10 % 4)) * 8));
    }
    FUNC_3(&VAR_8);
    return VAR_6;
}
