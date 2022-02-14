
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_wps_config_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int FUNC_8(const esp_wps_config_t *VAR_6)
{
    int VAR_7;

    if (VAR_1 != FUNC_4()) {
        return VAR_0;
    }

    FUNC_1();
    if (VAR_5) {
        FUNC_0();
        FUNC_3(VAR_2, "wps enable: already enabled");
        return VAR_1;
    }
    VAR_7 = FUNC_2(VAR_6);
    FUNC_0();
    return VAR_7;

}
