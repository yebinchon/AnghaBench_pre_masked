
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct bfa_sgpg_wqe_s {int nsgpg; int cbarg; int (* cbfn ) (int ) ;int qe; int sgpg_q; } ;
struct bfa_sgpg_mod_s {int free_sgpgs; int num_sgpgs; int sgpg_wait_q; int sgpg_q; } ;
struct bfa_s {int dummy; } ;


 struct bfa_sgpg_mod_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (int) ;
 struct bfa_sgpg_wqe_s* FUNC_2 (int *) ;
 int FUNC_3 (struct bfa_s*,int *,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct list_head*,int *) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct bfa_s *VAR_0, struct list_head *VAR_1, int VAR_2)
{
 struct bfa_sgpg_mod_s *VAR_3 = FUNC_0(VAR_0);
 struct bfa_sgpg_wqe_s *VAR_4;

 VAR_3->free_sgpgs += VAR_2;
 FUNC_1(VAR_3->free_sgpgs > VAR_3->num_sgpgs);

 FUNC_6(VAR_1, &VAR_3->sgpg_q);

 if (FUNC_5(&VAR_3->sgpg_wait_q))
  return;




 do {
  VAR_4 = FUNC_2(&VAR_3->sgpg_wait_q);
  if (VAR_3->free_sgpgs < VAR_4->nsgpg)
   VAR_2 = VAR_3->free_sgpgs;
  else
   VAR_2 = VAR_4->nsgpg;
  FUNC_3(VAR_0, &VAR_4->sgpg_q, VAR_2);
  VAR_4->nsgpg -= VAR_2;
  if (VAR_4->nsgpg == 0) {
   FUNC_4(&VAR_4->qe);
   VAR_4->cbfn(VAR_4->cbarg);
  }
 } while (VAR_3->free_sgpgs && !FUNC_5(&VAR_3->sgpg_wait_q));
}
