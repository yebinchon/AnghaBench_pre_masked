
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtc_gpio_mode_t ;
typedef int gpio_num_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

esp_err_t FUNC_6(gpio_num_t VAR_2, rtc_gpio_mode_t VAR_3)
{
    FUNC_0(FUNC_3(VAR_2), "RTC_GPIO number error", VAR_0);

    switch (VAR_3) {
    case 130:
        FUNC_4(VAR_2);
        FUNC_2(VAR_2);
        break;
    case 128:
        FUNC_5(VAR_2);
        FUNC_1(VAR_2);
        break;
    case 129:
        FUNC_5(VAR_2);
        FUNC_2(VAR_2);
        break;
    case 131:
        FUNC_4(VAR_2);
        FUNC_1(VAR_2);
        break;
    }

    return VAR_1;
}
