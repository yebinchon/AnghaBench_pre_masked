
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {TYPE_1__* t_inpcb; int snd_wnd; } ;
struct mptcb {int mpt_flags; int mpt_snduna; int mpt_sndwl2; int mpt_rcvnxt; int mpt_sndwl1; int mpt_sndwnd; int mpt_mpte; } ;
struct TYPE_2__ {int inp_socket; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mptcb* FUNC_2 (struct tcpcb*) ;

void
FUNC_3(struct tcpcb *VAR_1)
{
 struct mptcb *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->mpt_mpte);

 if (VAR_2->mpt_flags & VAR_0) {
  VAR_2->mpt_sndwnd = VAR_1->snd_wnd;
  VAR_2->mpt_sndwl1 = VAR_2->mpt_rcvnxt;
  VAR_2->mpt_sndwl2 = VAR_2->mpt_snduna;
 }

 FUNC_1(VAR_1->t_inpcb->inp_socket);
}
