
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_adc_cal_value_t ;
typedef int esp_adc_cal_characteristics_t ;
typedef int adc2_channel_t ;
typedef int adc1_channel_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int,int) ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (int,int ,int ,int ,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,int,...) ;
 int VAR_7 ;
 int FUNC_12 (int ) ;

void FUNC_13(void)
{






    if (VAR_7 == VAR_0) {
        FUNC_1(VAR_1);
        FUNC_0(VAR_6, VAR_5);
    } else {
        FUNC_3((adc2_channel_t)VAR_6, VAR_5);
    }
    while (1) {
        uint32_t VAR_8 = 0;

        for (int VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
            if (VAR_7 == VAR_0) {
                VAR_8 += FUNC_2((adc1_channel_t)VAR_6);
            } else {
                int VAR_10;
                FUNC_4((adc2_channel_t)VAR_6, VAR_1, &VAR_10);
                VAR_8 += VAR_10;
            }
        }
        VAR_8 /= VAR_3;







        FUNC_12(FUNC_9(1000));
    }
}
