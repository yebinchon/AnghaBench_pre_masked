
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_94__ TYPE_9__ ;
typedef struct TYPE_93__ TYPE_8__ ;
typedef struct TYPE_92__ TYPE_7__ ;
typedef struct TYPE_91__ TYPE_6__ ;
typedef struct TYPE_90__ TYPE_5__ ;
typedef struct TYPE_89__ TYPE_4__ ;
typedef struct TYPE_88__ TYPE_45__ ;
typedef struct TYPE_87__ TYPE_44__ ;
typedef struct TYPE_86__ TYPE_43__ ;
typedef struct TYPE_85__ TYPE_42__ ;
typedef struct TYPE_84__ TYPE_41__ ;
typedef struct TYPE_83__ TYPE_40__ ;
typedef struct TYPE_82__ TYPE_3__ ;
typedef struct TYPE_81__ TYPE_39__ ;
typedef struct TYPE_80__ TYPE_38__ ;
typedef struct TYPE_79__ TYPE_37__ ;
typedef struct TYPE_78__ TYPE_36__ ;
typedef struct TYPE_77__ TYPE_35__ ;
typedef struct TYPE_76__ TYPE_34__ ;
typedef struct TYPE_75__ TYPE_33__ ;
typedef struct TYPE_74__ TYPE_32__ ;
typedef struct TYPE_73__ TYPE_31__ ;
typedef struct TYPE_72__ TYPE_30__ ;
typedef struct TYPE_71__ TYPE_2__ ;
typedef struct TYPE_70__ TYPE_29__ ;
typedef struct TYPE_69__ TYPE_28__ ;
typedef struct TYPE_68__ TYPE_27__ ;
typedef struct TYPE_67__ TYPE_26__ ;
typedef struct TYPE_66__ TYPE_25__ ;
typedef struct TYPE_65__ TYPE_24__ ;
typedef struct TYPE_64__ TYPE_23__ ;
typedef struct TYPE_63__ TYPE_22__ ;
typedef struct TYPE_62__ TYPE_21__ ;
typedef struct TYPE_61__ TYPE_20__ ;
typedef struct TYPE_60__ TYPE_1__ ;
typedef struct TYPE_59__ TYPE_19__ ;
typedef struct TYPE_58__ TYPE_18__ ;
typedef struct TYPE_57__ TYPE_17__ ;
typedef struct TYPE_56__ TYPE_16__ ;
typedef struct TYPE_55__ TYPE_15__ ;
typedef struct TYPE_54__ TYPE_14__ ;
typedef struct TYPE_53__ TYPE_13__ ;
typedef struct TYPE_52__ TYPE_12__ ;
typedef struct TYPE_51__ TYPE_11__ ;
typedef struct TYPE_50__ TYPE_10__ ;


struct TYPE_85__ {int status; int attr_id; int service_id; int server_if; } ;
struct TYPE_83__ {int congested; int conn_id; } ;
struct TYPE_80__ {int status; int server_if; } ;
struct TYPE_78__ {int conn_id; int status; } ;
struct TYPE_76__ {int status; int server_if; } ;
struct TYPE_74__ {int status; int server_if; } ;
struct TYPE_69__ {int timeout; int latency; int interval; } ;
struct TYPE_72__ {int remote_bda; int reason; int conn_id; int server_if; TYPE_28__ conn_params; } ;
struct TYPE_66__ {int service_id; int status; int server_if; } ;
struct TYPE_62__ {int char_uuid; int service_id; int attr_id; int status; int server_if; } ;
struct TYPE_57__ {int uuid; int svc_instance; int is_primary; int service_id; int status; int server_if; } ;
struct TYPE_52__ {int value; int data_len; int status; int handle; int conn_id; TYPE_11__* p_data; int remote_bda; int trans_id; } ;
struct TYPE_71__ {int uuid16; } ;
struct TYPE_82__ {TYPE_2__ uu; } ;
struct TYPE_89__ {int server_if; TYPE_3__ uuid; int status; } ;
struct TYPE_86__ {TYPE_42__ attr_val; TYPE_40__ congest; TYPE_38__ service_change; TYPE_36__ close; TYPE_34__ cancel_open; TYPE_32__ open; TYPE_30__ conn; TYPE_25__ srvc_oper; TYPE_21__ add_result; TYPE_17__ create; TYPE_12__ req_data; TYPE_4__ reg_oper; } ;
typedef TYPE_43__ tBTA_GATTS ;
typedef int esp_gatt_if_t ;
struct TYPE_84__ {int status; int attr_handle; int srvc_handle; } ;
struct TYPE_81__ {int congested; void* conn_id; } ;
struct TYPE_79__ {int status; } ;
struct TYPE_77__ {void* conn_id; int status; } ;
struct TYPE_75__ {int status; } ;
struct TYPE_73__ {int status; } ;
struct TYPE_70__ {int remote_bda; int reason; void* conn_id; } ;
struct TYPE_67__ {int timeout; int latency; int interval; } ;
struct TYPE_68__ {TYPE_26__ conn_params; int remote_bda; void* conn_id; } ;
struct TYPE_65__ {int service_handle; int status; } ;
struct TYPE_64__ {int service_handle; int status; } ;
struct TYPE_63__ {int service_handle; int status; } ;
struct TYPE_61__ {int descr_uuid; int service_handle; int attr_handle; int status; } ;
struct TYPE_59__ {int char_uuid; int service_handle; int attr_handle; int status; } ;
struct TYPE_58__ {int service_handle; int attr_handle; int status; } ;
struct TYPE_54__ {int uuid; int inst_id; } ;
struct TYPE_55__ {TYPE_14__ id; int is_primary; } ;
struct TYPE_56__ {TYPE_15__ service_id; int service_handle; int status; } ;
struct TYPE_53__ {int len; int value; int handle; int status; void* conn_id; } ;
struct TYPE_50__ {int mtu; void* conn_id; } ;
struct TYPE_94__ {int exec_write_flag; int bda; int trans_id; void* conn_id; } ;
struct TYPE_92__ {int value; int len; int is_prep; int need_rsp; int offset; int handle; int bda; int trans_id; void* conn_id; } ;
struct TYPE_90__ {int need_rsp; int is_long; int offset; int handle; int bda; int trans_id; void* conn_id; } ;
struct TYPE_60__ {int app_id; int status; } ;
struct TYPE_87__ {TYPE_41__ set_attr_val; TYPE_39__ congest; TYPE_37__ service_change; TYPE_35__ close; TYPE_33__ cancel_open; TYPE_31__ open; TYPE_29__ disconnect; TYPE_27__ connect; TYPE_24__ stop; TYPE_23__ start; TYPE_22__ del; TYPE_20__ add_char_descr; TYPE_19__ add_char; TYPE_18__ add_incl_srvc; TYPE_16__ create; TYPE_13__ conf; TYPE_10__ mtu; TYPE_9__ exec_write; TYPE_7__ write; TYPE_5__ read; TYPE_1__ reg; } ;
typedef TYPE_44__ esp_ble_gatts_cb_param_t ;
struct TYPE_88__ {int act; scalar_t__ arg; } ;
typedef TYPE_45__ btc_msg_t ;
struct TYPE_93__ {int value; int len; int is_prep; int need_rsp; int offset; int handle; } ;
struct TYPE_91__ {int need_rsp; int is_long; int offset; int handle; } ;
struct TYPE_51__ {int mtu; int exec_write; TYPE_8__ write_req; TYPE_6__ read_req; } ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 int const VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_45__*,TYPE_43__*) ;
 int FUNC_4 (int const,int ,TYPE_44__*) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(btc_msg_t *VAR_21)
{
    esp_ble_gatts_cb_param_t VAR_22;
    tBTA_GATTS *VAR_23 = (tBTA_GATTS *)VAR_21->arg;
    esp_gatt_if_t VAR_24;

    switch (VAR_21->act) {
    case 133: {
        VAR_24 = VAR_23->reg_oper.server_if;
        VAR_22.reg.status = VAR_23->reg_oper.status;
        VAR_22.reg.app_id = VAR_23->reg_oper.uuid.uu.uuid16;

        FUNC_4(VAR_13, VAR_24, &VAR_22);
        break;
    }
    case 140: {
        VAR_24 = VAR_23->reg_oper.server_if;
        FUNC_4(VAR_18, VAR_24, ((void*)0));
        break;
    }
    case 134: {
        VAR_24 = FUNC_1(VAR_23->req_data.conn_id);
        VAR_22.read.conn_id = FUNC_0(VAR_23->req_data.conn_id);
        VAR_22.read.trans_id = VAR_23->req_data.trans_id;
        FUNC_5(VAR_22.read.bda, VAR_23->req_data.remote_bda, VAR_0);
        VAR_22.read.handle = VAR_23->req_data.p_data->read_req.handle;
        VAR_22.read.offset = VAR_23->req_data.p_data->read_req.offset;
        VAR_22.read.is_long = VAR_23->req_data.p_data->read_req.is_long;

        VAR_22.read.need_rsp = VAR_23->req_data.p_data->read_req.need_rsp;
        FUNC_4(VAR_12, VAR_24, &VAR_22);
        break;
    }
    case 128: {
        VAR_24 = FUNC_1(VAR_23->req_data.conn_id);
        VAR_22.write.conn_id = FUNC_0(VAR_23->req_data.conn_id);
        VAR_22.write.trans_id = VAR_23->req_data.trans_id;
        FUNC_5(VAR_22.write.bda, VAR_23->req_data.remote_bda, VAR_0);
        if (VAR_23->req_data.p_data == ((void*)0)) {
            break;
        }
        VAR_22.write.handle = VAR_23->req_data.p_data->write_req.handle;
        VAR_22.write.offset = VAR_23->req_data.p_data->write_req.offset;
        VAR_22.write.need_rsp = VAR_23->req_data.p_data->write_req.need_rsp;
        VAR_22.write.is_prep = VAR_23->req_data.p_data->write_req.is_prep;
        VAR_22.write.len = VAR_23->req_data.p_data->write_req.len;
        VAR_22.write.value = VAR_23->req_data.p_data->write_req.value;

        FUNC_4(VAR_19, VAR_24, &VAR_22);

        break;
    }
    case 138: {
        VAR_24 = FUNC_1(VAR_23->req_data.conn_id);
        VAR_22.exec_write.conn_id = FUNC_0(VAR_23->req_data.conn_id);
        VAR_22.exec_write.trans_id = VAR_23->req_data.trans_id;
        FUNC_5(VAR_22.exec_write.bda, VAR_23->req_data.remote_bda, VAR_0);
        if (VAR_23->req_data.p_data == ((void*)0)) {
            break;
        }
        VAR_22.exec_write.exec_write_flag = VAR_23->req_data.p_data->exec_write;

        FUNC_4(VAR_10, VAR_24, &VAR_22);
        break;
    }
    case 136:
        VAR_24 = FUNC_1(VAR_23->req_data.conn_id);
        VAR_22.mtu.conn_id = FUNC_0(VAR_23->req_data.conn_id);
        VAR_22.mtu.mtu = VAR_23->req_data.p_data->mtu;

        FUNC_4(VAR_11, VAR_24, &VAR_22);
        break;
    case 145:
        VAR_24 = FUNC_1(VAR_23->req_data.conn_id);
        VAR_22.conf.conn_id = FUNC_0(VAR_23->req_data.conn_id);
        VAR_22.conf.status = VAR_23->req_data.status;
        VAR_22.conf.handle = VAR_23->req_data.handle;

        if (VAR_23->req_data.status != VAR_20 && VAR_23->req_data.value){
            VAR_22.conf.len = VAR_23->req_data.data_len;
            VAR_22.conf.value = VAR_23->req_data.value;
        }else{
            VAR_22.conf.len = 0;
        }
        FUNC_4(VAR_4, VAR_24, &VAR_22);
        break;
    case 142:
        VAR_24 = VAR_23->create.server_if;
        VAR_22.create.status = VAR_23->create.status;
        VAR_22.create.service_handle = VAR_23->create.service_id;
        VAR_22.create.service_id.is_primary = VAR_23->create.is_primary;
        VAR_22.create.service_id.id.inst_id = VAR_23->create.svc_instance;
        FUNC_2(&VAR_22.create.service_id.id.uuid, &VAR_23->create.uuid);

        FUNC_4(VAR_7, VAR_24, &VAR_22);
        break;
    case 148:
        VAR_24 = VAR_23->add_result.server_if;
        VAR_22.add_incl_srvc.status = VAR_23->add_result.status;
        VAR_22.add_incl_srvc.attr_handle = VAR_23->add_result.attr_id;
        VAR_22.add_incl_srvc.service_handle = VAR_23->add_result.service_id;

        FUNC_4(VAR_3, VAR_24, &VAR_22);
        break;
    case 149:
        VAR_24 = VAR_23->add_result.server_if;
        VAR_22.add_char.status = VAR_23->add_result.status;
        VAR_22.add_char.attr_handle = VAR_23->add_result.attr_id;
        VAR_22.add_char.service_handle = VAR_23->add_result.service_id;
        FUNC_2(&VAR_22.add_char.char_uuid, &VAR_23->add_result.char_uuid);

        FUNC_4(VAR_2, VAR_24, &VAR_22);
        break;
    case 150:
        VAR_24 = VAR_23->add_result.server_if;
        VAR_22.add_char_descr.status = VAR_23->add_result.status;
        VAR_22.add_char_descr.attr_handle = VAR_23->add_result.attr_id;
        VAR_22.add_char_descr.service_handle = VAR_23->add_result.service_id;
        FUNC_2(&VAR_22.add_char_descr.descr_uuid, &VAR_23->add_result.char_uuid);

        FUNC_4(VAR_1, VAR_24, &VAR_22);
        break;
    case 141:
        VAR_24 = VAR_23->srvc_oper.server_if;
        VAR_22.del.status = VAR_23->srvc_oper.status;
        VAR_22.del.service_handle = VAR_23->srvc_oper.service_id;

        FUNC_4(VAR_8, VAR_24, &VAR_22);
        break;
    case 130:
        VAR_24 = VAR_23->srvc_oper.server_if;
        VAR_22.start.status = VAR_23->srvc_oper.status;
        VAR_22.start.service_handle = VAR_23->srvc_oper.service_id;

        FUNC_4(VAR_16, VAR_24, &VAR_22);
        break;
    case 129:
        VAR_24 = VAR_23->srvc_oper.server_if;
        VAR_22.stop.status = VAR_23->srvc_oper.status;
        VAR_22.stop.service_handle = VAR_23->srvc_oper.service_id;

        FUNC_4(VAR_17, VAR_24, &VAR_22);
        break;
    case 143:
        VAR_24 = VAR_23->conn.server_if;
        VAR_22.connect.conn_id = FUNC_0(VAR_23->conn.conn_id);
        FUNC_5(VAR_22.connect.remote_bda, VAR_23->conn.remote_bda, VAR_0);
        VAR_22.connect.conn_params.interval = VAR_23->conn.conn_params.interval;
        VAR_22.connect.conn_params.latency = VAR_23->conn.conn_params.latency;
        VAR_22.connect.conn_params.timeout = VAR_23->conn.conn_params.timeout;
        FUNC_4(VAR_6, VAR_24, &VAR_22);
        break;
    case 139:
        VAR_24 = VAR_23->conn.server_if;
        VAR_22.disconnect.conn_id = FUNC_0(VAR_23->conn.conn_id);
        VAR_22.disconnect.reason = VAR_23->conn.reason;
        FUNC_5(VAR_22.disconnect.remote_bda, VAR_23->conn.remote_bda, VAR_0);

        FUNC_4(VAR_9, VAR_24, &VAR_22);
        break;
    case 135:
        VAR_24 = VAR_23->open.server_if;
        VAR_22.open.status = VAR_23->open.status;

        FUNC_4(135, VAR_24, &VAR_22);
        break;
    case 147:
        VAR_24 = VAR_23->cancel_open.server_if;
        VAR_22.cancel_open.status = VAR_23->cancel_open.status;

        FUNC_4(147, VAR_24, &VAR_22);
        break;

    case 146:
        VAR_24 = FUNC_1(VAR_23->close.conn_id);
        VAR_22.close.status = VAR_23->close.status;
        VAR_22.close.conn_id = FUNC_0(VAR_23->close.conn_id);

        FUNC_4(146, VAR_24, &VAR_22);
        break;
    case 132:
        VAR_24 = VAR_23->service_change.server_if;
        VAR_22.service_change.status = VAR_23->service_change.status;
        FUNC_4(VAR_14, VAR_24, &VAR_22);
        break;
    case 137:

        break;
    case 144:
        VAR_24 = FUNC_1(VAR_23->congest.conn_id);
        VAR_22.congest.conn_id = FUNC_0(VAR_23->congest.conn_id);
        VAR_22.congest.congested = VAR_23->congest.congested;
        FUNC_4(VAR_5, VAR_24, &VAR_22);
        break;
    case 131:
        VAR_24 = VAR_23->attr_val.server_if;
        VAR_22.set_attr_val.srvc_handle = VAR_23->attr_val.service_id;
        VAR_22.set_attr_val.attr_handle = VAR_23->attr_val.attr_id;
        VAR_22.set_attr_val.status = VAR_23->attr_val.status;
        FUNC_4(VAR_15, VAR_24, &VAR_22);
        break;
    default:

        break;
    }

    FUNC_3(VAR_21, VAR_23);
}
