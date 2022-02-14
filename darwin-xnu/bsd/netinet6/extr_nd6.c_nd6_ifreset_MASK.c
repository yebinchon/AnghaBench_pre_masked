
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_ifinfo {int initialized; int retrans; int basereachable; int reachable; int chlim; int linkmtu; int lock; } ;
struct ifnet {int if_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct nd_ifinfo* FUNC_2 (struct ifnet*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;

void
FUNC_4(struct ifnet *VAR_4)
{
 struct nd_ifinfo *VAR_5 = FUNC_2(VAR_4);
 FUNC_3(((void*)0) != VAR_5);
 FUNC_3(VAR_5->initialized);

 FUNC_0(&VAR_5->lock, VAR_1);
 VAR_5->linkmtu = VAR_4->if_mtu;
 VAR_5->chlim = VAR_0;
 VAR_5->basereachable = VAR_2;
 VAR_5->reachable = FUNC_1(VAR_5->basereachable);
 VAR_5->retrans = VAR_3;
}
