
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct tcpcb {scalar_t__ snd_max; int t_flags; } ;
struct TYPE_2__ {int sb_flags; scalar_t__ sb_cc; } ;
struct socket {TYPE_1__ so_snd; } ;
struct inpcb {int dummy; } ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcpcb* FUNC_0 (struct inpcb*) ;
 struct inpcb* FUNC_1 (struct socket*) ;

inline int32_t
FUNC_2(struct socket *VAR_2, u_int32_t VAR_3)
{
 struct inpcb *VAR_4 = FUNC_1(VAR_2);
 struct tcpcb *VAR_5 = FUNC_0(VAR_4);

 if ((VAR_2->so_snd.sb_flags & VAR_0) &&
     VAR_2->so_snd.sb_cc > 0) {
  int32_t VAR_6, VAR_7;
  VAR_7 = VAR_5->snd_max - VAR_3;
  if (VAR_5->t_flags & VAR_1)
   VAR_7--;
  VAR_6 = VAR_2->so_snd.sb_cc - VAR_7;
  return (VAR_6);
 }
 return (0);
}
