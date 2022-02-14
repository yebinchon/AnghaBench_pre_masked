
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct socket {int dummy; } ;
struct mptsub {int mpts_evctl; struct mptses* mpts_mpte; } ;
struct mptses {TYPE_1__* mpte_mppcb; } ;
struct TYPE_2__ {int mpp_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mptses*) ;
 int FUNC_3 (struct mptses*) ;

__attribute__((used)) static void
FUNC_4(struct socket *VAR_1, void *VAR_2, uint32_t VAR_3)
{
#pragma unused(so)
 struct mptsub *VAR_4 = VAR_2;
 struct mptses *VAR_5 = VAR_4->mpts_mpte;

 FUNC_0(VAR_5 != ((void*)0));
 FUNC_3(VAR_5);

 if ((VAR_4->mpts_evctl & VAR_3) == VAR_3)
  return;

 VAR_4->mpts_evctl |= VAR_3;

 if (FUNC_1(VAR_5->mpte_mppcb)) {
  VAR_5->mpte_mppcb->mpp_flags |= VAR_0;
  return;
 }

 FUNC_2(VAR_5);
}
