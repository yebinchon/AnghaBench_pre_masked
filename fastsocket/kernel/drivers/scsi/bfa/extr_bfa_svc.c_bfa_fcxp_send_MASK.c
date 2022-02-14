
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef void* u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct bfi_fcxp_send_req_s {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_rport_s {int dummy; } ;
struct bfa_fcxp_rsp_info_s {void* rsp_maxlen; void* rsp_timeout; } ;
struct bfa_fcxp_req_info_s {int class; void* req_tot_len; struct fchs_s fchs; int cts; void* lp_tag; int vf_id; struct bfa_rport_s* bfa_rport; } ;
struct bfa_fcxp_s {int reqq_wqe; int reqq_waiting; int fcxp_tag; void* send_cbarg; scalar_t__ send_cbfn; struct bfa_fcxp_rsp_info_s rsp_info; struct bfa_fcxp_req_info_s req_info; TYPE_1__* fcxp_mod; } ;
typedef enum fc_cos { ____Placeholder_fc_cos } fc_cos ;
typedef scalar_t__ bfa_cb_fcxp_send_t ;
typedef int bfa_boolean_t ;
struct TYPE_2__ {struct bfa_s* bfa; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bfa_fcxp_s*,struct bfi_fcxp_send_req_s*) ;
 struct bfi_fcxp_send_req_s* FUNC_1 (struct bfa_s*,int ) ;
 int FUNC_2 (struct bfa_s*,int ,int *) ;
 int FUNC_3 (struct bfa_s*,int ) ;

void
FUNC_4(struct bfa_fcxp_s *VAR_3, struct bfa_rport_s *VAR_4,
       u16 VAR_5, u8 VAR_6, bfa_boolean_t VAR_7, enum fc_cos VAR_8,
       u32 VAR_9, struct fchs_s *VAR_10, bfa_cb_fcxp_send_t VAR_11,
       void *VAR_12, u32 VAR_13, u8 VAR_14)
{
 struct bfa_s *VAR_15 = VAR_3->fcxp_mod->bfa;
 struct bfa_fcxp_req_info_s *VAR_16 = &VAR_3->req_info;
 struct bfa_fcxp_rsp_info_s *VAR_17 = &VAR_3->rsp_info;
 struct bfi_fcxp_send_req_s *VAR_18;

 FUNC_3(VAR_15, VAR_3->fcxp_tag);




 VAR_16->bfa_rport = VAR_4;
 VAR_16->vf_id = VAR_5;
 VAR_16->lp_tag = VAR_6;
 VAR_16->class = VAR_8;
 VAR_17->rsp_timeout = VAR_14;
 VAR_16->cts = VAR_7;
 VAR_16->fchs = *VAR_10;
 VAR_16->req_tot_len = VAR_9;
 VAR_17->rsp_maxlen = VAR_13;
 VAR_3->send_cbfn = VAR_11 ? VAR_11 : VAR_2;
 VAR_3->send_cbarg = VAR_12;




 VAR_18 = FUNC_1(VAR_15, VAR_0);
 if (!VAR_18) {
  FUNC_3(VAR_15, VAR_3->fcxp_tag);
  VAR_3->reqq_waiting = VAR_1;
  FUNC_2(VAR_15, VAR_0, &VAR_3->reqq_wqe);
  return;
 }

 FUNC_0(VAR_3, VAR_18);
}
