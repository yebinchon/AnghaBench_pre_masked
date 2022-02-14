
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * tqe_prev; int * tqe_next; } ;
struct ifnet {TYPE_1__ if_detaching_link; } ;


 struct ifnet* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ifnet*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct ifnet *
FUNC_4(void)
{
 struct ifnet *VAR_3;

 FUNC_3();

 VAR_3 = FUNC_0(&VAR_2);
 FUNC_2(VAR_1 != 0 || VAR_3 == ((void*)0));
 if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_1 != 0);
  --VAR_1;
  FUNC_1(&VAR_2, VAR_3, VAR_0);
  VAR_3->if_detaching_link.tqe_next = ((void*)0);
  VAR_3->if_detaching_link.tqe_prev = ((void*)0);
 }
 return (VAR_3);
}
