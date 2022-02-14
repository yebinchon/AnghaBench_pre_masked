
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; int sin_addr; } ;
struct route_in6 {int dummy; } ;
struct route {int ro_dst; } ;
struct pfi_kif {TYPE_1__* pfik_ifp; } ;
struct pf_addr {int v6addr; int v4addr; } ;
typedef int sa_family_t ;
typedef int ro ;
struct TYPE_2__ {scalar_t__ if_type; } ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (struct route*) ;
 int FUNC_1 (struct route*,int) ;
 int FUNC_2 (struct route*) ;
 struct sockaddr_in* FUNC_3 (int *) ;

int
FUNC_4(struct pf_addr *VAR_1, sa_family_t VAR_2, struct pfi_kif *VAR_3)
{
#pragma unused(kif)
 struct sockaddr_in *VAR_4;
 int VAR_5 = 1;




 struct route VAR_6;


 FUNC_1(&VAR_6, sizeof (VAR_6));
 switch (VAR_2) {
 case 129:
  VAR_4 = FUNC_3(&VAR_6.ro_dst);
  VAR_4->sin_family = 129;
  VAR_4->sin_len = sizeof (*VAR_4);
  VAR_4->sin_addr = VAR_1->v4addr;
  break;
 default:
  return (0);
 }



 if (VAR_3 != ((void*)0) && VAR_3->pfik_ifp->if_type == VAR_0)
  goto out;


 FUNC_2((struct route *)&VAR_6);

out:
 FUNC_0(&VAR_6);
 return (VAR_5);
}
