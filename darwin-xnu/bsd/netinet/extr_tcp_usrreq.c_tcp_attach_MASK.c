
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcpcb {int t_state; } ;
struct TYPE_4__ {scalar_t__ sb_hiwat; scalar_t__ sb_preconn_hiwat; int sb_flags; } ;
struct TYPE_3__ {scalar_t__ sb_hiwat; int sb_flags; } ;
struct socket {int so_state; TYPE_2__ so_snd; TYPE_1__ so_rcv; } ;
struct proc {int dummy; } ;
struct inpcb {int in6p_hops; int inp_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct socket*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (struct socket*,int *,struct proc*) ;
 int FUNC_3 (struct inpcb*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct socket*,int ,int ) ;
 int FUNC_6 (struct socket*,int) ;
 struct inpcb* FUNC_7 (struct socket*) ;
 int VAR_9 ;
 struct tcpcb* FUNC_8 (struct inpcb*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_9(struct socket *VAR_12, struct proc *VAR_13)
{
 struct tcpcb *VAR_14;
 struct inpcb *VAR_15;
 int VAR_16;




 VAR_16 = FUNC_2(VAR_12, &VAR_9, VAR_13);
 if (VAR_16)
  return (VAR_16);

 VAR_15 = FUNC_7(VAR_12);

 if (VAR_12->so_snd.sb_hiwat == 0 || VAR_12->so_rcv.sb_hiwat == 0) {
  VAR_16 = FUNC_5(VAR_12, VAR_11, VAR_10);
  if (VAR_16)
   return (VAR_16);
 }

 if (VAR_12->so_snd.sb_preconn_hiwat == 0) {
  FUNC_6(VAR_12, 2048);
 }

 if ((VAR_12->so_rcv.sb_flags & VAR_5) == 0)
  VAR_12->so_rcv.sb_flags |= VAR_4;
 if ((VAR_12->so_snd.sb_flags & VAR_5) == 0)
  VAR_12->so_snd.sb_flags |= VAR_4;
 VAR_15->inp_vflag |= VAR_1;
 VAR_14 = FUNC_8(VAR_15);
 if (VAR_14 == ((void*)0)) {
  int VAR_17 = VAR_12->so_state & VAR_6;

  VAR_12->so_state &= ~VAR_6;





  FUNC_3(VAR_15);
  VAR_12->so_state |= VAR_17;
  return (VAR_0);
 }
 if (VAR_8)
  FUNC_4(VAR_15);
 VAR_14->t_state = VAR_7;
 return (0);
}
