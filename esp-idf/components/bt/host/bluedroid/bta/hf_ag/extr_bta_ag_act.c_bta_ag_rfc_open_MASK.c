
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int cmd_max_len; TYPE_1__* p_user; int * p_err_cback; int * p_cmd_cback; int * p_at_tbl; } ;
struct TYPE_8__ {int inband_enabled; int features; size_t conn_service; int act_timer; int peer_addr; int app_id; int air_mode; TYPE_7__ at_cb; void* cmee_enabled; void* cmer_enabled; void* ccwa_enabled; void* clip_enabled; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int tBTA_AG_DATA ;
typedef int tBTA_AG_AT_ERR_CBACK ;
typedef int tBTA_AG_AT_CMD_CBACK ;
typedef int tBTA_AG_AT_CMD ;
struct TYPE_9__ {int conn_tout; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_7__*) ;
 scalar_t__* VAR_10 ;
 int FUNC_1 (TYPE_1__*,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int * VAR_11 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 TYPE_2__* VAR_12 ;

void FUNC_7(tBTA_AG_SCB *VAR_13, tBTA_AG_DATA *VAR_14)
{

    VAR_13->clip_enabled = VAR_7;
    VAR_13->ccwa_enabled = VAR_7;
    VAR_13->cmer_enabled = VAR_7;
    VAR_13->cmee_enabled = VAR_7;
    VAR_13->inband_enabled = ((VAR_13->features & VAR_1) == VAR_1);


    VAR_13->at_cb.p_at_tbl = (tBTA_AG_AT_CMD *) VAR_10[VAR_13->conn_service];
    VAR_13->at_cb.p_cmd_cback = (tBTA_AG_AT_CMD_CBACK *) VAR_8[VAR_13->conn_service];
    VAR_13->at_cb.p_err_cback = (tBTA_AG_AT_ERR_CBACK *) VAR_9;
    VAR_13->at_cb.p_user = VAR_13;
    VAR_13->at_cb.cmd_max_len = VAR_0;
    FUNC_0(&VAR_13->at_cb);


    FUNC_3(FUNC_2(VAR_13), VAR_13->air_mode, VAR_5, VAR_11[VAR_13->conn_service]);
    FUNC_5(VAR_6, VAR_13->app_id, VAR_13->peer_addr);
    FUNC_1(VAR_13, ((void*)0), VAR_3);

    if (VAR_13->conn_service == VAR_2) {

        FUNC_6(&VAR_13->act_timer, VAR_4, VAR_12->conn_tout);
    } else {

        FUNC_4(VAR_13, VAR_14);
    }
}
