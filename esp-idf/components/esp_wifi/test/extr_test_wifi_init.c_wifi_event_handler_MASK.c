
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int esp_event_base_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;


 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(void* VAR_5, esp_event_base_t VAR_6, int32_t VAR_7, void* VAR_8)
{
    FUNC_3("wifi ev_handle_called.\n");
    switch(VAR_7) {
        case 128:
            FUNC_0(VAR_2, "WIFI_EVENT_STA_START");
            break;
        case 129:
            FUNC_0(VAR_2, "WIFI_EVENT_STA_DISCONNECTED");
            if (! (VAR_1 & VAR_3) ) {
                FUNC_1(FUNC_2());
            }
            if (VAR_4) {
                FUNC_4(VAR_4, VAR_0);
            }
            break;
        default:
            break;
    }
    return;
}
