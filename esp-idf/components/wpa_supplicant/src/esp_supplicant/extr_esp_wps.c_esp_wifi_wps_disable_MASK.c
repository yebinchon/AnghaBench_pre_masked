
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;

int FUNC_11(void)
{
    int VAR_8 = 0;

    if (VAR_1 != FUNC_6()) {
        return VAR_0;
    }

    FUNC_1();

    if (!VAR_7) {
        FUNC_5(VAR_2, "wps disable: already disabled");
        FUNC_0();
        return VAR_1;
    }

    FUNC_5(VAR_4, "wifi_wps_disable\n");
    FUNC_9(VAR_6);




    FUNC_7();




    VAR_8 = FUNC_4();


    if (VAR_1 != VAR_8) {
        FUNC_5(VAR_3, "wps disable: failed to disable wps, ret=%d", VAR_8);
    }

    FUNC_2();
    FUNC_3(0);
    FUNC_10();
    VAR_7 = 0;
    FUNC_0();
    return VAR_1;
}
