
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_sgpg_wqe_s {scalar_t__ nsgpg_total; scalar_t__ nsgpg; int sgpg_q; int qe; } ;
struct bfa_sgpg_mod_s {int sgpg_wait_q; } ;
struct bfa_s {int dummy; } ;


 struct bfa_sgpg_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct bfa_sgpg_wqe_s*) ;
 int FUNC_3 (struct bfa_s*,int *,scalar_t__) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct bfa_s *VAR_0, struct bfa_sgpg_wqe_s *VAR_1)
{
 struct bfa_sgpg_mod_s *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(!FUNC_2(&VAR_2->sgpg_wait_q, VAR_1));
 FUNC_4(&VAR_1->qe);

 if (VAR_1->nsgpg_total != VAR_1->nsgpg)
  FUNC_3(VAR_0, &VAR_1->sgpg_q,
       VAR_1->nsgpg_total - VAR_1->nsgpg);
}
