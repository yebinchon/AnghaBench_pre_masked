
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_18__ ;


typedef int tBTM_STATUS ;
struct TYPE_27__ {int auth_mode; int smp_over_br; int reason; } ;
struct TYPE_25__ {int p_key_value; int key_type; } ;
struct TYPE_21__ {int oob_data; int auth_req; int resp_keys; int init_keys; int max_key_size; int io_cap; } ;
struct TYPE_28__ {TYPE_7__ complt; TYPE_5__ key; int key_notif; TYPE_1__ io_req; } ;
typedef TYPE_8__ tBTM_LE_EVT_DATA ;
typedef int tBTM_LE_EVT ;
struct TYPE_26__ {int auth_mode; int success; int fail_reason; int * bd_name; int addr_type; int dev_type; int bd_addr; } ;
struct TYPE_24__ {int p_key_value; int key_type; int bd_addr; } ;
struct TYPE_23__ {int passkey; int * bd_name; int bd_addr; } ;
struct TYPE_22__ {int * bd_name; int bd_addr; } ;
struct TYPE_29__ {TYPE_6__ auth_cmpl; TYPE_4__ ble_key; TYPE_3__ key_notif; TYPE_2__ ble_req; } ;
typedef TYPE_9__ tBTA_DM_SEC ;
typedef int UINT8 ;
struct TYPE_20__ {int (* p_sec_cback ) (int ,TYPE_9__*) ;} ;
typedef int BD_NAME ;
typedef int BD_ADDR ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int,char*,size_t) ;
 size_t VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int *,int *) ;
 int VAR_9 ;
 char* FUNC_4 (int ) ;
 int VAR_10 ;
 int FUNC_5 (int ,int ) ;
 TYPE_18__ VAR_11 ;
 int FUNC_6 (int ,int *,int *,int *,int *,int *,int *) ;
 char* FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_9__*,int ,int) ;
 int FUNC_10 (int ,TYPE_9__*) ;
 int FUNC_11 (int ,TYPE_9__*) ;
 int FUNC_12 (int ,TYPE_9__*) ;
 int FUNC_13 (int ,TYPE_9__*) ;
 int FUNC_14 (int ,TYPE_9__*) ;
 int FUNC_15 (int ,TYPE_9__*) ;
 int FUNC_16 (int ,TYPE_9__*) ;

__attribute__((used)) static UINT8 FUNC_17 (tBTM_LE_EVT VAR_12, BD_ADDR VAR_13, tBTM_LE_EVT_DATA *VAR_14)
{
    tBTM_STATUS VAR_15 = VAR_9;
    tBTA_DM_SEC VAR_16;
    char *VAR_17 = ((void*)0);

    if (!VAR_11.p_sec_cback) {
        return VAR_8;
    }

    FUNC_9(&VAR_16, 0, sizeof(tBTA_DM_SEC));
    switch (VAR_12) {
    case 134: {

        FUNC_6(VAR_13,
                             &VAR_14->io_req.io_cap,
                             &VAR_14->io_req.oob_data,
                             &VAR_14->io_req.auth_req,
                             &VAR_14->io_req.max_key_size,
                             &VAR_14->io_req.init_keys,
                             &VAR_14->io_req.resp_keys);


        VAR_15 = VAR_9;

        FUNC_0("io mitm: %d oob_data:%d\n", VAR_14->io_req.auth_req, VAR_14->io_req.oob_data);

        break;
    }

    case 128:
        FUNC_5(VAR_16.ble_req.bd_addr, VAR_13);
        VAR_17 = FUNC_4(VAR_13);
        if (VAR_17 != ((void*)0)) {
            FUNC_1((char *)VAR_16.ble_req.bd_name,
                          sizeof(BD_NAME), VAR_17, (VAR_0));
        } else {
            VAR_16.ble_req.bd_name[0] = 0;
        }
        VAR_16.ble_req.bd_name[VAR_0] = 0;
        VAR_11.p_sec_cback(VAR_7, &VAR_16);
        break;

    case 132:
        FUNC_5(VAR_16.key_notif.bd_addr, VAR_13);
        VAR_17 = FUNC_4(VAR_13);
        if (VAR_17 != ((void*)0)) {
            FUNC_1((char *)VAR_16.key_notif.bd_name,
                          sizeof(BD_NAME), VAR_17, (VAR_0));
        } else {
            VAR_16.key_notif.bd_name[0] = 0;
        }
        VAR_16.ble_req.bd_name[VAR_0] = 0;
        VAR_16.key_notif.passkey = VAR_14->key_notif;
        VAR_11.p_sec_cback(VAR_5, &VAR_16);
        break;

    case 131:
        FUNC_5(VAR_16.ble_req.bd_addr, VAR_13);
        VAR_11.p_sec_cback(VAR_6, &VAR_16);
        break;

    case 129:
        FUNC_5(VAR_16.ble_req.bd_addr, VAR_13);
        VAR_11.p_sec_cback(VAR_4, &VAR_16);
        break;

    case 130:
        FUNC_5(VAR_16.key_notif.bd_addr, VAR_13);
        FUNC_1((char *)VAR_16.key_notif.bd_name, sizeof(BD_NAME), FUNC_7(), (VAR_0));
        VAR_16.ble_req.bd_name[VAR_0] = 0;
        VAR_16.key_notif.passkey = VAR_14->key_notif;
        VAR_11.p_sec_cback(VAR_3, &VAR_16);
        break;

    case 133:
        FUNC_5(VAR_16.ble_key.bd_addr, VAR_13);
        VAR_16.ble_key.key_type = VAR_14->key.key_type;
        VAR_16.ble_key.p_key_value = VAR_14->key.p_key_value;
        VAR_11.p_sec_cback(VAR_2, &VAR_16);
        break;

    case 135:
        FUNC_5(VAR_16.auth_cmpl.bd_addr, VAR_13);

        FUNC_3(VAR_13, &VAR_16.auth_cmpl.dev_type, &VAR_16.auth_cmpl.addr_type);

        VAR_17 = FUNC_4(VAR_13);
        if (VAR_17 != ((void*)0)) {
            FUNC_1((char *)VAR_16.auth_cmpl.bd_name,
                          sizeof(BD_NAME), VAR_17, (VAR_0));
        } else {
            VAR_16.auth_cmpl.bd_name[0] = 0;
        }
        if (VAR_14->complt.reason != 0) {
            VAR_16.auth_cmpl.fail_reason = FUNC_2(((UINT8)VAR_14->complt.reason));

            FUNC_8 (VAR_13);
        } else {
            VAR_16.auth_cmpl.success = VAR_10;
            if (!VAR_14->complt.smp_over_br) {

            }
        }
        VAR_16.auth_cmpl.auth_mode = VAR_14->complt.auth_mode;
        if (VAR_11.p_sec_cback) {

            VAR_11.p_sec_cback(VAR_1, &VAR_16);
        }

        break;

    default:
        VAR_15 = VAR_8;
        break;
    }
    return VAR_15;
}
