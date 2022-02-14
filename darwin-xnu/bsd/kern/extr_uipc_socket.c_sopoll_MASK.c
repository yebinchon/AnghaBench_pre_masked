
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sb_sel; int sb_flags; } ;
struct TYPE_3__ {int sb_sel; int sb_flags; } ;
struct socket {int so_state; TYPE_2__ so_snd; TYPE_1__ so_rcv; scalar_t__ so_oobmark; } ;
struct proc {int dummy; } ;
typedef int kauth_cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct proc* FUNC_0 () ;
 int FUNC_1 (struct proc*,int *,void*) ;
 int FUNC_2 (struct socket*,int ) ;
 int FUNC_3 (struct socket*) ;
 int FUNC_4 (struct socket*,int) ;
 int FUNC_5 (struct socket*,int) ;
 scalar_t__ FUNC_6 (struct socket*) ;
 scalar_t__ FUNC_7 (struct socket*) ;

int
FUNC_8(struct socket *VAR_9, int VAR_10, kauth_cred_t VAR_11, void * VAR_12)
{
#pragma unused(cred)
 struct proc *VAR_13 = FUNC_0();
 int VAR_14 = 0;

 FUNC_4(VAR_9, 1);
 FUNC_2(VAR_9, VAR_6);
 FUNC_3(VAR_9);

 if (VAR_10 & (VAR_0 | VAR_4))
  if (FUNC_6(VAR_9))
   VAR_14 |= VAR_10 & (VAR_0 | VAR_4);

 if (VAR_10 & (VAR_1 | VAR_5))
  if (FUNC_7(VAR_9))
   VAR_14 |= VAR_10 & (VAR_1 | VAR_5);

 if (VAR_10 & (VAR_2 | VAR_3))
  if (VAR_9->so_oobmark || (VAR_9->so_state & VAR_8))
   VAR_14 |= VAR_10 & (VAR_2 | VAR_3);

 if (VAR_14 == 0) {
  if (VAR_10 & (VAR_0 | VAR_2 | VAR_4 | VAR_3)) {




   VAR_9->so_rcv.sb_flags |= VAR_7;
   FUNC_1(VAR_13, &VAR_9->so_rcv.sb_sel, VAR_12);
  }

  if (VAR_10 & (VAR_1 | VAR_5)) {




   VAR_9->so_snd.sb_flags |= VAR_7;
   FUNC_1(VAR_13, &VAR_9->so_snd.sb_sel, VAR_12);
  }
 }

 FUNC_5(VAR_9, 1);
 return (VAR_14);
}
