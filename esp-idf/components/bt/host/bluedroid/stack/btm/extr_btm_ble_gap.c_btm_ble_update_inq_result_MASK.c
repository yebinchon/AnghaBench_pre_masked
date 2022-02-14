
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ ble_addr_type; int flag; int device_type; scalar_t__* dev_class; scalar_t__ ble_evt_type; scalar_t__ rssi; int inq_result_type; } ;
struct TYPE_10__ {TYPE_4__ results; } ;
struct TYPE_12__ {scalar_t__ inq_count; void* scan_rsp; TYPE_1__ inq_info; } ;
typedef TYPE_3__ tINQ_DB_ENT ;
typedef TYPE_4__ tBTM_INQ_RESULTS ;
struct TYPE_14__ {scalar_t__ inq_counter; } ;
typedef TYPE_5__ tBTM_INQUIRY_VAR_ST ;
struct TYPE_15__ {scalar_t__ scan_type; scalar_t__ adv_len; int adv_data_cache; } ;
typedef TYPE_6__ tBTM_BLE_INQ_CB ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_11__ {TYPE_6__ inq_var; } ;
struct TYPE_16__ {TYPE_2__ ble_ctr_cb; TYPE_5__ btm_inq_vars; } ;
typedef void* BOOLEAN ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__* FUNC_0 (int ,int ,scalar_t__*) ;
 int VAR_12 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,scalar_t__) ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (scalar_t__,scalar_t__*) ;
 int FUNC_5 (int ,TYPE_4__*,scalar_t__,scalar_t__*,scalar_t__) ;
 TYPE_7__ VAR_18 ;

BOOLEAN FUNC_6(BD_ADDR VAR_19, tINQ_DB_ENT *VAR_20, UINT8 VAR_21, UINT8 VAR_22, UINT8 *VAR_23)
{
    BOOLEAN VAR_24 = VAR_16;
    tBTM_INQ_RESULTS *VAR_25 = &VAR_20->inq_info.results;
    UINT8 VAR_26;
    UINT8 *VAR_27;
    tBTM_INQUIRY_VAR_ST *VAR_28 = &VAR_18.btm_inq_vars;
    UINT8 VAR_29, VAR_30;
    tBTM_BLE_INQ_CB *VAR_31 = &VAR_18.ble_ctr_cb.inq_var;
    UINT8 *VAR_32;
    UINT8 *VAR_33;

    FUNC_3 (VAR_29, VAR_23);

    if (VAR_29 > VAR_1) {
        FUNC_2("EIR data too long %d. discard", VAR_29);
        return VAR_15;
    }
    FUNC_5(VAR_19, VAR_25, VAR_29, VAR_23, VAR_22);

    VAR_32 = (VAR_23 + VAR_29);
    FUNC_3 (VAR_30, VAR_32);


    VAR_25->inq_result_type = VAR_12;
    VAR_25->ble_addr_type = VAR_21;
    VAR_25->rssi = VAR_30;


    if ((VAR_18.ble_ctr_cb.inq_var.scan_type == VAR_9 &&
            (VAR_22 == VAR_7 || VAR_22 == VAR_8))) {
        FUNC_1("btm_ble_update_inq_result scan_rsp=false, to_report=false,                              scan_type_active=%d", VAR_18.ble_ctr_cb.inq_var.scan_type);

        VAR_20->scan_rsp = VAR_15;

        VAR_24 = VAR_15;

    } else {
        VAR_20->scan_rsp = VAR_16;
    }

    if (VAR_20->inq_count != VAR_28->inq_counter) {
        VAR_25->device_type = VAR_13;
    } else {
        VAR_25->device_type |= VAR_13;
    }

    if (VAR_22 != VAR_10) {
        VAR_25->ble_evt_type = VAR_22;
    }

    VAR_20->inq_count = VAR_28->inq_counter;

    if (VAR_31->adv_len != 0) {
        if ((VAR_27 = FUNC_0(VAR_31->adv_data_cache, VAR_4, &VAR_26)) != ((void*)0)) {
            VAR_25->flag = * VAR_27;
        }
    }

    if (VAR_31->adv_len != 0) {




        VAR_33 = FUNC_0(VAR_31->adv_data_cache, VAR_3, &VAR_26);
        if (VAR_33 && VAR_26 == 2) {
            FUNC_4((UINT16)VAR_33[0] | (VAR_33[1] << 8), VAR_25->dev_class);
        } else {
            if ((VAR_33 = FUNC_0(VAR_31->adv_data_cache,
                                             VAR_2, &VAR_26)) != ((void*)0)) {
                UINT8 VAR_34;
                for (VAR_34 = 0; VAR_34 + 2 <= VAR_26; VAR_34 = VAR_34 + 2) {


                    if ((VAR_33[VAR_34] | (VAR_33[VAR_34 + 1] << 8)) == VAR_17) {
                        VAR_25->dev_class[0] = 0;
                        VAR_25->dev_class[1] = VAR_11;
                        VAR_25->dev_class[2] = 0;
                        break;
                    }

                }
            }
        }
    }


    if ((VAR_25->flag & VAR_5) == 0 &&
            VAR_22 != VAR_6) {
        if (VAR_25->ble_addr_type != VAR_0) {
            FUNC_1("BR/EDR NOT support bit not set, treat as DUMO");
            VAR_25->device_type |= VAR_14;
        } else {
            FUNC_1("Random address, treating device as LE only");
        }
    } else {
        FUNC_1("BR/EDR NOT SUPPORT bit set, LE only device");
    }

    return VAR_24;

}
