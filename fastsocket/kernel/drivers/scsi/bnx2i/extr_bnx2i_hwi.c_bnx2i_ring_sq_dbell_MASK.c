
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ctx_base; int sq_prod_idx; scalar_t__ sq_pgtbl_virt; } ;
struct bnx2i_endpoint {TYPE_1__ qp; TYPE_2__* hba; int num_active_cmds; } ;
struct bnx2i_conn {struct bnx2i_endpoint* ep; } ;
struct bnx2i_5771x_sq_rq_db {int prod_idx; } ;
struct TYPE_4__ {int cnic_dev_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bnx2i_conn*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct bnx2i_conn *VAR_2, int VAR_3)
{
 struct bnx2i_5771x_sq_rq_db *VAR_4;
 struct bnx2i_endpoint *VAR_5 = VAR_2->ep;

 FUNC_0(&VAR_5->num_active_cmds);
 FUNC_4();
 if (FUNC_3(VAR_0, &VAR_5->hba->cnic_dev_type)) {
  VAR_4 = (struct bnx2i_5771x_sq_rq_db *) VAR_5->qp.sq_pgtbl_virt;
  VAR_4->prod_idx = VAR_5->qp.sq_prod_idx;
  FUNC_1(VAR_2);
 } else
  FUNC_5(VAR_3, VAR_5->qp.ctx_base + VAR_1);

 FUNC_2();
}
