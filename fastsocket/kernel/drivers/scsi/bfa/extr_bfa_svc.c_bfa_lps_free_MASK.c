
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_lps_s {int qe; scalar_t__ lp_pid; int bfa; } ;
struct bfa_lps_mod_s {int lps_free_q; } ;


 struct bfa_lps_mod_s* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct bfa_lps_s *VAR_0)
{
 struct bfa_lps_mod_s *VAR_1 = FUNC_0(VAR_0->bfa);

 VAR_0->lp_pid = 0;
 FUNC_2(&VAR_0->qe);
 FUNC_1(&VAR_0->qe, &VAR_1->lps_free_q);
}
