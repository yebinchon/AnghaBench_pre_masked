
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {scalar_t__ t_state; int t_maxseg; int snd_cwnd; scalar_t__ snd_una; scalar_t__ snd_max; int * t_ccstate; } ;


 int FUNC_0 (struct tcpcb*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*) ;

__attribute__((used)) static void
FUNC_4(struct tcpcb *VAR_1)
{
 FUNC_1(VAR_1->t_ccstate != ((void*)0));






 if (VAR_1->t_state < VAR_0 &&
     ((int)(VAR_1->snd_max - VAR_1->snd_una) <= 1))
  return;

 if (!FUNC_0(VAR_1)) {
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
 }





 VAR_1->snd_cwnd = VAR_1->t_maxseg;
}
