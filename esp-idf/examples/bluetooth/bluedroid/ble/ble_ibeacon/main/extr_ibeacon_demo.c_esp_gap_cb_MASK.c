
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int esp_gap_ble_cb_event_t ;
typedef int esp_err_t ;
struct TYPE_12__ {int measured_power; int minor; int major; int proximity_uuid; } ;
struct TYPE_16__ {TYPE_3__ ibeacon_vendor; } ;
typedef TYPE_7__ esp_ble_ibeacon_t ;
struct TYPE_15__ {int status; } ;
struct TYPE_14__ {int status; } ;
struct TYPE_13__ {int rssi; int bda; scalar_t__ ble_adv; int adv_data_len; int search_evt; } ;
struct TYPE_11__ {int status; } ;
struct TYPE_10__ {int status; } ;
struct TYPE_17__ {TYPE_6__ adv_stop_cmpl; TYPE_5__ scan_stop_cmpl; TYPE_4__ scan_rst; TYPE_2__ adv_start_cmpl; TYPE_1__ scan_start_cmpl; } ;
typedef TYPE_8__ esp_ble_gap_cb_param_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_8(esp_gap_ble_cb_event_t VAR_5, esp_ble_gap_cb_param_t *VAR_6)
{
    esp_err_t VAR_7;

    switch (VAR_5) {
    case 135:{

        FUNC_3(&VAR_4);

        break;
    }
    case 132: {


        uint32_t VAR_8 = 0;
        FUNC_4(VAR_8);

        break;
    }
    case 130:

        if ((VAR_7 = VAR_6->scan_start_cmpl.status) != VAR_2) {
            FUNC_1(VAR_0, "Scan start failed: %s", FUNC_6(VAR_7));
        }
        break;
    case 134:

        if ((VAR_7 = VAR_6->adv_start_cmpl.status) != VAR_2) {
            FUNC_1(VAR_0, "Adv start failed: %s", FUNC_6(VAR_7));
        }
        break;
    case 131: {
        esp_ble_gap_cb_param_t *VAR_9 = (esp_ble_gap_cb_param_t *)VAR_6;
        switch (VAR_9->scan_rst.search_evt) {
        case 128:

            if (FUNC_5(VAR_9->scan_rst.ble_adv, VAR_9->scan_rst.adv_data_len)){
                esp_ble_ibeacon_t *VAR_10 = (esp_ble_ibeacon_t*)(VAR_9->scan_rst.ble_adv);
                FUNC_2(VAR_0, "----------iBeacon Found----------");
                FUNC_7("IBEACON_DEMO: Device address:", VAR_9->scan_rst.bda, VAR_1 );
                FUNC_7("IBEACON_DEMO: Proximity UUID:", VAR_10->ibeacon_vendor.proximity_uuid, VAR_3);

                uint16_t VAR_11 = FUNC_0(VAR_10->ibeacon_vendor.major);
                uint16_t VAR_12 = FUNC_0(VAR_10->ibeacon_vendor.minor);
                FUNC_2(VAR_0, "Major: 0x%04x (%d)", VAR_11, VAR_11);
                FUNC_2(VAR_0, "Minor: 0x%04x (%d)", VAR_12, VAR_12);
                FUNC_2(VAR_0, "Measured power (RSSI at a 1m distance):%d dbm", VAR_10->ibeacon_vendor.measured_power);
                FUNC_2(VAR_0, "RSSI of packet:%d dbm", VAR_9->scan_rst.rssi);
            }
            break;
        default:
            break;
        }
        break;
    }

    case 129:
        if ((VAR_7 = VAR_6->scan_stop_cmpl.status) != VAR_2){
            FUNC_1(VAR_0, "Scan stop failed: %s", FUNC_6(VAR_7));
        }
        else {
            FUNC_2(VAR_0, "Stop scan successfully");
        }
        break;

    case 133:
        if ((VAR_7 = VAR_6->adv_stop_cmpl.status) != VAR_2){
            FUNC_1(VAR_0, "Adv stop failed: %s", FUNC_6(VAR_7));
        }
        else {
            FUNC_2(VAR_0, "Stop adv successfully");
        }
        break;

    default:
        break;
    }
}
