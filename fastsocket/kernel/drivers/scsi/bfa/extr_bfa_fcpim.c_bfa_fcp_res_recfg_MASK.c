
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct list_head {int dummy; } ;
struct bfa_s {int dummy; } ;
struct bfa_fcp_mod_s {int num_ioim_reqs; int max_ioim_reqs; scalar_t__ throttle_update_required; int iotag_unused_q; int iotag_ioim_free_q; } ;


 struct bfa_fcp_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int *,struct list_head**) ;
 int FUNC_2 (struct bfa_s*,int) ;
 int FUNC_3 (struct list_head*,int *) ;

void
FUNC_4(struct bfa_s *VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct bfa_fcp_mod_s *VAR_3 = FUNC_0(VAR_0);
 struct list_head *VAR_4;
 int VAR_5;


 if (!VAR_3->throttle_update_required)
  return;

 for (VAR_5 = 0; VAR_5 < (VAR_3->num_ioim_reqs - VAR_1); VAR_5++) {
  FUNC_1(&VAR_3->iotag_ioim_free_q, &VAR_4);
  FUNC_3(VAR_4, &VAR_3->iotag_unused_q);
 }

 if (VAR_3->num_ioim_reqs != VAR_1) {
  FUNC_2(VAR_0, VAR_3->num_ioim_reqs);
  FUNC_2(VAR_0, VAR_1);
 }

 VAR_3->max_ioim_reqs = VAR_2;
 VAR_3->num_ioim_reqs = VAR_1;
 VAR_3->throttle_update_required = 0;
}
