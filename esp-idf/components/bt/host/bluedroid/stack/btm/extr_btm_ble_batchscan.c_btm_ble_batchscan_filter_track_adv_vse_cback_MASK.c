
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ version_supported; } ;
typedef TYPE_2__ tBTM_BLE_VSC_CB ;
struct TYPE_9__ {int address; } ;
struct TYPE_11__ {scalar_t__ filt_index; scalar_t__ advertiser_state; scalar_t__ advertiser_info_present; scalar_t__ addr_type; scalar_t__ tx_power; scalar_t__ rssi_value; scalar_t__ adv_pkt_len; scalar_t__ scan_rsp_len; TYPE_1__ bd_addr; void* p_scan_rsp_data; void* p_adv_pkt_data; int time_stamp; scalar_t__ client_if; } ;
typedef TYPE_3__ tBTM_BLE_TRACK_ADV_DATA ;
typedef scalar_t__ UINT8 ;
struct TYPE_13__ {int (* p_track_cback ) (TYPE_3__*) ;scalar_t__ ref_value; } ;
struct TYPE_12__ {int ref_value; int (* p_thres_cback ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,scalar_t__,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_5 (void*,scalar_t__*,scalar_t__) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 void* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;

void FUNC_10(UINT8 VAR_6, UINT8 *VAR_7)
{
    tBTM_BLE_TRACK_ADV_DATA VAR_8;

    UINT8 VAR_9 = 0;
    tBTM_BLE_VSC_CB VAR_10;
    FUNC_4(VAR_9, VAR_7);

    FUNC_1("btm_ble_batchscan_filter_track_adv_vse_cback called with event:%x", VAR_9);
    if (VAR_2 == VAR_9 &&
            ((void*)0) != VAR_5.p_thres_cback) {
        VAR_5.p_thres_cback(VAR_5.ref_value);
        return;
    }

    if (VAR_3 == VAR_9 && ((void*)0) != VAR_4.p_track_cback) {
        if (VAR_6 < 10) {
            return;
        }

        FUNC_6(&VAR_8, 0 , sizeof(tBTM_BLE_TRACK_ADV_DATA));
        FUNC_0(&VAR_10);
        VAR_8.client_if = (UINT8)VAR_4.ref_value;
        if (VAR_10.version_supported > VAR_1) {
            FUNC_4(VAR_8.filt_index, VAR_7);
            FUNC_4(VAR_8.advertiser_state, VAR_7);
            FUNC_4(VAR_8.advertiser_info_present, VAR_7);
            FUNC_2(VAR_8.bd_addr.address, VAR_7);
            FUNC_4(VAR_8.addr_type, VAR_7);


            if (VAR_0 == VAR_8.advertiser_info_present) {
                FUNC_4(VAR_8.tx_power, VAR_7);
                FUNC_4(VAR_8.rssi_value, VAR_7);
                FUNC_3(VAR_8.time_stamp, VAR_7);

                FUNC_4(VAR_8.adv_pkt_len, VAR_7);
                if (VAR_8.adv_pkt_len > 0) {
                    VAR_8.p_adv_pkt_data = FUNC_7(VAR_8.adv_pkt_len);
                    FUNC_5(VAR_8.p_adv_pkt_data, VAR_7, VAR_8.adv_pkt_len);
                }

                FUNC_4(VAR_8.scan_rsp_len, VAR_7);
                if (VAR_8.scan_rsp_len > 0) {
                    VAR_8.p_scan_rsp_data = FUNC_7(VAR_8.scan_rsp_len);
                    FUNC_5(VAR_8.p_scan_rsp_data, VAR_7, VAR_8.scan_rsp_len);
                }
            }
        } else {

            FUNC_4(VAR_8.filt_index, VAR_7);
            FUNC_4(VAR_8.addr_type, VAR_7);
            FUNC_2(VAR_8.bd_addr.address, VAR_7);
            FUNC_4(VAR_8.advertiser_state, VAR_7);
        }

        FUNC_1("track_adv_vse_cback called: %d, %d, %d", VAR_8.filt_index,
                        VAR_8.addr_type, VAR_8.advertiser_state);
        VAR_4.p_track_cback(&VAR_8);
        return;
    }
}
