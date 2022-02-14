
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
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(void* VAR_3)
{
    SemaphoreHandle_t *VAR_4 = (SemaphoreHandle_t *) VAR_3;
    wifi_init_config_t VAR_5 = FUNC_3();

    FUNC_1(VAR_2, FUNC_0("nvs_flash_init"));
    esp_err_t VAR_6 = FUNC_9();
    if (VAR_6 == VAR_1 || VAR_6 == VAR_0) {
        FUNC_1(VAR_2, FUNC_0("no free pages or NFS version mismatch, erase.."));
        FUNC_2(FUNC_8());
        VAR_6 = FUNC_9();
    }
    FUNC_2(VAR_6);

    FUNC_1(VAR_2, FUNC_0("event_init"));
    FUNC_6();
    FUNC_10();
    FUNC_1(VAR_2, FUNC_0("esp_wifi_init"));
    FUNC_2(FUNC_5(&VAR_5));
    FUNC_1(VAR_2, FUNC_0("esp_wifi_deinit..."));
    FUNC_2(FUNC_4());
    FUNC_1(VAR_2, FUNC_0("nvs_flash_deinit..."));
    FUNC_7();
    FUNC_1(VAR_2, "test passed...");
    FUNC_12(*VAR_4);
    FUNC_11(((void*)0));
}
