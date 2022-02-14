
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_init_config_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ,char*,int **) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int const*) ;
 int VAR_3 ;
 int FUNC_6 () ;
 int VAR_4 ;
 int * VAR_5 ;
 scalar_t__ FUNC_7 () ;

esp_err_t FUNC_8(const wifi_init_config_t *VAR_6)
{
    esp_err_t VAR_7 = FUNC_5(VAR_6);
    if (VAR_7 == VAR_0) {
        FUNC_6();




        VAR_7 = FUNC_3();
        if (VAR_7 != VAR_0) {
            FUNC_0(VAR_2, "Failed to init supplicant (0x%x)", VAR_7);
            esp_err_t VAR_8 = FUNC_4();
            if (VAR_8 != VAR_0) {
                FUNC_0(VAR_2, "Failed to deinit Wi-Fi (0x%x)", VAR_8);
            }

            return VAR_7;
        }
    }

    return VAR_7;
}
