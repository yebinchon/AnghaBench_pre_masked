
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int msg; TYPE_5__* resp_apply_config; TYPE_5__* resp_set_config; TYPE_5__* resp_get_status; } ;
typedef TYPE_3__ WiFiConfigPayload ;
struct TYPE_7__ {TYPE_5__* data; } ;
struct TYPE_6__ {TYPE_5__* data; } ;
struct TYPE_9__ {struct TYPE_9__* connected; TYPE_2__ ssid; TYPE_1__ bssid; struct TYPE_9__* ip4_addr; int sta_state; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;






 int FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_2(WiFiConfigPayload *VAR_1, void *VAR_2)
{
    if (!VAR_1) {
        return;
    }

    switch (VAR_1->msg) {
        case 129:
            {
                switch (VAR_1->resp_get_status->sta_state) {
                    case 132:
                        break;
                    case 133:
                        if (VAR_1->resp_get_status->connected) {
                            if (VAR_1->resp_get_status->connected->ip4_addr) {
                                FUNC_1(VAR_1->resp_get_status->connected->ip4_addr);
                            }
                            if (VAR_1->resp_get_status->connected->bssid.data) {
                                FUNC_1(VAR_1->resp_get_status->connected->bssid.data);
                            }
                            if (VAR_1->resp_get_status->connected->ssid.data) {
                                FUNC_1(VAR_1->resp_get_status->connected->ssid.data);
                            }
                            FUNC_1(VAR_1->resp_get_status->connected);
                        }
                        break;
                    case 131:
                        break;
                    default:
                        break;
                }
                FUNC_1(VAR_1->resp_get_status);
            }
            break;
        case 128:
            {
                FUNC_1(VAR_1->resp_set_config);
            }
            break;
        case 130:
            {
                FUNC_1(VAR_1->resp_apply_config);
            }
            break;
        default:
            FUNC_0(VAR_0, "Unsupported response type in cleanup_handler");
            break;
    }
    return;
}
