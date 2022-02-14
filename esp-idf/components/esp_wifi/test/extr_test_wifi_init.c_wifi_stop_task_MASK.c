
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
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(void* VAR_4)
{
    SemaphoreHandle_t *VAR_5 = (SemaphoreHandle_t *) VAR_4;
    wifi_init_config_t VAR_6 = FUNC_4();

    FUNC_1(VAR_3, FUNC_0("nvs_flash_init"));
    esp_err_t VAR_7 = FUNC_11();
    if (VAR_7 == VAR_1 || VAR_7 == VAR_0) {
        FUNC_1(VAR_3, FUNC_0("no free pages or NFS version mismatch, erase.."));
        FUNC_3(FUNC_10());
        VAR_7 = FUNC_11();
    }
    FUNC_3(VAR_7);

    FUNC_1(VAR_3, FUNC_0("event_init"));
    FUNC_8();
    FUNC_12();
    FUNC_1(VAR_3, FUNC_0("esp_wifi_init"));
    FUNC_2(FUNC_6(&VAR_6) == VAR_2);
    FUNC_1(VAR_3, FUNC_0("esp_wifi_stop"));
    FUNC_2(FUNC_7() == VAR_2);
    FUNC_1(VAR_3, FUNC_0("esp_wifi_stop"));
    FUNC_2(FUNC_7() == VAR_2);
    FUNC_1(VAR_3, FUNC_0("esp_wifi_deinit"));
    FUNC_2(FUNC_5() == VAR_2);
    FUNC_1(VAR_3, FUNC_0("nvs_flash_deinit..."));
    FUNC_9();
    FUNC_1(VAR_3, "test passed...");
    FUNC_14(*VAR_5);
    FUNC_13(((void*)0));
}
