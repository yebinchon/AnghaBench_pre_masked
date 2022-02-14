
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_66__ TYPE_9__ ;
typedef struct TYPE_65__ TYPE_8__ ;
typedef struct TYPE_64__ TYPE_7__ ;
typedef struct TYPE_63__ TYPE_6__ ;
typedef struct TYPE_62__ TYPE_5__ ;
typedef struct TYPE_61__ TYPE_4__ ;
typedef struct TYPE_60__ TYPE_3__ ;
typedef struct TYPE_59__ TYPE_2__ ;
typedef struct TYPE_58__ TYPE_28__ ;
typedef struct TYPE_57__ TYPE_27__ ;
typedef struct TYPE_56__ TYPE_26__ ;
typedef struct TYPE_55__ TYPE_25__ ;
typedef struct TYPE_54__ TYPE_24__ ;
typedef struct TYPE_53__ TYPE_23__ ;
typedef struct TYPE_52__ TYPE_22__ ;
typedef struct TYPE_51__ TYPE_21__ ;
typedef struct TYPE_50__ TYPE_20__ ;
typedef struct TYPE_49__ TYPE_1__ ;
typedef struct TYPE_48__ TYPE_19__ ;
typedef struct TYPE_47__ TYPE_18__ ;
typedef struct TYPE_46__ TYPE_17__ ;
typedef struct TYPE_45__ TYPE_16__ ;
typedef struct TYPE_44__ TYPE_15__ ;
typedef struct TYPE_43__ TYPE_14__ ;
typedef struct TYPE_42__ TYPE_13__ ;
typedef struct TYPE_41__ TYPE_12__ ;
typedef struct TYPE_40__ TYPE_11__ ;
typedef struct TYPE_39__ TYPE_10__ ;


typedef int tGATT_ATTR_VAL ;
struct TYPE_49__ {int uuid16; } ;
struct TYPE_52__ {TYPE_1__ uu; int len; } ;
typedef TYPE_22__ tBT_UUID ;
typedef int tBTA_GATT_TRANSPORT ;
struct TYPE_61__ {int inst_id; int uuid; } ;
struct TYPE_53__ {int is_primary; TYPE_4__ id; } ;
typedef TYPE_23__ tBTA_GATT_SRVC_ID ;
typedef int tBTA_GATT_ATTR_VAL ;
struct TYPE_43__ {int handle; } ;
struct TYPE_54__ {TYPE_14__ attr_value; } ;
typedef TYPE_24__ tBTA_GATTS_RSP ;
typedef int tBTA_GATTS_ATTR_CONTROL ;
typedef int esp_gatt_rsp_t ;
struct TYPE_44__ {int status; int handle; } ;
struct TYPE_55__ {TYPE_15__ rsp; } ;
typedef TYPE_25__ esp_ble_gatts_cb_param_t ;
struct TYPE_56__ {int act; scalar_t__ arg; } ;
typedef TYPE_26__ btc_msg_t ;
struct TYPE_51__ {int gatts_if; int remote_bda; } ;
struct TYPE_50__ {int conn_id; } ;
struct TYPE_48__ {int is_direct; int remote_bda; int gatts_if; } ;
struct TYPE_46__ {int value; int length; int handle; } ;
struct TYPE_45__ {int conn_id; int status; int trans_id; int * rsp; } ;
struct TYPE_42__ {int need_confirm; int value; int value_len; int attr_handle; int conn_id; } ;
struct TYPE_41__ {int attr_control; int descr_val; int perm; int service_handle; int descr_uuid; } ;
struct TYPE_40__ {int attr_control; int char_val; int property; int perm; int service_handle; int char_uuid; } ;
struct TYPE_39__ {int included_service_handle; int service_handle; } ;
struct TYPE_66__ {int service_handle; } ;
struct TYPE_65__ {int service_handle; } ;
struct TYPE_64__ {int service_handle; } ;
struct TYPE_63__ {int srvc_inst_id; int max_nb_attr; int gatts_if; int gatts_attr_db; } ;
struct TYPE_62__ {int num_handle; int gatts_if; int service_id; } ;
struct TYPE_60__ {int gatts_if; } ;
struct TYPE_59__ {int app_id; } ;
struct TYPE_57__ {TYPE_21__ send_service_change; TYPE_20__ close; TYPE_19__ open; int remote_bda; TYPE_17__ set_attr_val; TYPE_16__ send_rsp; TYPE_13__ send_ind; TYPE_12__ add_descr; TYPE_11__ add_char; TYPE_10__ add_incl_srvc; TYPE_9__ stop_srvc; TYPE_8__ start_srvc; TYPE_7__ delete_srvc; TYPE_6__ create_attr_tab; TYPE_5__ create_srvc; TYPE_3__ app_unreg; TYPE_2__ app_reg; } ;
typedef TYPE_27__ btc_ble_gatts_args_t ;
struct TYPE_47__ {int address; } ;
struct TYPE_58__ {TYPE_18__ bd_addr; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,TYPE_22__*,int *,int *) ;
 int FUNC_2 (int ,TYPE_22__*,int ,int ,int *,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_22__*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int ,int ,int ,TYPE_24__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int VAR_1 ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_17 (int ,int *) ;
 int VAR_5 ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (TYPE_26__*) ;
 int FUNC_20 (int ,int ,TYPE_25__*) ;
 int VAR_6 ;
 int FUNC_21 (TYPE_24__*,int *) ;
 int FUNC_22 (TYPE_23__*,int *) ;
 int FUNC_23 (TYPE_22__*,int *) ;
 int FUNC_24 (int ,int *) ;
 int VAR_7 ;
 int FUNC_25 (int ,int ,int ) ;
 TYPE_28__* VAR_8 ;

void FUNC_26(btc_msg_t *VAR_9)
{
    btc_ble_gatts_args_t *VAR_10 = (btc_ble_gatts_args_t *)VAR_9->arg;

    switch (VAR_9->act) {
    case 140: {
        tBT_UUID VAR_11;

        VAR_11.len = VAR_4;
        VAR_11.uu.uuid16 = VAR_10->app_reg.app_id;

        FUNC_5(&VAR_11, VAR_6);

        break;
    }
    case 139:
        FUNC_4(VAR_10->app_unreg.gatts_if);
        break;
    case 136: {
        tBTA_GATT_SRVC_ID VAR_12;
        FUNC_22(&VAR_12, &VAR_10->create_srvc.service_id);
        FUNC_7(VAR_10->create_srvc.gatts_if, &VAR_12.id.uuid,
                                VAR_12.id.inst_id, VAR_10->create_srvc.num_handle,
                                VAR_12.is_primary);
        break;
    }
   case 137:
    FUNC_18(VAR_10->create_attr_tab.gatts_attr_db,
                                         VAR_10->create_attr_tab.gatts_if,
                                         VAR_10->create_attr_tab.max_nb_attr,
                                         VAR_10->create_attr_tab.srvc_inst_id);
    break;
    case 135:
        FUNC_8(VAR_10->delete_srvc.service_handle);
        break;
    case 129:
        FUNC_13(VAR_10->start_srvc.service_handle, VAR_1);
        break;
    case 128:
        FUNC_14(VAR_10->stop_srvc.service_handle);
        break;
    case 141:
        FUNC_3(VAR_10->add_incl_srvc.service_handle, VAR_10->add_incl_srvc.included_service_handle);
        break;
    case 143: {
        tBT_UUID VAR_13;
        FUNC_23(&VAR_13, &VAR_10->add_char.char_uuid);

        FUNC_2(VAR_10->add_char.service_handle, &VAR_13,
                                    VAR_10->add_char.perm, VAR_10->add_char.property,
                                    (tGATT_ATTR_VAL *)&VAR_10->add_char.char_val,
                                    (tBTA_GATTS_ATTR_CONTROL *)&VAR_10->add_char.attr_control);
        break;
    }
    case 142: {
        tBT_UUID VAR_14;
        FUNC_23(&VAR_14, &VAR_10->add_descr.descr_uuid);
        FUNC_1(VAR_10->add_descr.service_handle, VAR_10->add_descr.perm, &VAR_14,
                                   (tBTA_GATT_ATTR_VAL *)&VAR_10->add_descr.descr_val,
                                   (tBTA_GATTS_ATTR_CONTROL *)&VAR_10->add_descr.attr_control);
        break;
    }
    case 133:
        FUNC_9(VAR_10->send_ind.conn_id, VAR_10->send_ind.attr_handle,
                                        VAR_10->send_ind.value_len, VAR_10->send_ind.value, VAR_10->send_ind.need_confirm);
        break;
    case 132: {
        esp_ble_gatts_cb_param_t VAR_15;
        esp_gatt_rsp_t *VAR_16 = VAR_10->send_rsp.rsp;

        if (VAR_16) {
            tBTA_GATTS_RSP VAR_17;
            FUNC_21(&VAR_17, VAR_16);
            FUNC_11(VAR_10->send_rsp.conn_id, VAR_10->send_rsp.trans_id,
                              VAR_10->send_rsp.status, &VAR_17);
            VAR_15.rsp.handle = VAR_17.attr_value.handle;
        } else {
            FUNC_11(VAR_10->send_rsp.conn_id, VAR_10->send_rsp.trans_id,
                              VAR_10->send_rsp.status, ((void*)0));
        }

        VAR_15.rsp.status = 0;
        FUNC_20(VAR_3, FUNC_16(VAR_10->send_rsp.conn_id), &VAR_15);
        break;
    }
    case 130:
        FUNC_15(VAR_10->set_attr_val.handle, VAR_10->set_attr_val.length,
                              VAR_10->set_attr_val.value);
    break;
    case 134: {

        tBTA_GATT_TRANSPORT VAR_18 = VAR_1;
        VAR_18 = VAR_1;


        FUNC_10(VAR_10->open.gatts_if, VAR_10->open.remote_bda,
                       VAR_10->open.is_direct, VAR_18);
        break;
    }
    case 138:






        if (VAR_10->close.conn_id != 0) {
            FUNC_6(VAR_10->close.conn_id);
        }

        break;
    case 131: {
        BD_ADDR VAR_19;
        FUNC_25(VAR_19, VAR_10->send_service_change.remote_bda, VAR_0);
        FUNC_12(VAR_10->send_service_change.gatts_if, VAR_19);
        break;
    }
    default:
        break;
    }
    FUNC_19(VAR_9);
}
