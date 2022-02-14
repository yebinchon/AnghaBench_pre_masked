
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_netif_driver_t ;
typedef int int32_t ;
typedef int esp_netif_t ;
typedef int esp_event_base_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,int ,int ,void*) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int ** VAR_4 ;

__attribute__((used)) static void FUNC_5(void *VAR_5, esp_event_base_t VAR_6, int32_t VAR_7, void *VAR_8)
{
    if (VAR_4[VAR_2] != ((void*)0)) {
        esp_err_t VAR_9;
        esp_netif_t *VAR_10 = VAR_4[VAR_2];
        wifi_netif_driver_t VAR_11 = FUNC_2(VAR_10);

        if (!FUNC_3(VAR_11)) {

            if ((VAR_9 = FUNC_4(VAR_11, VAR_3, VAR_10)) != VAR_0) {
                FUNC_0(VAR_1, "esp_wifi_register_if_rxcb for if=%p failed with %d", VAR_11, VAR_9);
                return;
            }
        }

        FUNC_1(VAR_4[VAR_2], VAR_6, VAR_7, VAR_8);
    }
}
