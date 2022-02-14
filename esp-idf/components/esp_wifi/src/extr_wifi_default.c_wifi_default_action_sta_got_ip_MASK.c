
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (int *,int ,int ,void*) ;
 int FUNC_3 () ;
 int ** VAR_3 ;

__attribute__((used)) static void FUNC_4(void *VAR_4, esp_event_base_t VAR_5, int32_t VAR_6, void *VAR_7)
{
    if (VAR_3[VAR_2] != ((void*)0)) {
        FUNC_0(VAR_1, "Got IP wifi default handler entered");
        int VAR_8 = FUNC_3();
        if (VAR_8 != VAR_0) {
            FUNC_1(VAR_1, "esp_wifi_internal_set_sta_ip failed with %d", VAR_8);
        }
        FUNC_2(VAR_3[VAR_2], VAR_5, VAR_6, VAR_7);
    }
}
