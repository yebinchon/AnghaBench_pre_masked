
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
struct iscsi_task {scalar_t__ itt; scalar_t__ hdr; scalar_t__ dd_data; } ;
struct iscsi_logout {int flags; int cmdsn; int opcode; } ;
struct bnx2i_logout_request {int op_attr; int itt; int num_bds; scalar_t__ cq_index; void* bd_list_addr_hi; void* bd_list_addr_lo; scalar_t__ cid; scalar_t__ data_length; int cmd_sn; int op_code; } ;
struct bnx2i_conn {TYPE_3__* ep; TYPE_2__* hba; } ;
struct bnx2i_cmd {int dummy; } ;
struct TYPE_4__ {scalar_t__ sq_prod_qe; } ;
struct TYPE_6__ {int state; TYPE_1__ qp; } ;
struct TYPE_5__ {scalar_t__ mp_bd_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnx2i_conn*,int) ;
 int FUNC_2 (struct bnx2i_logout_request*,int,int) ;

int FUNC_3(struct bnx2i_conn *VAR_4,
       struct iscsi_task *VAR_5)
{
 struct bnx2i_cmd *VAR_6;
 struct bnx2i_logout_request *VAR_7;
 struct iscsi_logout *VAR_8;

 VAR_6 = (struct bnx2i_cmd *)VAR_5->dd_data;
 VAR_8 = (struct iscsi_logout *)VAR_5->hdr;

 VAR_7 = (struct bnx2i_logout_request *)
      VAR_4->ep->qp.sq_prod_qe;
 FUNC_2(VAR_7, 0x00, sizeof(struct bnx2i_logout_request));

 VAR_7->op_code = VAR_8->opcode;
 VAR_7->cmd_sn = FUNC_0(VAR_8->cmdsn);
 VAR_7->op_attr =
   VAR_8->flags | VAR_1;
 VAR_7->itt = ((u16)VAR_5->itt |
      (VAR_3 <<
       VAR_2));
 VAR_7->data_length = 0;
 VAR_7->cid = 0;

 VAR_7->bd_list_addr_lo = (u32) VAR_4->hba->mp_bd_dma;
 VAR_7->bd_list_addr_hi = (u32)
    ((u64) VAR_4->hba->mp_bd_dma >> 32);
 VAR_7->num_bds = 1;
 VAR_7->cq_index = 0;

 VAR_4->ep->state = VAR_0;

 FUNC_1(VAR_4, 1);
 return 0;
}
