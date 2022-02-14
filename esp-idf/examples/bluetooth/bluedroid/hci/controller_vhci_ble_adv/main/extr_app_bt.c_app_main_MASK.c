
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;
typedef int esp_bt_controller_config_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int VAR_6 ;
 int FUNC_9 (int *,char*,int,int *,int,int *,int ) ;

void FUNC_10(void)
{

    esp_err_t VAR_7 = FUNC_8();
    if (VAR_7 == VAR_3 || VAR_7 == VAR_2) {
        FUNC_1(FUNC_7());
        VAR_7 = FUNC_8();
    }
    FUNC_1( VAR_7 );
    esp_bt_controller_config_t VAR_8 = FUNC_0();

    VAR_7 = FUNC_5(VAR_1);
    if (VAR_7) {
        FUNC_2(VAR_6, "Bluetooth controller release classic bt memory failed: %s", FUNC_6(VAR_7));
        return;
    }

    if ((VAR_7 = FUNC_4(&VAR_8)) != VAR_4) {
        FUNC_2(VAR_6, "Bluetooth controller initialize failed: %s", FUNC_6(VAR_7));
        return;
    }

    if ((VAR_7 = FUNC_3(VAR_0)) != VAR_4) {
        FUNC_2(VAR_6, "Bluetooth controller enable failed: %s", FUNC_6(VAR_7));
        return;
    }
    FUNC_9(&VAR_5, "bleAdvtTask", 2048, ((void*)0), 5, ((void*)0), 0);
}
