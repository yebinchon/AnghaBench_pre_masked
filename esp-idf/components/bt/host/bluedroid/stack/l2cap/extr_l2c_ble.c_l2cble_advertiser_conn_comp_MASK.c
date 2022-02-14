
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {int updating_param_flag; int* peer_chnl_mask; int link_state; int link_role; int conn_update_mask; void* current_used_conn_latency; void* waiting_update_conn_latency; void* current_used_conn_timeout; void* waiting_update_conn_timeout; void* current_used_conn_interval; void* waiting_update_conn_max_interval; void* waiting_update_conn_min_interval; int transport; void* handle; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_15__ {int sec_bd_name; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef void* tBLE_ADDR_TYPE ;
typedef void* UINT16 ;
struct TYPE_17__ {int ble_connecting_bda; scalar_t__ is_ble_connecting; TYPE_1__* fixed_reg; } ;
struct TYPE_16__ {int as_array; } ;
struct TYPE_13__ {int fixed_chnl_opts; } ;
struct TYPE_12__ {TYPE_4__* (* get_features_ble ) () ;} ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ,int *,int ,void*,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (void*,int ) ;
 TYPE_10__* FUNC_9 () ;
 TYPE_9__ VAR_14 ;
 TYPE_2__* FUNC_10 (int ,int ,int ) ;
 TYPE_2__* FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_2__*,size_t,int *) ;
 int FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,int ,int ) ;
 TYPE_4__* FUNC_15 () ;

void FUNC_16 (UINT16 VAR_15, BD_ADDR VAR_16, tBLE_ADDR_TYPE VAR_17,
                                  UINT16 VAR_18, UINT16 VAR_19, UINT16 VAR_20)
{
    tL2C_LCB *VAR_21;
    tBTM_SEC_DEV_REC *VAR_22;
    FUNC_4(VAR_17);
    FUNC_4(VAR_18);
    FUNC_4(VAR_19);
    FUNC_4(VAR_20);


    VAR_21 = FUNC_11 (VAR_16, VAR_2);


    if (!VAR_21) {
        VAR_21 = FUNC_10 (VAR_16, VAR_3, VAR_2);
        if (!VAR_21) {

            FUNC_8 (VAR_15, VAR_4);

            FUNC_1 ("l2cble_advertiser_conn_comp - failed to allocate LCB");
            return;
        } else {
            if (!FUNC_12 (VAR_21, VAR_6, &VAR_14.fixed_reg[VAR_6 - VAR_7].fixed_chnl_opts)) {

                FUNC_8 (VAR_15, VAR_4);

                FUNC_2 ("l2cble_scanner_conn_comp - LCB but no CCB");
                return ;
            }
        }
    }


    VAR_21->handle = VAR_15;


    VAR_21->link_role = VAR_5;
    VAR_21->transport = VAR_2;


    VAR_21->waiting_update_conn_min_interval = VAR_21->waiting_update_conn_max_interval = VAR_21->current_used_conn_interval = VAR_18;
    VAR_21->waiting_update_conn_timeout = VAR_21->current_used_conn_timeout = VAR_20;
    VAR_21->waiting_update_conn_latency = VAR_21->current_used_conn_latency = VAR_19;
    VAR_21->conn_update_mask = VAR_11;
    VAR_21->updating_param_flag = 0;


    VAR_22 = FUNC_7 (VAR_16);

    FUNC_5 (VAR_16, ((void*)0), VAR_22->sec_bd_name, VAR_15, VAR_21->link_role, VAR_2);


    FUNC_6(VAR_1, VAR_13);


    VAR_21->peer_chnl_mask[0] = VAR_8 | VAR_9 | VAR_10;

    if (!FUNC_0(FUNC_9()->get_features_ble()->as_array)) {
        VAR_21->link_state = VAR_12;
        FUNC_13 (VAR_21);
    }


    if (VAR_14.is_ble_connecting && FUNC_14(VAR_16, VAR_14.ble_connecting_bda, VAR_0) == 0) {
        FUNC_3(VAR_16);
    }
}
