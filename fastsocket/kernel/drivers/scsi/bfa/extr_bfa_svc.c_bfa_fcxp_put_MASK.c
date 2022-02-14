
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcxp_wqe_s {int alloc_cbarg; int (* alloc_cbfn ) (int ,struct bfa_fcxp_s*) ;int rsp_sglen_cbfn; int rsp_sga_cbfn; int req_sglen_cbfn; int req_sga_cbfn; int nrsp_sgles; int nreq_sgles; int bfa; int caller; } ;
struct bfa_fcxp_s {int qe; scalar_t__ req_rsp; int fcxp_tag; struct bfa_fcxp_mod_s* fcxp_mod; } ;
struct bfa_fcxp_mod_s {int fcxp_rsp_free_q; int fcxp_req_free_q; int fcxp_active_q; int bfa; int rsp_wait_q; int req_wait_q; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_fcxp_s*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int *,struct bfa_fcxp_wqe_s**) ;
 int FUNC_3 (int *,struct bfa_fcxp_s*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct bfa_fcxp_s*) ;

__attribute__((used)) static void
FUNC_8(struct bfa_fcxp_s *VAR_0)
{
 struct bfa_fcxp_mod_s *VAR_1 = VAR_0->fcxp_mod;
 struct bfa_fcxp_wqe_s *VAR_2;

 if (VAR_0->req_rsp)
  FUNC_2(&VAR_1->req_wait_q, &VAR_2);
 else
  FUNC_2(&VAR_1->rsp_wait_q, &VAR_2);

 if (VAR_2) {
  FUNC_4(VAR_1->bfa, VAR_0->fcxp_tag);

  FUNC_1(VAR_0, VAR_2->caller, VAR_2->bfa, VAR_2->nreq_sgles,
   VAR_2->nrsp_sgles, VAR_2->req_sga_cbfn,
   VAR_2->req_sglen_cbfn, VAR_2->rsp_sga_cbfn,
   VAR_2->rsp_sglen_cbfn);

  VAR_2->alloc_cbfn(VAR_2->alloc_cbarg, VAR_0);
  return;
 }

 FUNC_0(!FUNC_3(&VAR_1->fcxp_active_q, VAR_0));
 FUNC_6(&VAR_0->qe);

 if (VAR_0->req_rsp)
  FUNC_5(&VAR_0->qe, &VAR_1->fcxp_req_free_q);
 else
  FUNC_5(&VAR_0->qe, &VAR_1->fcxp_rsp_free_q);
}
