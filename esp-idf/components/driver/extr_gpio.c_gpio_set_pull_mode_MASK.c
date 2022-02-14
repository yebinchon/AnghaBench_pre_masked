
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gpio_pull_mode_t ;
typedef int gpio_num_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,int ) ;

 int FUNC_2 (int ) ;



 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

esp_err_t FUNC_7(gpio_num_t VAR_3, gpio_pull_mode_t VAR_4)
{
    FUNC_1(FUNC_2(VAR_3), "GPIO number error", VAR_0);
    FUNC_1(VAR_4 <= 131, "GPIO pull mode error", VAR_0);
    esp_err_t VAR_5 = VAR_1;
    switch (VAR_4) {
    case 129:
        FUNC_3(VAR_3);
        FUNC_6(VAR_3);
        break;
    case 130:
        FUNC_4(VAR_3);
        FUNC_5(VAR_3);
        break;
    case 128:
        FUNC_4(VAR_3);
        FUNC_6(VAR_3);
        break;
    case 131:
        FUNC_3(VAR_3);
        FUNC_5(VAR_3);
        break;
    default:
        FUNC_0(VAR_2, "Unknown pull up/down mode,gpio_num=%u,pull=%u", VAR_3, VAR_4);
        VAR_5 = VAR_0;
        break;
    }
    return VAR_5;
}
