
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2i_conn {TYPE_2__* ep; } ;
struct bnx2i_cmd_request {scalar_t__ cq_index; } ;
struct bnx2i_cmd {int req; } ;
struct TYPE_3__ {scalar_t__ sq_prod_qe; } ;
struct TYPE_4__ {TYPE_1__ qp; } ;


 int FUNC_0 (struct bnx2i_conn*,int) ;
 int FUNC_1 (struct bnx2i_cmd_request*,int *,int) ;

int FUNC_2(struct bnx2i_conn *VAR_0,
        struct bnx2i_cmd *VAR_1)
{
 struct bnx2i_cmd_request *VAR_2;

 VAR_2 = (struct bnx2i_cmd_request *)
      VAR_0->ep->qp.sq_prod_qe;
 FUNC_1(VAR_2, &VAR_1->req, sizeof(struct bnx2i_cmd_request));
 VAR_2->cq_index = 0;

 FUNC_0(VAR_0, 1);
 return 0;
}
