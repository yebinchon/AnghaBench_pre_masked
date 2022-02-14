
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int conn_update_mask; int timer_entry; int upda_con_timer; void* current_used_conn_timeout; void* current_used_conn_latency; void* current_used_conn_interval; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef void* UINT8 ;
typedef int UINT32 ;
typedef void* UINT16 ;
struct TYPE_8__ {int * update_conn_param_cb; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 void* VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 TYPE_5__ VAR_5 ;
 int FUNC_5 (TYPE_1__*,void*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 TYPE_1__* FUNC_7 (void*) ;

void FUNC_8 (UINT16 VAR_6, UINT8 VAR_7, UINT16 VAR_8,
                                                       UINT16 VAR_9, UINT16 VAR_10)
{
    tL2C_LCB *VAR_11;


    VAR_11 = FUNC_7(VAR_6);
    if (!VAR_11) {
        FUNC_2("l2cble_process_conn_update_evt: Invalid handle: %d", VAR_6);
        return;
    }
    if (VAR_7 == VAR_1){
        VAR_11->current_used_conn_interval = VAR_8;
        VAR_11->current_used_conn_latency = VAR_9;
        VAR_11->current_used_conn_timeout = VAR_10;
    }else{
        FUNC_2("l2cble_process_conn_update_evt: Error status: %d", VAR_7);
    }

    VAR_11->conn_update_mask &= ~VAR_3;
    VAR_11->conn_update_mask &= ~VAR_2;

    FUNC_4(&VAR_11->upda_con_timer);

    if (VAR_5.update_conn_param_cb != ((void*)0)) {
        FUNC_5(VAR_11, VAR_7);
    }

    if (FUNC_6(VAR_11) == VAR_4) {
        UINT32 VAR_12 = FUNC_0(VAR_11);
        FUNC_3(&VAR_11->upda_con_timer, VAR_0, VAR_12);
    }

    FUNC_4 (&VAR_11->timer_entry);

    FUNC_1("l2cble_process_conn_update_evt: conn_update_mask=%d", VAR_11->conn_update_mask);
}
