
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_17__ {int timer_entry; int remote_bd_addr; int link_state; int ble_addr_type; } ;
typedef TYPE_4__ tL2C_LCB ;
struct TYPE_16__ {scalar_t__ min_conn_int; scalar_t__ max_conn_int; scalar_t__ slave_latency; scalar_t__ supervision_tout; } ;
struct TYPE_15__ {int current_addr; int current_addr_type; scalar_t__ current_addr_valid; } ;
struct TYPE_18__ {TYPE_3__ conn_params; TYPE_2__ ble; } ;
typedef TYPE_5__ tBTM_SEC_DEV_REC ;
struct TYPE_14__ {int own_addr_type; } ;
struct TYPE_19__ {scalar_t__ scan_int; scalar_t__ scan_win; TYPE_1__ addr_mgnt_cb; } ;
typedef TYPE_6__ tBTM_BLE_CB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_20__ {int ble_connecting_bda; int is_ble_connecting; } ;
struct TYPE_13__ {TYPE_6__ ble_ctr_cb; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_12__ VAR_17 ;
 TYPE_5__* FUNC_4 (int ) ;
 TYPE_5__* FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ,int ,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_7 (int *,int ,int ) ;
 TYPE_9__ VAR_18 ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,int ,int) ;

BOOLEAN FUNC_10 (tL2C_LCB *VAR_19)
{
    tBTM_SEC_DEV_REC *VAR_20 = FUNC_5 (VAR_19->remote_bd_addr);
    tBTM_BLE_CB *VAR_21 = &VAR_17.ble_ctr_cb;
    UINT16 VAR_22;
    UINT16 VAR_23;
    BD_ADDR VAR_24;
    UINT8 VAR_25 = VAR_1;
    UINT8 VAR_26 = VAR_1;


    if (VAR_20 == ((void*)0)) {
        FUNC_1 ("unknown device, can not initate connection");
        return (VAR_13);
    }

    VAR_22 = (VAR_21->scan_int == VAR_10) ? VAR_8 : VAR_21->scan_int;
    VAR_23 = (VAR_21->scan_win == VAR_10) ? VAR_9 : VAR_21->scan_win;

    VAR_25 = VAR_19->ble_addr_type;
    FUNC_9(VAR_24, VAR_19->remote_bd_addr, VAR_0);
    if (!FUNC_3(VAR_11)) {
        FUNC_8 (VAR_19);
        FUNC_0("initate direct connection fail, topology limitation");
        return VAR_13;
    }

    if (!FUNC_6 (VAR_22,
                                        VAR_23,
                                        VAR_13,
                                        VAR_25,
                                        VAR_24,
                                        VAR_26,
                                        (UINT16) ((VAR_20->conn_params.min_conn_int != VAR_5) ?
                                                VAR_20->conn_params.min_conn_int : VAR_4),
                                        (UINT16) ((VAR_20->conn_params.max_conn_int != VAR_5) ?
                                                VAR_20->conn_params.max_conn_int : VAR_3),
                                        (UINT16) ((VAR_20->conn_params.slave_latency != VAR_5) ?
                                                VAR_20->conn_params.slave_latency : VAR_6),
                                        (UINT16) ((VAR_20->conn_params.supervision_tout != VAR_5) ?
                                                VAR_20->conn_params.supervision_tout : VAR_7),
                                        0,
                                        0)) {
        FUNC_8 (VAR_19);
        FUNC_0("initate direct connection fail, no resources");
        return (VAR_13);
    } else {
        VAR_19->link_state = VAR_15;
        VAR_18.is_ble_connecting = VAR_16;
        FUNC_9 (VAR_18.ble_connecting_bda, VAR_19->remote_bd_addr, VAR_0);
        FUNC_7 (&VAR_19->timer_entry, VAR_12, VAR_14);
        FUNC_2 (VAR_2);

        return (VAR_16);
    }
}
