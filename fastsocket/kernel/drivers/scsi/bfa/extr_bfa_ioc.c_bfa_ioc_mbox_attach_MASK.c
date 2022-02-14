
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ioc_mbox_mod_s {TYPE_1__* mbhdlr; int cmd_q; } ;
struct bfa_ioc_s {int bfa; struct bfa_ioc_mbox_mod_s mbox_mod; } ;
struct TYPE_2__ {int cbarg; int * cbfn; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct bfa_ioc_s *VAR_1)
{
 struct bfa_ioc_mbox_mod_s *VAR_2 = &VAR_1->mbox_mod;
 int VAR_3;

 FUNC_0(&VAR_2->cmd_q);
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2->mbhdlr[VAR_3].cbfn = ((void*)0);
  VAR_2->mbhdlr[VAR_3].cbarg = VAR_1->bfa;
 }
}
