
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_err_t ;
typedef int adc_unit_t ;
typedef scalar_t__ adc_channel_t ;
typedef scalar_t__ adc1_channel_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,char*,int ) ;
 int VAR_16 ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int,int ,scalar_t__,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int VAR_17 ;

esp_err_t FUNC_16(adc_unit_t VAR_18, adc_channel_t VAR_19)
{
    FUNC_0(VAR_18);
    if (VAR_18 & VAR_11) {
        FUNC_1((adc1_channel_t) VAR_19 < VAR_0, "ADC1 channel error", VAR_14);
    }

    uint8_t VAR_20 = 1;

    FUNC_3();
    FUNC_2(VAR_18, VAR_19);
    FUNC_9(VAR_18, VAR_20);
    FUNC_10(VAR_18, 0, VAR_19, VAR_13, VAR_1);
    FUNC_14(&VAR_17);
    if (VAR_18 & VAR_11) {
        FUNC_5( VAR_11, VAR_2 );
    }
    if (VAR_18 & VAR_12) {
        FUNC_5( VAR_12, VAR_2 );
    }
    FUNC_15(&VAR_17);
    FUNC_11(VAR_8);
    FUNC_4(VAR_16);

    FUNC_8(VAR_4, VAR_6, VAR_5,
            VAR_7);
    FUNC_13(VAR_18);
    FUNC_6(VAR_3);
    FUNC_12(VAR_9, VAR_10);

    FUNC_7(VAR_18, 1);
    return VAR_15;
 }
