
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bfi_fcxp_send_req_s {int mh; int rsp_alen; int req_alen; void* rsp_maxlen; void* req_len; int fchs; int cts; int rsp_timeout; int class; int lp_fwtag; void* vf_id; void* max_frmsz; int rport_fw_hndl; void* fcxp_tag; } ;
struct bfa_s {int dummy; } ;
struct TYPE_4__ {int max_frmsz; } ;
struct bfa_rport_s {TYPE_2__ rport_info; int fw_handle; } ;
struct bfa_fcxp_rsp_info_s {scalar_t__ rsp_maxlen; int rsp_timeout; } ;
struct bfa_fcxp_req_info_s {scalar_t__ req_tot_len; int fchs; int cts; int class; int lp_tag; int vf_id; struct bfa_rport_s* bfa_rport; } ;
struct bfa_fcxp_s {int use_ireqbuf; int nreq_sgles; int use_irspbuf; int nrsp_sgles; int caller; int (* rsp_sga_cbfn ) (int ,int ) ;int (* req_sga_cbfn ) (int ,int ) ;int fcxp_tag; struct bfa_fcxp_rsp_info_s rsp_info; struct bfa_fcxp_req_info_s req_info; TYPE_1__* fcxp_mod; } ;
struct TYPE_3__ {struct bfa_s* bfa; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bfa_fcxp_s*) ;
 int FUNC_1 (struct bfa_fcxp_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (struct bfa_s*) ;
 int FUNC_5 (struct bfa_s*,int ) ;
 int FUNC_6 (struct bfa_s*,int ) ;
 int FUNC_7 (struct bfa_s*,int ) ;
 int FUNC_8 (struct bfa_s*,int ,int ) ;
 int FUNC_9 (struct bfa_s*,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 void* FUNC_11 (int ) ;
 void* FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct bfa_s*,scalar_t__,struct bfa_fcxp_s*,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static void
FUNC_16(struct bfa_fcxp_s *VAR_5, struct bfi_fcxp_send_req_s *VAR_6)
{
 struct bfa_s *VAR_7 = VAR_5->fcxp_mod->bfa;
 struct bfa_fcxp_req_info_s *VAR_8 = &VAR_5->req_info;
 struct bfa_fcxp_rsp_info_s *VAR_9 = &VAR_5->rsp_info;
 struct bfa_rport_s *VAR_10 = VAR_8->bfa_rport;

 FUNC_10(VAR_6->mh, VAR_3, VAR_2,
      FUNC_4(VAR_7));

 VAR_6->fcxp_tag = FUNC_11(VAR_5->fcxp_tag);
 if (VAR_10) {
  VAR_6->rport_fw_hndl = VAR_10->fw_handle;
  VAR_6->max_frmsz = FUNC_11(VAR_10->rport_info.max_frmsz);
  if (VAR_6->max_frmsz == 0)
   VAR_6->max_frmsz = FUNC_11(VAR_4);
 } else {
  VAR_6->rport_fw_hndl = 0;
  VAR_6->max_frmsz = FUNC_11(VAR_4);
 }

 VAR_6->vf_id = FUNC_11(VAR_8->vf_id);
 VAR_6->lp_fwtag = FUNC_5(VAR_7, VAR_8->lp_tag);
 VAR_6->class = VAR_8->class;
 VAR_6->rsp_timeout = VAR_9->rsp_timeout;
 VAR_6->cts = VAR_8->cts;
 VAR_6->fchs = VAR_8->fchs;

 VAR_6->req_len = FUNC_12(VAR_8->req_tot_len);
 VAR_6->rsp_maxlen = FUNC_12(VAR_9->rsp_maxlen);




 if (VAR_5->use_ireqbuf == 1) {
  FUNC_3(&VAR_6->req_alen, VAR_8->req_tot_len,
     FUNC_0(VAR_5));
 } else {
  if (VAR_5->nreq_sgles > 0) {
   FUNC_2(VAR_5->nreq_sgles != 1);
   FUNC_3(&VAR_6->req_alen, VAR_8->req_tot_len,
    VAR_5->req_sga_cbfn(VAR_5->caller, 0));
  } else {
   FUNC_2(VAR_8->req_tot_len != 0);
   FUNC_3(&VAR_6->rsp_alen, 0, 0);
  }
 }




 if (VAR_5->use_irspbuf == 1) {
  FUNC_2(VAR_9->rsp_maxlen > VAR_0);

  FUNC_3(&VAR_6->rsp_alen, VAR_9->rsp_maxlen,
     FUNC_1(VAR_5));
 } else {
  if (VAR_5->nrsp_sgles > 0) {
   FUNC_2(VAR_5->nrsp_sgles != 1);
   FUNC_3(&VAR_6->rsp_alen, VAR_9->rsp_maxlen,
    VAR_5->rsp_sga_cbfn(VAR_5->caller, 0));

  } else {
   FUNC_2(VAR_9->rsp_maxlen != 0);
   FUNC_3(&VAR_6->rsp_alen, 0, 0);
  }
 }

 FUNC_13(VAR_7, VAR_8->req_tot_len, VAR_5, &VAR_8->fchs);

 FUNC_8(VAR_7, VAR_1, VAR_6->mh);

 FUNC_9(VAR_7, FUNC_7(VAR_7, VAR_1));
 FUNC_9(VAR_7, FUNC_6(VAR_7, VAR_1));
}
