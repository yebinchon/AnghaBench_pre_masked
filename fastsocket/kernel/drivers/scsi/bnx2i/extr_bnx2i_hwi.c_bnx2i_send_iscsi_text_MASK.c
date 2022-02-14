
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
struct iscsi_text {int cmdsn; int ttt; int dlength; int flags; int opcode; } ;
struct iscsi_task {int itt; scalar_t__ hdr; scalar_t__ dd_data; } ;
struct bnx2i_text_request {int itt; int num_bds; scalar_t__ cq_index; void* bd_list_addr_hi; void* bd_list_addr_lo; void* resp_buffer; void* resp_bd_list_addr_hi; void* resp_bd_list_addr_lo; void* cmd_sn; void* ttt; int data_length; int op_attr; int op_code; } ;
struct TYPE_6__ {int resp_buf_size; scalar_t__ req_bd_dma; scalar_t__ resp_bd_dma; } ;
struct bnx2i_conn {TYPE_3__ gen_pdu; TYPE_2__* ep; } ;
struct bnx2i_cmd {int dummy; } ;
struct TYPE_4__ {scalar_t__ sq_prod_qe; } ;
struct TYPE_5__ {TYPE_1__ qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2i_conn*,int) ;
 int FUNC_2 (struct bnx2i_text_request*,int ,int) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct bnx2i_conn *VAR_4,
     struct iscsi_task *VAR_5)
{
 struct bnx2i_cmd *VAR_6;
 struct bnx2i_text_request *VAR_7;
 struct iscsi_text *VAR_8;
 u32 VAR_9;

 VAR_6 = (struct bnx2i_cmd *)VAR_5->dd_data;
 VAR_8 = (struct iscsi_text *)VAR_5->hdr;
 VAR_7 = (struct bnx2i_text_request *) VAR_4->ep->qp.sq_prod_qe;

 FUNC_2(VAR_7, 0, sizeof(struct bnx2i_text_request));

 VAR_7->op_code = VAR_8->opcode;
 VAR_7->op_attr = VAR_8->flags;
 VAR_7->data_length = FUNC_3(VAR_8->dlength);
 VAR_7->itt = VAR_5->itt |
  (VAR_0 << VAR_3);
 VAR_7->ttt = FUNC_0(VAR_8->ttt);

 VAR_7->cmd_sn = FUNC_0(VAR_8->cmdsn);

 VAR_7->resp_bd_list_addr_lo = (u32) VAR_4->gen_pdu.resp_bd_dma;
 VAR_7->resp_bd_list_addr_hi =
   (u32) ((u64) VAR_4->gen_pdu.resp_bd_dma >> 32);

 VAR_9 = ((1 << VAR_1) |
   (VAR_4->gen_pdu.resp_buf_size <<
    VAR_2));
 VAR_7->resp_buffer = VAR_9;
 VAR_7->bd_list_addr_lo = (u32) VAR_4->gen_pdu.req_bd_dma;
 VAR_7->bd_list_addr_hi =
   (u32) ((u64) VAR_4->gen_pdu.req_bd_dma >> 32);
 VAR_7->num_bds = 1;
 VAR_7->cq_index = 0;

 FUNC_1(VAR_4, 1);
 return 0;
}
