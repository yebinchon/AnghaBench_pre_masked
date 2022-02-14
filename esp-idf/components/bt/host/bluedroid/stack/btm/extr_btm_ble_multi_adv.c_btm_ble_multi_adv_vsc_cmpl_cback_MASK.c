
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* p_param_buf; int param_len; } ;
typedef TYPE_1__ tBTM_VSC_CMPL ;
struct TYPE_6__ {int p_ref; int (* p_cback ) (int,int,int ,int) ;int in_use; } ;
typedef TYPE_2__ tBTM_BLE_MULTI_ADV_INST ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_7__ {TYPE_2__* p_adv_inst; } ;



 int VAR_0 ;




 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int*,int*,int*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (int,int,int ,int) ;

void FUNC_5 (tBTM_VSC_CMPL *VAR_4)
{
    UINT8 VAR_5, VAR_6;
    UINT8 *VAR_7 = VAR_4->p_param_buf, VAR_8;
    UINT16 VAR_9 = VAR_4->param_len;
    tBTM_BLE_MULTI_ADV_INST *VAR_10 ;
    UINT8 VAR_11 = 0, VAR_12;

    if (VAR_9 < 2) {
        FUNC_1("wrong length for btm_ble_multi_adv_vsc_cmpl_cback");
        return;
    }

    FUNC_2(VAR_5, VAR_7);
    FUNC_2(VAR_6, VAR_7);

    FUNC_3(&VAR_12, &VAR_8, &VAR_11);

    FUNC_0("op_code = %02x inst_id = %d cb_evt = %02x", VAR_12, VAR_8, VAR_11);

    if (VAR_12 != VAR_6 || VAR_8 == 0) {
        FUNC_1("get unexpected VSC cmpl, expect: %d get: %d", VAR_6, VAR_12);
        return;
    }

    VAR_10 = &VAR_3.p_adv_inst[VAR_8 - 1];

    switch (VAR_6) {
    case 132: {
        FUNC_0("BTM_BLE_MULTI_ADV_ENB status = %d", VAR_5);


        if (VAR_2 != VAR_5 && VAR_0 == VAR_11) {
            VAR_3.p_adv_inst[VAR_8 - 1].in_use = VAR_1;
        }
        break;
    }

    case 131: {
        FUNC_0("BTM_BLE_MULTI_ADV_SET_PARAM status = %d", VAR_5);
        break;
    }

    case 129: {
        FUNC_0("BTM_BLE_MULTI_ADV_WRITE_ADV_DATA status = %d", VAR_5);
        break;
    }

    case 128: {
        FUNC_0("BTM_BLE_MULTI_ADV_WRITE_SCAN_RSP_DATA status = %d", VAR_5);
        break;
    }

    case 130: {
        FUNC_0("BTM_BLE_MULTI_ADV_SET_RANDOM_ADDR status = %d", VAR_5);
        break;
    }

    default:
        break;
    }

    if (VAR_11 != 0 && VAR_10->p_cback != ((void*)0)) {
        (VAR_10->p_cback)(VAR_11, VAR_8, VAR_10->p_ref, VAR_5);
    }
    return;
}
