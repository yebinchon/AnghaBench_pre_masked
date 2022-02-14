
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int fd; } ;
struct TYPE_4__ {TYPE_1__ srv_open; } ;
typedef TYPE_2__ esp_spp_cb_param_t ;
typedef int esp_spp_cb_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(uint16_t VAR_8, void *VAR_9)
{
    esp_spp_cb_event_t VAR_10 = VAR_8;
    esp_spp_cb_param_t *VAR_11 = VAR_9;

    switch (VAR_10) {
    case 131:
        FUNC_0(VAR_4, "ESP_SPP_INIT_EVT");
        FUNC_1(VAR_2);
        FUNC_2(VAR_0, VAR_1);
        FUNC_3(VAR_6,VAR_5, 0, VAR_3);
        break;
    case 132:
        FUNC_0(VAR_4, "ESP_SPP_DISCOVERY_COMP_EVT");
        break;
    case 130:
        FUNC_0(VAR_4, "ESP_SPP_OPEN_EVT");
        break;
    case 134:
        FUNC_0(VAR_4, "ESP_SPP_CLOSE_EVT");
        break;
    case 128:
        FUNC_0(VAR_4, "ESP_SPP_START_EVT");
        break;
    case 133:
        FUNC_0(VAR_4, "ESP_SPP_CL_INIT_EVT");
        break;
    case 129:
        FUNC_0(VAR_4, "ESP_SPP_SRV_OPEN_EVT");
        FUNC_4(VAR_7, VAR_11->srv_open.fd);
        break;
    default:
        break;
    }
}
