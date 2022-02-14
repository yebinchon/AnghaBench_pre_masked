
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {int snd_ssthresh; TYPE_2__* t_inpcb; } ;
struct sockbuf {int sb_flags; int sb_idealsize; int sb_hiwat; } ;
struct TYPE_4__ {TYPE_1__* inp_socket; } ;
struct TYPE_3__ {struct sockbuf so_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sockbuf*,int ) ;

void FUNC_1(struct tcpcb *VAR_2)
{
 struct sockbuf *VAR_3;





 VAR_3 = &VAR_2->t_inpcb->inp_socket->so_snd;
 if (VAR_3->sb_hiwat > VAR_2->snd_ssthresh &&
  (VAR_3->sb_flags & VAR_0)) {
  if (VAR_3->sb_idealsize > VAR_2->snd_ssthresh) {
   FUNC_0(VAR_3, VAR_2->snd_ssthresh);
  }
  VAR_3->sb_flags |= VAR_1;
 }
}
