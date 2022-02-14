
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_num_t ;
typedef int esp_err_t ;
typedef int adc1_channel_t ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int,char*,int ) ;

esp_err_t FUNC_1(adc1_channel_t VAR_11, gpio_num_t *VAR_12)
{
    FUNC_0(VAR_11 < VAR_8, "ADC1 Channel Err", VAR_9);

    switch (VAR_11) {
    case 135:
        *VAR_12 = VAR_0;
        break;
    case 134:
        *VAR_12 = VAR_1;
        break;
    case 133:
        *VAR_12 = VAR_2;
        break;
    case 132:
        *VAR_12 = VAR_3;
        break;
    case 131:
        *VAR_12 = VAR_4;
        break;
    case 130:
        *VAR_12 = VAR_5;
        break;
    case 129:
        *VAR_12 = VAR_6;
        break;
    case 128:
        *VAR_12 = VAR_7;
        break;
    default:
        return VAR_9;
    }

    return VAR_10;
}
