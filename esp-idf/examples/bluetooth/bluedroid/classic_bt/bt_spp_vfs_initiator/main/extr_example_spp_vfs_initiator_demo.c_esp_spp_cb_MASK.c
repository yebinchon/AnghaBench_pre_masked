
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {int fd; } ;
struct TYPE_4__ {int * scn; int status; int scn_num; } ;
struct TYPE_6__ {TYPE_2__ open; TYPE_1__ disc_comp; } ;
typedef TYPE_3__ esp_spp_cb_param_t ;
typedef int esp_spp_cb_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_6(uint16_t VAR_12, void *VAR_13)
{
    esp_spp_cb_event_t VAR_14 = VAR_12;
    esp_spp_cb_param_t *VAR_15 = VAR_13;

    switch (VAR_14) {
    case 131:
        FUNC_0(VAR_4, "ESP_SPP_INIT_EVT");
        FUNC_1(VAR_3);
        FUNC_2(VAR_0, VAR_1);
        FUNC_3(VAR_6, VAR_5, VAR_7);

        break;
    case 132:
        FUNC_0(VAR_4, "ESP_SPP_DISCOVERY_COMP_EVT status=%d scn_num=%d",VAR_15->disc_comp.status, VAR_15->disc_comp.scn_num);
        if (VAR_15->disc_comp.status == VAR_2) {
            FUNC_4(VAR_10, VAR_9, VAR_15->disc_comp.scn[0], VAR_8);
        }
        break;
    case 130:
        FUNC_0(VAR_4, "ESP_SPP_OPEN_EVT");
        FUNC_5(VAR_11, VAR_15->open.fd);
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
        break;
    default:
        break;
    }
}
