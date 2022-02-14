
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ lock; int status; int cbarg; int (* cbfn ) (int ,int ) ;} ;
struct bfa_dport_s {int dummy; } ;
struct bfa_fcdiag_s {TYPE_1__ lb; struct bfa_dport_s dport; } ;


 int VAR_0 ;
 struct bfa_fcdiag_s* FUNC_0 (struct bfa_s*) ;
 int VAR_1 ;
 int FUNC_1 (struct bfa_fcdiag_s*) ;
 int FUNC_2 (struct bfa_dport_s*,int ) ;
 int FUNC_3 (struct bfa_fcdiag_s*,scalar_t__) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct bfa_s *VAR_2)
{
 struct bfa_fcdiag_s *VAR_3 = FUNC_0(VAR_2);
 struct bfa_dport_s *VAR_4 = &VAR_3->dport;

 FUNC_3(VAR_3, VAR_3->lb.lock);
 if (VAR_3->lb.lock) {
  VAR_3->lb.status = VAR_1;
  VAR_3->lb.cbfn(VAR_3->lb.cbarg, VAR_3->lb.status);
  VAR_3->lb.lock = 0;
  FUNC_1(VAR_3);
 }

 FUNC_2(VAR_4, VAR_0);
}
