
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;
typedef int esp_bt_controller_config_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 int VAR_4 ;
 int FUNC_8 () ;

void FUNC_9(void)
{
    esp_err_t VAR_5;


    VAR_5 = FUNC_7();
    if (VAR_5 == VAR_2 || VAR_5 == VAR_1) {
        FUNC_1(FUNC_6());
        VAR_5 = FUNC_7();
    }
    FUNC_1( VAR_5 );



    FUNC_8();

    esp_bt_controller_config_t VAR_6 = FUNC_0();
    VAR_5 = FUNC_4(&VAR_6);
    if (VAR_5 != VAR_3) {
        FUNC_2(VAR_4, "Bluetooth Controller initialize failed: %s", FUNC_5(VAR_5));
        return;
    }

    VAR_5 = FUNC_3(VAR_0);
    if (VAR_5 != VAR_3) {
        FUNC_2(VAR_4, "Bluetooth Controller initialize failed: %s", FUNC_5(VAR_5));
        return;
    }
}
