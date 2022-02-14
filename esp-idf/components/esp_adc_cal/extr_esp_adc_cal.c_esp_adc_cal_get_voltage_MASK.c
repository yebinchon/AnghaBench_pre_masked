
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {scalar_t__ adc_num; int bit_width; } ;
typedef TYPE_1__ esp_adc_cal_characteristics_t ;
typedef scalar_t__ adc_channel_t ;
typedef scalar_t__ adc2_channel_t ;
typedef scalar_t__ adc1_channel_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int*) ;
 int FUNC_3 (int ,TYPE_1__ const*) ;

esp_err_t FUNC_4(adc_channel_t VAR_6,
                                  const esp_adc_cal_characteristics_t *VAR_7,
                                  uint32_t *VAR_8)
{

    FUNC_0(VAR_7 != ((void*)0), VAR_3);
    FUNC_0(VAR_8 != ((void*)0), VAR_3);

    int VAR_9;
    if (VAR_7->adc_num == VAR_2) {

        FUNC_0((adc1_channel_t)VAR_6 < VAR_0, VAR_3);
        VAR_9 = FUNC_1(VAR_6);
    } else {

        FUNC_0((adc2_channel_t)VAR_6 < VAR_1, VAR_3);
        if (FUNC_2(VAR_6, VAR_7->bit_width, &VAR_9) != VAR_5) {
            return VAR_4;
        }
    }
    *VAR_8 = FUNC_3((uint32_t)VAR_9, VAR_7);
    return VAR_5;
}
