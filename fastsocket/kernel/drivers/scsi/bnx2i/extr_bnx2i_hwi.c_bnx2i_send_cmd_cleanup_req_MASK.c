
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bnx2i_hba {int dummy; } ;
struct TYPE_7__ {int itt; } ;
struct bnx2i_cmd {TYPE_4__* conn; TYPE_3__ req; } ;
struct bnx2i_cleanup_request {scalar_t__ cq_index; int itt; int op_code; } ;
struct TYPE_8__ {TYPE_2__* ep; } ;
struct TYPE_5__ {scalar_t__ sq_prod_qe; } ;
struct TYPE_6__ {TYPE_1__ qp; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (struct bnx2i_cleanup_request*,int,int) ;

void FUNC_2(struct bnx2i_hba *VAR_1, struct bnx2i_cmd *VAR_2)
{
 struct bnx2i_cleanup_request *VAR_3;

 VAR_3 =
  (struct bnx2i_cleanup_request *)VAR_2->conn->ep->qp.sq_prod_qe;
 FUNC_1(VAR_3, 0x00, sizeof(struct bnx2i_cleanup_request));

 VAR_3->op_code = VAR_0;
 VAR_3->itt = VAR_2->req.itt;
 VAR_3->cq_index = 0;

 FUNC_0(VAR_2->conn, 1);
}
