
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int handle; int cong; int len; } ;
struct TYPE_12__ {int handle; int cong; } ;
struct TYPE_11__ {int handle; } ;
struct TYPE_10__ {int * scn; int status; int scn_num; } ;
struct TYPE_14__ {TYPE_4__ write; TYPE_3__ cong; TYPE_2__ srv_open; TYPE_1__ disc_comp; } ;
typedef TYPE_5__ esp_spp_cb_param_t ;
typedef int esp_spp_cb_event_t ;
struct TYPE_15__ {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_8 () ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_6__ VAR_14 ;
 TYPE_6__ VAR_15 ;

__attribute__((used)) static void FUNC_9(esp_spp_cb_event_t VAR_16, esp_spp_cb_param_t *VAR_17)
{
    switch (VAR_16) {
    case 132:
        FUNC_0(VAR_5, "ESP_SPP_INIT_EVT");
        FUNC_1(VAR_3);
        FUNC_2(VAR_0, VAR_1);
        FUNC_3(VAR_8, VAR_7, VAR_9);

        break;
    case 133:
        FUNC_0(VAR_5, "ESP_SPP_DISCOVERY_COMP_EVT status=%d scn_num=%d",VAR_17->disc_comp.status, VAR_17->disc_comp.scn_num);
        if (VAR_17->disc_comp.status == VAR_2) {
            FUNC_5(VAR_12, VAR_11, VAR_17->disc_comp.scn[0], VAR_10);
        }
        break;
    case 131:
        FUNC_0(VAR_5, "ESP_SPP_OPEN_EVT");
        FUNC_6(VAR_17->srv_open.handle, VAR_4, VAR_13);
        FUNC_7(&VAR_15, ((void*)0));
        break;
    case 137:
        FUNC_0(VAR_5, "ESP_SPP_CLOSE_EVT");
        break;
    case 129:
        FUNC_0(VAR_5, "ESP_SPP_START_EVT");
        break;
    case 136:
        FUNC_0(VAR_5, "ESP_SPP_CL_INIT_EVT");
        break;
    case 134:
        FUNC_0(VAR_5, "ESP_SPP_DATA_IND_EVT");
        break;
    case 135:

        FUNC_0(VAR_5, "ESP_SPP_CONG_EVT cong=%d", VAR_17->cong.cong);

        if (VAR_17->cong.cong == 0) {
            FUNC_6(VAR_17->cong.handle, VAR_4, VAR_13);
        }
        break;
    case 128:

        FUNC_0(VAR_5, "ESP_SPP_WRITE_EVT len=%d cong=%d", VAR_17->write.len , VAR_17->write.cong);
        FUNC_4("",VAR_13,VAR_4);







        if (VAR_17->write.cong == 0) {
            FUNC_6(VAR_17->write.handle, VAR_4, VAR_13);
        }
        break;
    case 130:
        FUNC_0(VAR_5, "ESP_SPP_SRV_OPEN_EVT");
        break;
    default:
        break;
    }
}
