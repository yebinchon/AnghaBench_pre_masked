
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int esp_gap_ble_cb_event_t ;
typedef int esp_err_t ;
typedef int esp_eddystone_result_t ;
struct TYPE_8__ {int status; } ;
struct TYPE_7__ {int rssi; int bda; int adv_data_len; int ble_adv; int search_evt; } ;
struct TYPE_6__ {int status; } ;
struct TYPE_9__ {TYPE_3__ scan_stop_cmpl; TYPE_2__ scan_rst; TYPE_1__ scan_start_cmpl; } ;
typedef TYPE_4__ esp_ble_gap_cb_param_t ;
typedef int eddystone_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void FUNC_8(esp_gap_ble_cb_event_t VAR_3, esp_ble_gap_cb_param_t* VAR_4)
{
    esp_err_t VAR_5;

    switch(VAR_3)
    {
        case 132: {
            uint32_t VAR_6 = 0;
            FUNC_2(VAR_6);
            break;
        }
        case 130: {
            if((VAR_5 = VAR_4->scan_start_cmpl.status) != VAR_2) {
                FUNC_0(VAR_0,"Scan start failed: %s", FUNC_5(VAR_5));
            }
            else {
                FUNC_1(VAR_0,"Start scanning...");
            }
            break;
        }
        case 131: {
            esp_ble_gap_cb_param_t* VAR_7 = (esp_ble_gap_cb_param_t*)VAR_4;
            switch(VAR_7->scan_rst.search_evt)
            {
                case 128: {
                    esp_eddystone_result_t VAR_8;
                    FUNC_7(&VAR_8, 0, sizeof(VAR_8));
                    esp_err_t VAR_9 = FUNC_3(VAR_7->scan_rst.ble_adv, VAR_7->scan_rst.adv_data_len, &VAR_8);
                    if (VAR_9) {


                        return;
                    } else {



                        FUNC_1(VAR_0, "--------Eddystone Found----------");
                        FUNC_6("EDDYSTONE_DEMO: Device address:", VAR_7->scan_rst.bda, VAR_1);
                        FUNC_1(VAR_0, "RSSI of packet:%d dbm", VAR_7->scan_rst.rssi);
                        FUNC_4(&VAR_8);
                    }
                    break;
                }
                default:
                    break;
            }
            break;
        }
        case 129:{
            if((VAR_5 = VAR_4->scan_stop_cmpl.status) != VAR_2) {
                FUNC_0(VAR_0,"Scan stop failed: %s", FUNC_5(VAR_5));
            }
            else {
                FUNC_1(VAR_0,"Stop scan successfully");
            }
            break;
        }
        default:
            break;
    }
}
