
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct tcpcb {int t_pipeack; int t_flagsext; int snd_cwnd; TYPE_2__* t_inpcb; } ;
struct TYPE_3__ {scalar_t__ sb_cc; } ;
struct socket {TYPE_1__ so_snd; } ;
struct TYPE_4__ {struct socket* inp_socket; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

inline uint32_t
FUNC_0(struct tcpcb *VAR_2)
{
 struct socket *VAR_3 = VAR_2->t_inpcb->inp_socket;
 if (VAR_2->t_pipeack == 0 || VAR_1 == 0) {
  VAR_2->t_flagsext &= ~VAR_0;
  return (0);
 }






 if (VAR_2->t_pipeack >= (VAR_2->snd_cwnd >> 1) ||
     (VAR_3 != ((void*)0) && VAR_3->so_snd.sb_cc > VAR_2->snd_cwnd))
  VAR_2->t_flagsext &= ~VAR_0;
 else
  VAR_2->t_flagsext |= VAR_0;
 return (VAR_2->t_flagsext & VAR_0);
}
