
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct mptses {struct mptcb* mpte_mptcb; TYPE_1__* mpte_mppcb; } ;
struct mptcb {int mpt_notsent_lowat; } ;
struct TYPE_2__ {int mpp_flags; } ;


 int VAR_0 ;

u_int32_t
FUNC_0(struct mptses *VAR_1)
{
 struct mptcb *VAR_2 = ((void*)0);

 if (VAR_1->mpte_mppcb->mpp_flags & VAR_0)
  VAR_2 = VAR_1->mpte_mptcb;

 if (VAR_2)
  return (VAR_2->mpt_notsent_lowat);
 else
  return (0);
}
