
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mptses {struct mptcb* mpte_mptcb; TYPE_1__* mpte_mppcb; } ;
struct mptcb {int mpt_notsent_lowat; } ;
struct TYPE_2__ {int mpp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct mptses *VAR_2, int VAR_3)
{
 struct mptcb *VAR_4 = ((void*)0);
 int VAR_5 = 0;

 if (VAR_2->mpte_mppcb->mpp_flags & VAR_1)
  VAR_4 = VAR_2->mpte_mptcb;

 if (VAR_4)
  VAR_4->mpt_notsent_lowat = VAR_3;
 else
  VAR_5 = VAR_0;

 return (VAR_5);
}
