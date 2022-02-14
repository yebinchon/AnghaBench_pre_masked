
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_sgpg_wqe_s {void (* cbfn ) (void*) ;void* cbarg; int sgpg_q; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct bfa_sgpg_wqe_s *VAR_0, void (*VAR_1) (void *VAR_2),
     void *VAR_3)
{
 FUNC_0(&VAR_0->sgpg_q);
 VAR_0->cbfn = VAR_1;
 VAR_0->cbarg = VAR_3;
}
