
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wifi_prov_cb_event_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_2 (int ) ;

void FUNC_3(void *VAR_3, wifi_prov_cb_event_t VAR_4, void *VAR_5)
{
    esp_err_t VAR_6;
    switch (VAR_4) {
        case 128:

            VAR_6 = FUNC_2(VAR_0);
            if (VAR_6 != VAR_1) {
                FUNC_0(VAR_2, "bt_mem_release of classic BT failed %d", VAR_6);
            } else {
                FUNC_1(VAR_2, "BT memory released");
            }
            break;

        default:
            break;
    }
}
