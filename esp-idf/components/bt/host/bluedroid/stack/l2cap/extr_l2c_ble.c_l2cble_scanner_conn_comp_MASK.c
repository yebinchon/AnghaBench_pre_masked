
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ link_state; scalar_t__ waiting_update_conn_min_interval; scalar_t__ waiting_update_conn_max_interval; scalar_t__ current_used_conn_interval; scalar_t__ waiting_update_conn_timeout; scalar_t__ current_used_conn_timeout; scalar_t__ waiting_update_conn_latency; scalar_t__ current_used_conn_latency; int updating_param_flag; int* peer_chnl_mask; int link_role; int conn_update_mask; int transport; scalar_t__ handle; int timer_entry; } ;
typedef TYPE_3__ tL2C_LCB ;
struct TYPE_11__ {scalar_t__ min_conn_int; scalar_t__ max_conn_int; scalar_t__ slave_latency; scalar_t__ supervision_tout; } ;
struct TYPE_13__ {int sec_bd_name; TYPE_2__ conn_params; } ;
typedef TYPE_4__ tBTM_SEC_DEV_REC ;
typedef int tBLE_ADDR_TYPE ;
typedef scalar_t__ UINT16 ;
struct TYPE_14__ {TYPE_1__* fixed_reg; int is_ble_connecting; } ;
struct TYPE_10__ {int fixed_chnl_opts; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (char*,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ,int *,int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 TYPE_4__* FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_9 (int *) ;
 TYPE_8__ VAR_20 ;
 TYPE_3__* FUNC_10 (int ,int ,int ) ;
 TYPE_3__* FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_3__*,size_t,int *) ;

void FUNC_13 (UINT16 VAR_21, BD_ADDR VAR_22, tBLE_ADDR_TYPE VAR_23,
                               UINT16 VAR_24, UINT16 VAR_25, UINT16 VAR_26)
{
    tL2C_LCB *VAR_27;
    tBTM_SEC_DEV_REC *VAR_28 = FUNC_6 (VAR_22);

    FUNC_0 ("l2cble_scanner_conn_comp: HANDLE=%d addr_type=%d conn_interval=%d slave_latency=%d supervision_tout=%d",
                       VAR_21, VAR_23, VAR_24, VAR_25, VAR_26);

    VAR_20.is_ble_connecting = VAR_9;


    VAR_27 = FUNC_11 (VAR_22, VAR_8);


    if (!VAR_27) {
        VAR_27 = FUNC_10 (VAR_22, VAR_9, VAR_8);
        if (!VAR_27) {

            FUNC_7 (VAR_21, VAR_10);
            FUNC_1 ("l2cble_scanner_conn_comp - failed to allocate LCB");

            return;
        } else {
            if (!FUNC_12 (VAR_27, VAR_12, &VAR_20.fixed_reg[VAR_12 - VAR_13].fixed_chnl_opts)) {

                FUNC_7 (VAR_21, VAR_10);
                FUNC_2 ("l2cble_scanner_conn_comp - LCB but no CCB");

                return ;
            }
        }
    } else if (VAR_27->link_state != VAR_18) {
        FUNC_1 ("L2CAP got BLE scanner conn_comp in bad state: %d", VAR_27->link_state);
        return;
    }
    FUNC_9(&VAR_27->timer_entry);


    VAR_27->handle = VAR_21;


    VAR_27->link_role = VAR_11;
    VAR_27->transport = VAR_8;


    VAR_27->waiting_update_conn_min_interval = VAR_27->waiting_update_conn_max_interval = VAR_27->current_used_conn_interval = VAR_24;
    VAR_27->waiting_update_conn_timeout = VAR_27->current_used_conn_timeout = VAR_26;
    VAR_27->waiting_update_conn_latency = VAR_27->current_used_conn_latency = VAR_25;
    VAR_27->conn_update_mask = VAR_17;
    VAR_27->updating_param_flag = 0;


    if ( (VAR_28->conn_params.min_conn_int >= VAR_2 ) &&
            (VAR_28->conn_params.min_conn_int <= VAR_1 ) &&
            (VAR_28->conn_params.max_conn_int >= VAR_2 ) &&
            (VAR_28->conn_params.max_conn_int <= VAR_1 ) &&
            (VAR_28->conn_params.slave_latency <= VAR_3 ) &&
            (VAR_28->conn_params.supervision_tout >= VAR_6) &&
            (VAR_28->conn_params.supervision_tout <= VAR_5) &&
            ((VAR_24 < VAR_28->conn_params.min_conn_int &&
              VAR_28->conn_params.min_conn_int != VAR_4) ||
             (VAR_24 > VAR_28->conn_params.max_conn_int) ||
             (VAR_25 > VAR_28->conn_params.slave_latency) ||
             (VAR_26 > VAR_28->conn_params.supervision_tout))) {
        FUNC_2 ("upd_ll_conn_params: HANDLE=%d min_conn_int=%d max_conn_int=%d slave_latency=%d supervision_tout=%d",
                           VAR_21, VAR_28->conn_params.min_conn_int, VAR_28->conn_params.max_conn_int,
                           VAR_28->conn_params.slave_latency, VAR_28->conn_params.supervision_tout);

        VAR_27->waiting_update_conn_min_interval = VAR_28->conn_params.min_conn_int;
        VAR_27->waiting_update_conn_max_interval = VAR_28->conn_params.max_conn_int;
        VAR_27->waiting_update_conn_timeout = VAR_28->conn_params.supervision_tout;
        VAR_27->waiting_update_conn_latency = VAR_28->conn_params.slave_latency;

        FUNC_8 (VAR_21,
                                           VAR_28->conn_params.min_conn_int,
                                           VAR_28->conn_params.max_conn_int,
                                           VAR_28->conn_params.slave_latency,
                                           VAR_28->conn_params.supervision_tout,
                                           0, 0);
    }


    FUNC_3 (VAR_22, ((void*)0), VAR_28->sec_bd_name, VAR_21, VAR_27->link_role, VAR_8);

    VAR_27->peer_chnl_mask[0] = VAR_14 | VAR_15 | VAR_16;

    FUNC_5(VAR_0);


    FUNC_4(VAR_7, VAR_19);

}
