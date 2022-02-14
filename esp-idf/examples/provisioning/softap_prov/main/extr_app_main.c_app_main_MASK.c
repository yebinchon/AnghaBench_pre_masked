
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_init_config_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;

void FUNC_13(void)
{

    FUNC_8();



    FUNC_0(FUNC_5());


    FUNC_0(FUNC_10());


    FUNC_7();
    FUNC_6();
    wifi_init_config_t VAR_2 = FUNC_3();
    FUNC_0(FUNC_9(&VAR_2));


    bool VAR_3;
    if (FUNC_4(&VAR_3) != VAR_0) {
        FUNC_1(VAR_1, "Error getting device provisioning state");
        return;
    }

    if (VAR_3 == 0) {

        FUNC_2(VAR_1, "Starting WiFi SoftAP provisioning");
        FUNC_11();
    } else {

        FUNC_2(VAR_1, "Starting WiFi station");
        FUNC_12();
    }
}
