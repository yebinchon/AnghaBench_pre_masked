
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tqe_prev; int * tqe_next; } ;
struct ifnet {TYPE_1__ if_ordered_link; } ;


 int FUNC_0 (int *,struct ifnet*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;

void
FUNC_3(struct ifnet *VAR_3)
{
 FUNC_2();


 FUNC_0(&VAR_2, VAR_3, VAR_1);
 VAR_3->if_ordered_link.tqe_next = ((void*)0);
 VAR_3->if_ordered_link.tqe_prev = ((void*)0);


 FUNC_1(VAR_0 > 0);
 VAR_0--;
}
