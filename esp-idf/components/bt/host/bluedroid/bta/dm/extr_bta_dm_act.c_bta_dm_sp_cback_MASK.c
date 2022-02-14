
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_SP_KEYPRESS ;
struct TYPE_25__ {int upgrade; int bd_addr; } ;
struct TYPE_24__ {int bd_addr; int * bd_name; int dev_class; } ;
struct TYPE_22__ {int status; int r; int c; } ;
struct TYPE_18__ {int * bd_name; int dev_class; int bd_addr; int passkey; } ;
struct TYPE_29__ {int * bd_name; int dev_class; int bd_addr; int rmt_io_caps; int loc_io_caps; int rmt_auth_req; int loc_auth_req; int just_works; } ;
struct TYPE_27__ {int auth_req; int oob_data; int io_cap; int bd_addr; } ;
struct TYPE_26__ {int oob_data; int auth_req; int is_orig; int io_cap; int bd_addr; } ;
struct TYPE_19__ {TYPE_4__ upgrade; int key_press; TYPE_3__ rmt_oob; TYPE_1__ loc_oob; TYPE_10__ key_notif; TYPE_8__ cfm_req; TYPE_6__ io_rsp; TYPE_5__ io_req; } ;
typedef TYPE_11__ tBTM_SP_EVT_DATA ;
typedef int tBTM_SP_EVT ;
typedef void* tBTA_DM_SEC_EVT ;
struct TYPE_23__ {int * bd_name; int dev_class; int bd_addr; } ;
struct TYPE_30__ {int * bd_name; int dev_class; int bd_addr; int passkey; } ;
struct TYPE_28__ {int rmt_io_caps; int loc_io_caps; int rmt_auth_req; int loc_auth_req; int just_works; } ;
struct TYPE_20__ {int key_press; TYPE_2__ rmt_oob; TYPE_9__ key_notif; TYPE_7__ cfm_req; } ;
typedef TYPE_12__ tBTA_DM_SEC ;
typedef int UINT8 ;
struct TYPE_21__ {void* pin_evt; int (* p_sec_cback ) (void*,TYPE_12__*) ;int pin_dev_class; int pin_bd_addr; int num_val; int just_works; } ;
typedef int BOOLEAN ;
typedef int BD_NAME ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ) ;
 TYPE_17__ VAR_10 ;
 int FUNC_6 (int ,int *,int *,int *,int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int VAR_11 ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (void*,TYPE_12__*) ;
 int FUNC_13 (void*,TYPE_12__*) ;
 int FUNC_14 (void*,TYPE_12__*) ;

__attribute__((used)) static UINT8 FUNC_15 (tBTM_SP_EVT VAR_12, tBTM_SP_EVT_DATA *VAR_13)
{
    tBTM_STATUS VAR_14 = VAR_6;
    tBTA_DM_SEC VAR_15;
    tBTA_DM_SEC_EVT VAR_16 = VAR_3;

    FUNC_0("bta_dm_sp_cback: %d", VAR_12);
    if (!VAR_10.p_sec_cback) {
        return VAR_7;
    }


    switch (VAR_12) {
    case 135:


        FUNC_6(VAR_13->io_req.bd_addr, &VAR_13->io_req.io_cap,
                         &VAR_13->io_req.oob_data, &VAR_13->io_req.auth_req, VAR_13->io_req.is_orig);


        VAR_14 = VAR_8;


        FUNC_0("io mitm: %d oob_data:%d", VAR_13->io_req.auth_req, VAR_13->io_req.oob_data);
        break;
    case 134:

        FUNC_7(VAR_13->io_rsp.bd_addr, VAR_13->io_rsp.io_cap,
                         VAR_13->io_rsp.oob_data, VAR_13->io_rsp.auth_req );

        break;

    case 137:
        VAR_16 = VAR_1;
        VAR_10.just_works = VAR_15.cfm_req.just_works = VAR_13->cfm_req.just_works;
        VAR_15.cfm_req.loc_auth_req = VAR_13->cfm_req.loc_auth_req;
        VAR_15.cfm_req.rmt_auth_req = VAR_13->cfm_req.rmt_auth_req;
        VAR_15.cfm_req.loc_io_caps = VAR_13->cfm_req.loc_io_caps;
        VAR_15.cfm_req.rmt_io_caps = VAR_13->cfm_req.rmt_io_caps;





    case 131:
    case 132:

        if (137 == VAR_12) {


            if (VAR_13->cfm_req.bd_name[0] == 0) {
                VAR_10.pin_evt = VAR_16;
                FUNC_5(VAR_10.pin_bd_addr, VAR_13->cfm_req.bd_addr);
                FUNC_3(VAR_10.pin_dev_class, VAR_13->cfm_req.dev_class);
                if ((FUNC_4(VAR_13->cfm_req.bd_addr, VAR_11,
                                              VAR_9)) == VAR_6) {
                    return VAR_6;
                }
                FUNC_1(" bta_dm_sp_cback() -> Failed to start Remote Name Request  ");
            } else {


                FUNC_5(VAR_15.key_notif.bd_addr, VAR_13->cfm_req.bd_addr);
                FUNC_3(VAR_15.key_notif.dev_class, VAR_13->cfm_req.dev_class);
                FUNC_2((char *)VAR_15.key_notif.bd_name, sizeof(BD_NAME),
                              (char *)VAR_13->cfm_req.bd_name, (VAR_0 - 1));
                VAR_15.key_notif.bd_name[VAR_0 - 1] = 0;
            }
        }

        VAR_10.num_val = VAR_15.key_notif.passkey = VAR_13->key_notif.passkey;
        if (132 == VAR_12) {


            if (VAR_13->key_notif.bd_name[0] == 0) {
                VAR_10.pin_evt = VAR_16;
                FUNC_5(VAR_10.pin_bd_addr, VAR_13->key_notif.bd_addr);
                FUNC_3(VAR_10.pin_dev_class, VAR_13->key_notif.dev_class);
                if ((FUNC_4(VAR_13->key_notif.bd_addr, VAR_11,
                                              VAR_9)) == VAR_6) {
                    return VAR_6;
                }
                FUNC_1(" bta_dm_sp_cback() -> Failed to start Remote Name Request  ");
            } else {
                FUNC_5(VAR_15.key_notif.bd_addr, VAR_13->key_notif.bd_addr);
                FUNC_3(VAR_15.key_notif.dev_class, VAR_13->key_notif.dev_class);
                FUNC_2((char *)VAR_15.key_notif.bd_name, sizeof(BD_NAME),
                              (char *)VAR_13->key_notif.bd_name, (VAR_0 - 1));
                VAR_15.key_notif.bd_name[VAR_0 - 1] = 0;
            }
        }

        if (131 == VAR_12) {
            VAR_16 = VAR_4;


            if (VAR_13->key_notif.bd_name[0] == 0) {
                VAR_10.pin_evt = VAR_16;
                FUNC_5(VAR_10.pin_bd_addr, VAR_13->key_notif.bd_addr);
                FUNC_3(VAR_10.pin_dev_class, VAR_13->key_notif.dev_class);
                if ((FUNC_4(VAR_13->key_notif.bd_addr, VAR_11,
                                              VAR_9)) == VAR_6) {
                    return VAR_6;
                }
                FUNC_1(" bta_dm_sp_cback() -> Failed to start Remote Name Request  ");
            } else {
                FUNC_5(VAR_15.key_notif.bd_addr, VAR_13->key_notif.bd_addr);
                FUNC_3(VAR_15.key_notif.dev_class, VAR_13->key_notif.dev_class);
                FUNC_2((char *)VAR_15.key_notif.bd_name, sizeof(BD_NAME),
                              (char *)VAR_13->key_notif.bd_name, (VAR_0 - 1));
                VAR_15.key_notif.bd_name[VAR_0 - 1] = 0;
            }
        }
        VAR_10.p_sec_cback(VAR_16, &VAR_15);

        break;


    case 130:
        FUNC_9((BOOLEAN)(VAR_13->loc_oob.status == VAR_8),
                          VAR_13->loc_oob.c, VAR_13->loc_oob.r);
        break;

    case 129:

        if (VAR_13->rmt_oob.bd_name[0] == 0) {
            VAR_10.pin_evt = VAR_5;
            FUNC_5(VAR_10.pin_bd_addr, VAR_13->rmt_oob.bd_addr);
            FUNC_3(VAR_10.pin_dev_class, VAR_13->rmt_oob.dev_class);
            if ((FUNC_4(VAR_13->rmt_oob.bd_addr, VAR_11,
                                          VAR_9)) == VAR_6) {
                return VAR_6;
            }
            FUNC_1(" bta_dm_sp_cback() -> Failed to start Remote Name Request  ");
        }

        FUNC_5(VAR_15.rmt_oob.bd_addr, VAR_13->rmt_oob.bd_addr);
        FUNC_3(VAR_15.rmt_oob.dev_class, VAR_13->rmt_oob.dev_class);
        FUNC_2((char *)VAR_15.rmt_oob.bd_name, sizeof(BD_NAME), (char *)VAR_13->rmt_oob.bd_name, (VAR_0 - 1));
        VAR_15.rmt_oob.bd_name[VAR_0 - 1] = 0;

        VAR_10.p_sec_cback(VAR_5, &VAR_15);

        FUNC_10(VAR_13->rmt_oob.bd_addr);
        break;

    case 136:

        break;

    case 133:
        FUNC_11(&VAR_15.key_press, &VAR_13->key_press, sizeof(tBTM_SP_KEYPRESS));
        VAR_10.p_sec_cback(VAR_2, &VAR_15);
        break;

    case 128:
        FUNC_8(VAR_13->upgrade.bd_addr, &VAR_13->upgrade.upgrade );
        break;

    default:
        VAR_14 = VAR_7;
        break;
    }
    FUNC_0("dm status: %d", VAR_14);
    return VAR_14;
}
