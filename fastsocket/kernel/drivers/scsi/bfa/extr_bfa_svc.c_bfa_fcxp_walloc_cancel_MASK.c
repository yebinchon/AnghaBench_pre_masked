
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_fcxp_wqe_s {int qe; } ;
struct bfa_fcxp_mod_s {int rsp_wait_q; int req_wait_q; } ;


 struct bfa_fcxp_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct bfa_fcxp_wqe_s*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct bfa_s *VAR_0, struct bfa_fcxp_wqe_s *VAR_1)
{
 struct bfa_fcxp_mod_s *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(!FUNC_2(&VAR_2->req_wait_q, VAR_1) ||
  !FUNC_2(&VAR_2->rsp_wait_q, VAR_1));
 FUNC_3(&VAR_1->qe);
}
