
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ sb_hiwat; int sb_flags; } ;
struct TYPE_3__ {scalar_t__ sb_hiwat; scalar_t__ sb_preconn_hiwat; int sb_flags; } ;
struct socket {TYPE_2__ so_rcv; TYPE_1__ so_snd; } ;
struct proc {int dummy; } ;
struct mptses {struct mptcb* mpte_mptcb; } ;
struct mptcb {int dummy; } ;
struct mppcb {scalar_t__ mpp_pcbe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct socket*,int *) ;
 struct mppcb* FUNC_2 (struct socket*) ;
 int VAR_3 ;
 int FUNC_3 (struct socket*,int ,int ) ;
 int FUNC_4 (struct socket*,int) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_6, struct proc *VAR_7)
{
#pragma unused(p)
 struct mptses *VAR_8 = ((void*)0);
 struct mptcb *VAR_9 = ((void*)0);
 struct mppcb *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 if (VAR_6->so_snd.sb_hiwat == 0 || VAR_6->so_rcv.sb_hiwat == 0) {
  VAR_11 = FUNC_3(VAR_6, VAR_5, VAR_4);
  if (VAR_11 != 0)
   goto out;
 }

 if (VAR_6->so_snd.sb_preconn_hiwat == 0) {
  FUNC_4(VAR_6, 2048);
 }

 if ((VAR_6->so_rcv.sb_flags & VAR_2) == 0)
  VAR_6->so_rcv.sb_flags |= VAR_0;
 if ((VAR_6->so_snd.sb_flags & VAR_2) == 0)
  VAR_6->so_snd.sb_flags |= VAR_0;






 VAR_6->so_snd.sb_flags |= VAR_1;
 VAR_6->so_rcv.sb_flags |= VAR_1;

 if ((VAR_11 = FUNC_1(VAR_6, &VAR_3)) != 0) {
  goto out;
 }

 VAR_10 = FUNC_2(VAR_6);
 FUNC_0(VAR_10 != ((void*)0));
 VAR_8 = (struct mptses *)VAR_10->mpp_pcbe;
 FUNC_0(VAR_8 != ((void*)0));
 VAR_9 = VAR_8->mpte_mptcb;
 FUNC_0(VAR_9 != ((void*)0));
out:
 return (VAR_11);
}
