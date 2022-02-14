
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* esp_netif; int if_index; int ip_changed; int ip_info; } ;
typedef TYPE_1__ ip_event_got_ip_t ;
typedef int ip ;
typedef int int32_t ;
typedef int evt ;
typedef int esp_netif_ip_info_t ;
typedef scalar_t__ esp_netif_dhcp_status_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_4 (void*,scalar_t__*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (void*,int *) ;
 int FUNC_8 (void*,int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (void*,int *) ;
 int FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int *,int *,int) ;

void FUNC_14(void *VAR_6, esp_event_base_t VAR_7, int32_t VAR_8, void *VAR_9)
{
    esp_netif_dhcp_status_t VAR_10;

    FUNC_0(VAR_5, "esp_netif action connected with netif%p from event_id=%d", VAR_6, VAR_8);
    FUNC_11(VAR_6);

    FUNC_4(VAR_6, &VAR_10);
    if (VAR_10 == VAR_0) {
        FUNC_5(VAR_6);
    } else if (VAR_10 == VAR_1) {

        esp_netif_ip_info_t VAR_11;
        esp_netif_ip_info_t VAR_12;

        FUNC_7(VAR_6, &VAR_11);
        FUNC_8(VAR_6, &VAR_12);

        if (FUNC_9(&VAR_11)) {
            ip_event_got_ip_t VAR_13 = {
                    .esp_netif = VAR_6,
                    .if_index = -1,
                    .ip_changed = 0,
            };

            if (FUNC_12(&VAR_11, &VAR_12, sizeof(VAR_11))) {
                VAR_13.ip_changed = 1;
            }

            FUNC_13(&VAR_13.ip_info, &VAR_11, sizeof(esp_netif_ip_info_t));
            FUNC_10(VAR_6, &VAR_11);

            FUNC_2("esp_event_send_internal in esp_netif_action_connected",
                    FUNC_3(VAR_4, FUNC_6(VAR_6, VAR_2) ,
                                                    &VAR_13, sizeof(VAR_13), 0), VAR_3);
            FUNC_0(VAR_5, "static ip: ip changed=%d", VAR_13.ip_changed);
        } else {
            FUNC_1(VAR_5, "invalid static ip");
        }
    }
}
