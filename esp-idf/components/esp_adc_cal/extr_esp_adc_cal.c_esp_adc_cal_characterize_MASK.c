
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int esp_adc_cal_value_t ;
struct TYPE_3__ {int * high_curve; int * low_curve; int vref; scalar_t__ bit_width; scalar_t__ atten; scalar_t__ adc_num; int coeff_b; int coeff_a; } ;
typedef TYPE_1__ esp_adc_cal_characteristics_t ;
typedef scalar_t__ adc_unit_t ;
typedef scalar_t__ adc_bits_width_t ;
typedef scalar_t__ adc_atten_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ,int ,int *,int *) ;
 int FUNC_2 (scalar_t__,scalar_t__,int ,int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;

esp_adc_cal_value_t FUNC_8(adc_unit_t VAR_14,
                                             adc_atten_t VAR_15,
                                             adc_bits_width_t VAR_16,
                                             uint32_t VAR_17,
                                             esp_adc_cal_characteristics_t *VAR_18)
{

    FUNC_0((VAR_14 == VAR_1) || (VAR_14 == VAR_2));
    FUNC_0(VAR_18 != ((void*)0));
    FUNC_0(VAR_16 < VAR_3);


    bool VAR_19 = FUNC_3();
    bool VAR_20 = FUNC_4();
    esp_adc_cal_value_t VAR_21;

    if (VAR_19 && VAR_4) {

        uint32_t VAR_22 = FUNC_5(VAR_14);
        uint32_t VAR_23 = FUNC_6(VAR_14);
        FUNC_1(VAR_14, VAR_15, VAR_22, VAR_23, &VAR_18->coeff_a, &VAR_18->coeff_b);
        VAR_21 = VAR_7;
    } else if (VAR_20 && VAR_5) {

        uint32_t VAR_24 = FUNC_7();
        FUNC_2(VAR_14, VAR_15, VAR_24, &VAR_18->coeff_a, &VAR_18->coeff_b);
        VAR_21 = VAR_8;
    } else {

        FUNC_2(VAR_14, VAR_15, VAR_17, &VAR_18->coeff_a, &VAR_18->coeff_b);
        VAR_21 = VAR_6;
    }


    VAR_18->adc_num = VAR_14;
    VAR_18->atten = VAR_15;
    VAR_18->bit_width = VAR_16;
    VAR_18->vref = (VAR_5 && VAR_20) ? FUNC_7() : VAR_17;

    if (VAR_9 && VAR_15 == VAR_0) {
        VAR_18->low_curve = (VAR_14 == VAR_1) ? VAR_11 : VAR_13;
        VAR_18->high_curve = (VAR_14 == VAR_1) ? VAR_10 : VAR_12;
    } else {
        VAR_18->low_curve = ((void*)0);
        VAR_18->high_curve = ((void*)0);
    }
    return VAR_21;
}
