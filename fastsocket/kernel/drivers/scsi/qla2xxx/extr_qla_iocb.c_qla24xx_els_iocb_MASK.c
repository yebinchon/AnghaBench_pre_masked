
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_15__ {int sg_list; int payload_len; int sg_cnt; } ;
struct TYPE_14__ {int sg_list; int payload_len; int sg_cnt; } ;
struct fc_bsg_job {TYPE_11__ reply_payload; TYPE_10__ request_payload; TYPE_6__* request; } ;
struct els_entry_24xx {int entry_count; void* rx_len; void** rx_address; void* tx_len; void** tx_address; void* tx_byte_count; void* rx_byte_count; scalar_t__ control_flags; int * port_id; int opcode; void* rx_dsd_count; int sof_type; int vp_index; void* tx_dsd_count; int nport_handle; int handle; scalar_t__ entry_status; scalar_t__ sys_define; int entry_type; } ;
struct TYPE_17__ {struct fc_bsg_job* bsg_job; } ;
struct TYPE_16__ {scalar_t__ type; TYPE_9__* fcport; int handle; TYPE_1__ u; } ;
typedef TYPE_12__ srb_t ;
struct TYPE_23__ {int domain; int area; int al_pa; } ;
struct TYPE_24__ {TYPE_7__ b; } ;
struct TYPE_25__ {TYPE_8__ d_id; TYPE_2__* vha; int loop_id; } ;
struct TYPE_20__ {int command_code; } ;
struct TYPE_19__ {int els_code; } ;
struct TYPE_21__ {TYPE_4__ h_els; TYPE_3__ r_els; } ;
struct TYPE_22__ {TYPE_5__ rqst_data; } ;
struct TYPE_18__ {int vp_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(srb_t *VAR_3, struct els_entry_24xx *VAR_4)
{
 struct fc_bsg_job *VAR_5 = VAR_3->u.bsg_job;

        VAR_4->entry_type = VAR_0;
        VAR_4->entry_count = 1;
        VAR_4->sys_define = 0;
        VAR_4->entry_status = 0;
        VAR_4->handle = VAR_3->handle;
        VAR_4->nport_handle = FUNC_3(VAR_3->fcport->loop_id);
        VAR_4->tx_dsd_count = FUNC_2(VAR_5->request_payload.sg_cnt);
 VAR_4->vp_index = VAR_3->fcport->vha->vp_idx;
        VAR_4->sof_type = VAR_1;
        VAR_4->rx_dsd_count = FUNC_2(VAR_5->reply_payload.sg_cnt);

 VAR_4->opcode =
     VAR_3->type == VAR_2 ?
     VAR_5->request->rqst_data.r_els.els_code :
     VAR_5->request->rqst_data.h_els.command_code;
        VAR_4->port_id[0] = VAR_3->fcport->d_id.b.al_pa;
        VAR_4->port_id[1] = VAR_3->fcport->d_id.b.area;
        VAR_4->port_id[2] = VAR_3->fcport->d_id.b.domain;
        VAR_4->control_flags = 0;
        VAR_4->rx_byte_count =
            FUNC_4(VAR_5->reply_payload.payload_len);
        VAR_4->tx_byte_count =
            FUNC_4(VAR_5->request_payload.payload_len);

        VAR_4->tx_address[0] = FUNC_4(FUNC_0(FUNC_5
            (VAR_5->request_payload.sg_list)));
        VAR_4->tx_address[1] = FUNC_4(FUNC_1(FUNC_5
            (VAR_5->request_payload.sg_list)));
        VAR_4->tx_len = FUNC_4(FUNC_6
            (VAR_5->request_payload.sg_list));

        VAR_4->rx_address[0] = FUNC_4(FUNC_0(FUNC_5
            (VAR_5->reply_payload.sg_list)));
        VAR_4->rx_address[1] = FUNC_4(FUNC_1(FUNC_5
            (VAR_5->reply_payload.sg_list)));
        VAR_4->rx_len = FUNC_4(FUNC_6
            (VAR_5->reply_payload.sg_list));
}
