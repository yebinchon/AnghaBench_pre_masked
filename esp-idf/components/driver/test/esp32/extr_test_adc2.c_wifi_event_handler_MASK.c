
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;


 int FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void* VAR_1, esp_event_base_t VAR_2,
                                int32_t VAR_3, void* VAR_4)
{
    FUNC_3("ev_handle_called.\n");
    switch(VAR_3) {
        case 128:
            FUNC_0(VAR_0, "WIFI_EVENT_STA_START");


            break;
        case 129:
            FUNC_0(VAR_0, "WIFI_EVENT_STA_DISCONNECTED");
            FUNC_1(FUNC_2());
            break;
        default:
            break;
    }
    return ;
}
