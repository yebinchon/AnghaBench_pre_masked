
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_init_config_t ;
typedef scalar_t__ esp_err_t ;
typedef int SemaphoreHandle_t ;


 char* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static void FUNC_17(void* VAR_4)
{
    SemaphoreHandle_t *VAR_5 = (SemaphoreHandle_t *) VAR_4;
    wifi_init_config_t VAR_6 = FUNC_4();

    FUNC_1(VAR_3, FUNC_0("nvs_flash_init"));
    esp_err_t VAR_7 = FUNC_13();
    if (VAR_7 == VAR_1 || VAR_7 == VAR_0) {
     FUNC_1(VAR_3, FUNC_0("no free pages or NFS version mismatch, erase.."));
     FUNC_3(FUNC_12());
     VAR_7 = FUNC_13();
    }
    FUNC_3(VAR_7);

    FUNC_1(VAR_3, FUNC_0("esp_netif_init"));
    FUNC_5();

    FUNC_1(VAR_3, FUNC_0("event_init"));
    FUNC_10();
    FUNC_14();
    FUNC_1(VAR_3, FUNC_0("esp_wifi_init"));
    FUNC_2(FUNC_7(&VAR_6) == VAR_2);
    FUNC_1(VAR_3, FUNC_0("esp_wifi_start"));
    FUNC_2(FUNC_8() == VAR_2);
    FUNC_1(VAR_3, FUNC_0("esp_wifi_stop"));
    FUNC_2(FUNC_9() == VAR_2);
    FUNC_1(VAR_3, FUNC_0("esp_wifi_stop"));
    FUNC_2(FUNC_9() == VAR_2);
    FUNC_1(VAR_3, FUNC_0("esp_wifi_deinit"));
    FUNC_2(FUNC_6() == VAR_2);
    FUNC_1(VAR_3, FUNC_0("nvs_flash_deinit..."));
    FUNC_11();
    FUNC_1(VAR_3, "test passed...");
    FUNC_16(*VAR_5);
    FUNC_15(((void*)0));
}
