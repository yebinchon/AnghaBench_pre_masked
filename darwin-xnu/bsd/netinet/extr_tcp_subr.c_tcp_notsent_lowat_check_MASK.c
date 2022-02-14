
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {int snd_nxt; int snd_una; int t_notsent_lowat; int t_flags; int t_maxseg; } ;
struct TYPE_2__ {int sb_cc; } ;
struct socket {TYPE_1__ so_snd; } ;
struct inpcb {int dummy; } ;


 int VAR_0 ;
 struct tcpcb* FUNC_0 (struct inpcb*) ;
 struct inpcb* FUNC_1 (struct socket*) ;

int
FUNC_2(struct socket *VAR_1)
{
 struct inpcb *VAR_2 = FUNC_1(VAR_1);
 struct tcpcb *VAR_3 = ((void*)0);
 int VAR_4 = 0;

 if (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_0(VAR_2);
 }

 if (VAR_3 == ((void*)0)) {
  return (0);
 }

 VAR_4 = VAR_1->so_snd.sb_cc -
  (VAR_3->snd_nxt - VAR_3->snd_una);







 if (VAR_4 <= VAR_3->t_notsent_lowat) {
  return (1);
 }






 if ((VAR_3->t_flags & VAR_0) == 0 &&
  VAR_4 > 0 && VAR_4 < VAR_3->t_maxseg) {
  return (1);
 }
 return (0);
}
