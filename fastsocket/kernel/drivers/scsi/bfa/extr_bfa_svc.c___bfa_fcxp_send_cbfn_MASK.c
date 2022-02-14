
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_fcxp_s {int rsp_fchs; int residue_len; int rsp_len; int rsp_status; int send_cbarg; int caller; int (* send_cbfn ) (int ,struct bfa_fcxp_s*,int ,int ,int ,int ,int *) ;} ;
typedef scalar_t__ bfa_boolean_t ;


 int FUNC_0 (struct bfa_fcxp_s*) ;
 int FUNC_1 (int ,struct bfa_fcxp_s*,int ,int ,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, bfa_boolean_t VAR_1)
{
 struct bfa_fcxp_s *VAR_2 = VAR_0;

 if (VAR_1) {
  VAR_2->send_cbfn(VAR_2->caller, VAR_2, VAR_2->send_cbarg,
    VAR_2->rsp_status, VAR_2->rsp_len,
    VAR_2->residue_len, &VAR_2->rsp_fchs);
 } else {
  FUNC_0(VAR_2);
 }
}
