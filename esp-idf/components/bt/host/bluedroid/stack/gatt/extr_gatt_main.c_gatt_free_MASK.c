
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * hdl_list; int hdl_list_info; TYPE_2__* tcb; int * pending_new_srv_start_q; int * srv_chg_clt_q; int * sign_op_queue; } ;
struct TYPE_4__ {int * multi_rsp_q; } ;
struct TYPE_5__ {TYPE_1__ sr_cmd; int ind_ack_timer_ent; int conf_timer_ent; int * pending_ind_q; int * pending_enc_clcb; } ;
typedef int TIMER_LIST_ENT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ,int) ;

void FUNC_8(void)
{
    int VAR_4;
    FUNC_1("gatt_free()");
    FUNC_3(VAR_2.sign_op_queue, ((void*)0));
    VAR_2.sign_op_queue = ((void*)0);
    FUNC_3(VAR_2.srv_chg_clt_q, ((void*)0));
    VAR_2.srv_chg_clt_q = ((void*)0);
    FUNC_3(VAR_2.pending_new_srv_start_q, ((void*)0));
    VAR_2.pending_new_srv_start_q = ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    {
        FUNC_3(VAR_2.tcb[VAR_4].pending_enc_clcb, ((void*)0));
        VAR_2.tcb[VAR_4].pending_enc_clcb = ((void*)0);

        FUNC_3(VAR_2.tcb[VAR_4].pending_ind_q, ((void*)0));
        VAR_2.tcb[VAR_4].pending_ind_q = ((void*)0);

        FUNC_2(&VAR_2.tcb[VAR_4].conf_timer_ent);
        FUNC_7(&VAR_2.tcb[VAR_4].conf_timer_ent, 0, sizeof(TIMER_LIST_ENT));

        FUNC_2(&VAR_2.tcb[VAR_4].ind_ack_timer_ent);
        FUNC_7(&VAR_2.tcb[VAR_4].ind_ack_timer_ent, 0, sizeof(TIMER_LIST_ENT));


        FUNC_3(VAR_2.tcb[VAR_4].sr_cmd.multi_rsp_q, ((void*)0));
        VAR_2.tcb[VAR_4].sr_cmd.multi_rsp_q = ((void*)0);

    }


    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        FUNC_6(&VAR_2.hdl_list_info, &VAR_2.hdl_list[VAR_4]);
        FUNC_4(&VAR_2.hdl_list[VAR_4]);
        FUNC_5(&VAR_2.hdl_list[VAR_4]);
    }




}
