
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {int t_rxtshift; } ;
struct mptsub {int mpts_socket; } ;
struct mptses {scalar_t__ mpte_svctype; scalar_t__ mpte_reinjectq; } ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ sb_cc; } ;
struct TYPE_4__ {TYPE_1__ so_snd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct mptses*) ;
 struct tcpcb* FUNC_1 (int ) ;

boolean_t
FUNC_2(struct mptses *VAR_2, struct mptsub *VAR_3)
{
 struct tcpcb *VAR_4 = FUNC_1(VAR_3->mpts_socket);
 int VAR_5 = VAR_1;

 if (VAR_2->mpte_svctype == VAR_0)
  VAR_5 *= 2;

 return (VAR_4->t_rxtshift >= VAR_5 &&
  (FUNC_0(VAR_2)->so_snd.sb_cc || VAR_2->mpte_reinjectq));
}
