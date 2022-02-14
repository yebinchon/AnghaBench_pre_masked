
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct mptsub {struct mptses* mpts_mpte; } ;
struct mptses {TYPE_1__* mpte_mppcb; } ;
struct TYPE_2__ {int mpp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mptses*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct socket *VAR_2, void *VAR_3, int VAR_4)
{
#pragma unused(so, waitf)
 struct mptsub *VAR_5 = VAR_3;
 struct mptses *VAR_6 = VAR_5->mpts_mpte;

 FUNC_0(VAR_6 != ((void*)0));

 if (FUNC_2(VAR_6->mpte_mppcb)) {
  if (!(VAR_6->mpte_mppcb->mpp_flags & VAR_1))
   VAR_6->mpte_mppcb->mpp_flags |= VAR_0;
  return;
 }

 FUNC_1(VAR_6);
}
