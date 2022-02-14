
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_sgpg_wqe_s {int nsgpg_total; int nsgpg; int qe; int sgpg_q; } ;
struct bfa_sgpg_mod_s {int free_sgpgs; int sgpg_wait_q; int sgpg_q; } ;
struct bfa_s {int dummy; } ;


 struct bfa_sgpg_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(struct bfa_s *VAR_0, struct bfa_sgpg_wqe_s *VAR_1, int VAR_2)
{
 struct bfa_sgpg_mod_s *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_2 <= 0);
 FUNC_1(VAR_2 <= VAR_3->free_sgpgs);

 VAR_1->nsgpg_total = VAR_1->nsgpg = VAR_2;




 if (VAR_3->free_sgpgs) {



  FUNC_1(!FUNC_3(&VAR_3->sgpg_wait_q));
  FUNC_4(&VAR_3->sgpg_q, &VAR_1->sgpg_q);
  VAR_1->nsgpg -= VAR_3->free_sgpgs;
  VAR_3->free_sgpgs = 0;
 }

 FUNC_2(&VAR_1->qe, &VAR_3->sgpg_wait_q);
}
