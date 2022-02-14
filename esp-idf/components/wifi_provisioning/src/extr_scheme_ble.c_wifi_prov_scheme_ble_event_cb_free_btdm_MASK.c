
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_prov_cb_event_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_2 (int ) ;

void FUNC_3(void *VAR_4, wifi_prov_cb_event_t VAR_5, void *VAR_6)
{
    esp_err_t VAR_7;
    switch (VAR_5) {
        case 128:

            VAR_7 = FUNC_2(VAR_1);
            if (VAR_7 != VAR_2) {
                FUNC_0(VAR_3, "bt_mem_release of classic BT failed %d", VAR_7);
            } else {
                FUNC_1(VAR_3, "BT memory released");
            }
            break;

        case 129:

            VAR_7 = FUNC_2(VAR_0);
            if (VAR_7 != VAR_2) {
                FUNC_0(VAR_3, "bt_mem_release of BTDM failed %d", VAR_7);
            } else {
                FUNC_1(VAR_3, "BTDM memory released");
            }
            break;

        default:
            break;
    }
}
