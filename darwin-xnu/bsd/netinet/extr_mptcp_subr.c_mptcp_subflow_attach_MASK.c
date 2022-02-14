
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcpcb {struct mptsub* t_mpsub; int t_mptcb; } ;
struct socket {int so_usecount; int so_flags; } ;
struct mptsub {struct socket* mpts_socket; struct mptses* mpts_mpte; int mpts_flags; } ;
struct mptses {int mpte_numflows; int mpte_subflows; int mpte_mptcb; TYPE_1__* mpte_mppcb; } ;
struct TYPE_2__ {struct socket* mpp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mptsub*,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mptsub*) ;
 int VAR_2 ;
 struct tcpcb* FUNC_3 (struct socket*) ;

__attribute__((used)) static void
FUNC_4(struct mptses *VAR_3, struct mptsub *VAR_4, struct socket *VAR_5)
{
 struct socket *VAR_6 = VAR_3->mpte_mppcb->mpp_socket;
 struct tcpcb *VAR_7 = FUNC_3(VAR_5);





 VAR_7->t_mptcb = VAR_3->mpte_mptcb;
 VAR_5->so_flags |= VAR_1;
 VAR_6->so_usecount++;






 FUNC_0(&VAR_3->mpte_subflows, VAR_4, VAR_2);
 VAR_3->mpte_numflows++;

 FUNC_1(&VAR_4->mpts_flags, VAR_0);
 VAR_4->mpts_mpte = VAR_3;
 VAR_4->mpts_socket = VAR_5;
 VAR_7->t_mpsub = VAR_4;
 FUNC_2(VAR_4);
 FUNC_2(VAR_4);
}
