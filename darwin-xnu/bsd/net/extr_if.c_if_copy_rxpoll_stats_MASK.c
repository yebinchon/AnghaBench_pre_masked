
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ifnet {int if_eflags; TYPE_1__* if_inp; } ;
struct if_rxpoll_stats {int dummy; } ;
struct TYPE_2__ {int pstats; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct if_rxpoll_stats*,int) ;
 int FUNC_2 (struct if_rxpoll_stats*,int) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*,int) ;

void
FUNC_5(struct ifnet *VAR_1, struct if_rxpoll_stats *VAR_2)
{
 FUNC_2(VAR_2, sizeof (*VAR_2));
 if (!(VAR_1->if_eflags & VAR_0) || !FUNC_4(VAR_1, 1))
  return;


 FUNC_0(VAR_1->if_inp != ((void*)0));
 FUNC_1(&VAR_1->if_inp->pstats, VAR_2, sizeof (*VAR_2));


 FUNC_3(VAR_1);
}
