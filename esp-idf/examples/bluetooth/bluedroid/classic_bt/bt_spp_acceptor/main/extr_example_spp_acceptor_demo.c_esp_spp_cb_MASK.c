
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int len; int data; int handle; } ;
struct TYPE_8__ {TYPE_1__ data_ind; } ;
typedef TYPE_2__ esp_spp_cb_param_t ;
typedef int esp_spp_cb_event_t ;
struct TYPE_9__ {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 () ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 TYPE_3__ VAR_9 ;

__attribute__((used)) static void FUNC_7(esp_spp_cb_event_t VAR_10, esp_spp_cb_param_t *VAR_11)
{
    switch (VAR_10) {
    case 132:
        FUNC_0(VAR_4, "ESP_SPP_INIT_EVT");
        FUNC_1(VAR_2);
        FUNC_2(VAR_0, VAR_1);
        FUNC_4(VAR_7,VAR_6, 0, VAR_3);
        break;
    case 133:
        FUNC_0(VAR_4, "ESP_SPP_DISCOVERY_COMP_EVT");
        break;
    case 131:
        FUNC_0(VAR_4, "ESP_SPP_OPEN_EVT");
        break;
    case 137:
        FUNC_0(VAR_4, "ESP_SPP_CLOSE_EVT");
        break;
    case 129:
        FUNC_0(VAR_4, "ESP_SPP_START_EVT");
        break;
    case 136:
        FUNC_0(VAR_4, "ESP_SPP_CL_INIT_EVT");
        break;
    case 134:

        FUNC_0(VAR_4, "ESP_SPP_DATA_IND_EVT len=%d handle=%d",
                 VAR_11->data_ind.len, VAR_11->data_ind.handle);
        FUNC_3("",VAR_11->data_ind.data,VAR_11->data_ind.len);







        break;
    case 135:
        FUNC_0(VAR_4, "ESP_SPP_CONG_EVT");
        break;
    case 128:
        FUNC_0(VAR_4, "ESP_SPP_WRITE_EVT");
        break;
    case 130:
        FUNC_0(VAR_4, "ESP_SPP_SRV_OPEN_EVT");
        FUNC_5(&VAR_9, ((void*)0));
        break;
    default:
        break;
    }
}
