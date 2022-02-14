
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int updating_param_flag; int remote_bd_addr; int current_used_conn_timeout; int current_used_conn_latency; int current_used_conn_interval; scalar_t__ updating_conn_min_interval; scalar_t__ updating_conn_max_interval; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_7__ {int supervision_tout; int slave_latency; int conn_int; scalar_t__ min_conn_int; scalar_t__ max_conn_int; } ;
typedef TYPE_2__ tBTM_LE_UPDATE_CONN_PRAMS ;
typedef int UINT8 ;
struct TYPE_8__ {int (* update_conn_param_cb ) (int ,int ,TYPE_2__*) ;} ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;

void FUNC_1(tL2C_LCB *VAR_1, UINT8 VAR_2)
{
    if(VAR_0.update_conn_param_cb != ((void*)0)){
        tBTM_LE_UPDATE_CONN_PRAMS VAR_3;

        if (VAR_1->updating_param_flag){
            VAR_3.max_conn_int = VAR_1->updating_conn_max_interval;
            VAR_3.min_conn_int = VAR_1->updating_conn_min_interval;
            VAR_1->updating_param_flag = 0;
        }else{

            VAR_3.max_conn_int = VAR_3.min_conn_int = 0;
        }

        VAR_3.conn_int = VAR_1->current_used_conn_interval;
        VAR_3.slave_latency = VAR_1->current_used_conn_latency;
        VAR_3.supervision_tout = VAR_1->current_used_conn_timeout;

        (VAR_0.update_conn_param_cb)(VAR_2, VAR_1->remote_bd_addr, &VAR_3);
    }
}
