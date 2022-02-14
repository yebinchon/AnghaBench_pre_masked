
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int trcmod; } ;
struct bfa_pcidev_s {int dummy; } ;
struct bfa_iocfc_cfg_s {int dummy; } ;
struct bfa_dport_s {int result; int test_state; int * cbarg; int * cbfn; int reqq_wait; struct bfa_s* bfa; } ;
struct bfa_fcdiag_s {int trcmod; struct bfa_s* bfa; struct bfa_dport_s dport; } ;
struct bfa_diag_dport_result_s {int dummy; } ;


 int VAR_0 ;
 struct bfa_fcdiag_s* FUNC_0 (struct bfa_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,struct bfa_dport_s*) ;
 int FUNC_2 (struct bfa_dport_s*,int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct bfa_s *VAR_3, void *VAR_4, struct bfa_iocfc_cfg_s *VAR_5,
  struct bfa_pcidev_s *VAR_6)
{
 struct bfa_fcdiag_s *VAR_7 = FUNC_0(VAR_3);
 struct bfa_dport_s *VAR_8 = &VAR_7->dport;

 VAR_7->bfa = VAR_3;
 VAR_7->trcmod = VAR_3->trcmod;

 VAR_8->bfa = VAR_3;
 FUNC_2(VAR_8, VAR_2);
 FUNC_1(&VAR_8->reqq_wait, VAR_1, VAR_8);
 VAR_8->cbfn = ((void*)0);
 VAR_8->cbarg = ((void*)0);
 VAR_8->test_state = VAR_0;
 FUNC_3(&VAR_8->result, 0, sizeof(struct bfa_diag_dport_result_s));
}
