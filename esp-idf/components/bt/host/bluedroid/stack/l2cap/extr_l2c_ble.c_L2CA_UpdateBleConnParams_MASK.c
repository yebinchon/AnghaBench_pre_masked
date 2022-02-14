
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ transport; int conn_update_mask; int upda_con_timer; void* waiting_update_conn_timeout; void* waiting_update_conn_latency; void* waiting_update_conn_max_interval; void* waiting_update_conn_min_interval; int remote_bd_addr; int current_used_conn_timeout; int current_used_conn_latency; int current_used_conn_interval; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_9__ {int supervision_tout; int slave_latency; int conn_int; void* min_conn_int; void* max_conn_int; } ;
typedef TYPE_2__ tBTM_LE_UPDATE_CONN_PRAMS ;
typedef int tACL_CONN ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef void* UINT16 ;
struct TYPE_10__ {int (* update_conn_param_cb ) (int ,int ,TYPE_2__*) ;} ;
typedef scalar_t__ BOOLEAN ;
typedef int* BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int * FUNC_3 (int*,scalar_t__) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_6__ VAR_7 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int*,scalar_t__) ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;

BOOLEAN FUNC_8 (BD_ADDR VAR_8, UINT16 VAR_9, UINT16 VAR_10,
                                  UINT16 VAR_11, UINT16 VAR_12)
{
    tL2C_LCB *VAR_13;
    tACL_CONN *VAR_14 = FUNC_3(VAR_8, VAR_1);


    VAR_13 = FUNC_6 (VAR_8, VAR_1);


    if (!VAR_13 || !VAR_14) {
        FUNC_2 ("L2CA_UpdateBleConnParams - unknown BD_ADDR %08x%04x",
                             (VAR_8[0] << 24) + (VAR_8[1] << 16) + (VAR_8[2] << 8) + VAR_8[3],
                             (VAR_8[4] << 8) + VAR_8[5]);
        return (VAR_2);
    }

    if (VAR_13->transport != VAR_1) {
        FUNC_2 ("L2CA_UpdateBleConnParams - BD_ADDR %08x%04x not LE",
                             (VAR_8[0] << 24) + (VAR_8[1] << 16) + (VAR_8[2] << 8) + VAR_8[3],
                             (VAR_8[4] << 8) + VAR_8[5]);
        return (VAR_2);
    }

    if (VAR_13->conn_update_mask & VAR_5){
        UINT8 VAR_15 = VAR_3;
        FUNC_1("There are two connection parameter requests that are being updated, please try later ");
        if (VAR_7.update_conn_param_cb != ((void*)0)) {
            tBTM_LE_UPDATE_CONN_PRAMS VAR_16;
            VAR_16.max_conn_int = VAR_10;
            VAR_16.min_conn_int = VAR_9;
            VAR_16.conn_int = VAR_13->current_used_conn_interval;
            VAR_16.slave_latency = VAR_13->current_used_conn_latency;
            VAR_16.supervision_tout = VAR_13->current_used_conn_timeout;
            (VAR_7.update_conn_param_cb)(VAR_15, VAR_13->remote_bd_addr, &VAR_16);
        }
        return (VAR_2);
    }

    VAR_13->waiting_update_conn_min_interval = VAR_9;
    VAR_13->waiting_update_conn_max_interval = VAR_10;
    VAR_13->waiting_update_conn_latency = VAR_11;
    VAR_13->waiting_update_conn_timeout = VAR_12;
    VAR_13->conn_update_mask |= VAR_4;

    if(FUNC_5(VAR_13) == VAR_6) {
        UINT32 VAR_17 = FUNC_0(VAR_13);
        FUNC_4(&VAR_13->upda_con_timer, VAR_0, VAR_17);
    }

    return (VAR_6);
}
