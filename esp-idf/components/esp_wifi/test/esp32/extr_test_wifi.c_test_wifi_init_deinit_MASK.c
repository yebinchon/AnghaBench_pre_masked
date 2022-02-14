
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_mode_t ;
typedef int wifi_init_config_t ;
typedef int wifi_config_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(wifi_init_config_t *VAR_4, wifi_config_t* VAR_5)
{
    FUNC_1(VAR_2, FUNC_0("esp_wifi_deinit"));
    FUNC_2(VAR_0, FUNC_4());
    FUNC_1(VAR_2, FUNC_0("esp_wifi_get_mode"));
    wifi_mode_t VAR_6;
    FUNC_2(VAR_0, FUNC_5(&VAR_6));
    FUNC_1(VAR_2, FUNC_0("esp_wifi_init"));
    FUNC_3(FUNC_6(VAR_4));
    FUNC_1(VAR_2, FUNC_0("esp_wifi_set_mode"));
    FUNC_3(FUNC_8(VAR_3));
    FUNC_1(VAR_2, FUNC_0("esp_wifi_set_config"));
    FUNC_3(FUNC_7(VAR_1, VAR_5));
    FUNC_1(VAR_2, FUNC_0("esp_wifi_deinit..."));
    FUNC_3(FUNC_4());
}
