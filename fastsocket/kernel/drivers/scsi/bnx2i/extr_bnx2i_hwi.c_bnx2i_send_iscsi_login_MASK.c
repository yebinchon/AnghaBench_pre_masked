
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
typedef int u16 ;
struct iscsi_task {int itt; scalar_t__ hdr; scalar_t__ dd_data; } ;
struct iscsi_login {int exp_statsn; int cmdsn; int cid; int tsih; scalar_t__ isid; int dlength; int min_version; int max_version; int flags; int opcode; } ;
struct bnx2i_login_request {int itt; int num_bds; scalar_t__ cq_index; void* bd_list_addr_hi; void* bd_list_addr_lo; void* resp_buffer; void* resp_bd_list_addr_hi; void* resp_bd_list_addr_lo; int flags; void* exp_stat_sn; void* cmd_sn; int cid; int tsih; int isid_hi; void* isid_lo; int data_length; int version_min; int version_max; int op_attr; int op_code; } ;
struct TYPE_6__ {int resp_buf_size; scalar_t__ req_bd_dma; scalar_t__ resp_bd_dma; } ;
struct bnx2i_conn {TYPE_3__ gen_pdu; TYPE_2__* ep; } ;
struct bnx2i_cmd {int dummy; } ;
struct TYPE_4__ {scalar_t__ sq_prod_qe; } ;
struct TYPE_5__ {TYPE_1__ qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2i_conn*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct bnx2i_conn *VAR_5,
      struct iscsi_task *VAR_6)
{
 struct bnx2i_cmd *VAR_7;
 struct bnx2i_login_request *VAR_8;
 struct iscsi_login *VAR_9;
 u32 VAR_10;

 VAR_7 = (struct bnx2i_cmd *)VAR_6->dd_data;
 VAR_9 = (struct iscsi_login *)VAR_6->hdr;
 VAR_8 = (struct bnx2i_login_request *)
      VAR_5->ep->qp.sq_prod_qe;

 VAR_8->op_code = VAR_9->opcode;
 VAR_8->op_attr = VAR_9->flags;
 VAR_8->version_max = VAR_9->max_version;
 VAR_8->version_min = VAR_9->min_version;
 VAR_8->data_length = FUNC_2(VAR_9->dlength);
 VAR_8->isid_lo = *((u32 *) VAR_9->isid);
 VAR_8->isid_hi = *((u16 *) VAR_9->isid + 2);
 VAR_8->tsih = VAR_9->tsih;
 VAR_8->itt = VAR_6->itt |
  (VAR_4 << VAR_2);
 VAR_8->cid = VAR_9->cid;

 VAR_8->cmd_sn = FUNC_0(VAR_9->cmdsn);
 VAR_8->exp_stat_sn = FUNC_0(VAR_9->exp_statsn);
 VAR_8->flags = VAR_3;

 VAR_8->resp_bd_list_addr_lo = (u32) VAR_5->gen_pdu.resp_bd_dma;
 VAR_8->resp_bd_list_addr_hi =
  (u32) ((u64) VAR_5->gen_pdu.resp_bd_dma >> 32);

 VAR_10 = ((1 << VAR_0) |
   (VAR_5->gen_pdu.resp_buf_size <<
    VAR_1));
 VAR_8->resp_buffer = VAR_10;
 VAR_8->bd_list_addr_lo = (u32) VAR_5->gen_pdu.req_bd_dma;
 VAR_8->bd_list_addr_hi =
  (u32) ((u64) VAR_5->gen_pdu.req_bd_dma >> 32);
 VAR_8->num_bds = 1;
 VAR_8->cq_index = 0;

 FUNC_1(VAR_5, 1);
 return 0;
}
