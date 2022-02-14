
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef int esp_bt_controller_config_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

esp_err_t FUNC_5(void)
{
    esp_err_t VAR_3;

    FUNC_3(VAR_1);

    esp_bt_controller_config_t VAR_4 = FUNC_0();

    if ((VAR_3 = FUNC_2(&VAR_4)) != VAR_2) {
        return VAR_3;
    }

    if ((VAR_3 = FUNC_1(VAR_0)) != VAR_2) {
        return VAR_3;
    }
    return FUNC_4();
}
