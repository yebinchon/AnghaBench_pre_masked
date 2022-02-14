
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int bit_width; scalar_t__ atten; int coeff_b; int coeff_a; int high_curve; int low_curve; int vref; } ;
typedef TYPE_1__ esp_adc_cal_characteristics_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int,int,int ,int) ;

uint32_t FUNC_4(uint32_t VAR_7, const esp_adc_cal_characteristics_t *VAR_8)
{
    FUNC_0(VAR_8 != ((void*)0));


    VAR_7 = (VAR_7 << (VAR_2 - VAR_8->bit_width));
    if (VAR_7 > VAR_0 - 1) {
        VAR_7 = VAR_0 - 1;
    }

    if (VAR_4 && (VAR_8->atten == VAR_1) && (VAR_7 >= VAR_6)) {

        uint32_t VAR_9 = FUNC_2(VAR_7, VAR_8->vref, VAR_8->low_curve, VAR_8->high_curve);
        if (VAR_7 <= VAR_5) {

            uint32_t VAR_10 = FUNC_1(VAR_7, VAR_8->coeff_a, VAR_8->coeff_b);
            return FUNC_3(VAR_10, VAR_9, VAR_3, (VAR_7 - VAR_6));
        } else {
            return VAR_9;
        }
    } else {
        return FUNC_1(VAR_7, VAR_8->coeff_a, VAR_8->coeff_b);
    }
}
