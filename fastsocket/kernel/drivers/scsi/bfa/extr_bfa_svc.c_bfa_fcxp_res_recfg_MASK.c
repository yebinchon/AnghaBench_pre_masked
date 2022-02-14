
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct list_head {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_fcxp_mod_s {int num_fcxps; int fcxp_rsp_unused_q; int fcxp_rsp_free_q; int fcxp_req_unused_q; int fcxp_req_free_q; } ;


 struct bfa_fcxp_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int *,struct list_head**) ;
 int FUNC_2 (struct list_head*,int *) ;

void
FUNC_3(struct bfa_s *VAR_0, u16 VAR_1)
{
 struct bfa_fcxp_mod_s *VAR_2 = FUNC_0(VAR_0);
 struct list_head *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < (VAR_2->num_fcxps - VAR_1); VAR_4++) {
  if (VAR_4 < ((VAR_2->num_fcxps - VAR_1) / 2)) {
   FUNC_1(&VAR_2->fcxp_req_free_q, &VAR_3);
   FUNC_2(VAR_3, &VAR_2->fcxp_req_unused_q);
  } else {
   FUNC_1(&VAR_2->fcxp_rsp_free_q, &VAR_3);
   FUNC_2(VAR_3, &VAR_2->fcxp_rsp_unused_q);
  }
 }
}
