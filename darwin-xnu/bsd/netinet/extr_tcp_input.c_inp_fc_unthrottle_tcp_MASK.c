
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {scalar_t__ t_bytes_acked; int t_flagsext; int snd_ssthresh; int snd_cwnd; } ;
struct inpcb {struct tcpcb* inp_ppcb; } ;
struct TYPE_2__ {int (* pre_fr ) (struct tcpcb*) ;} ;


 TYPE_1__* FUNC_0 (struct tcpcb*) ;
 int FUNC_1 (struct tcpcb*) ;
 int VAR_0 ;
 int FUNC_2 (struct tcpcb*) ;
 int FUNC_3 (struct tcpcb*) ;

void
FUNC_4(struct inpcb *VAR_1)
{
 struct tcpcb *VAR_2 = VAR_1->inp_ppcb;




 if (FUNC_0(VAR_2)->pre_fr != ((void*)0))
  FUNC_0(VAR_2)->pre_fr(VAR_2);

 VAR_2->snd_cwnd = VAR_2->snd_ssthresh;
 VAR_2->t_flagsext &= ~VAR_0;




 VAR_2->t_bytes_acked = 0;






 FUNC_1(VAR_2);






 FUNC_3(VAR_2);
}
