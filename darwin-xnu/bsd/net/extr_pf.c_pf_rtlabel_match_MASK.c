
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_family; int sin6_len; int sin6_addr; } ;
struct sockaddr_in {int sin_family; int sin_len; int sin_addr; } ;
struct route_in6 {int dummy; } ;
struct route {int ro_dst; } ;
struct pf_addr_wrap {int dummy; } ;
struct pf_addr {int v6addr; int v4addr; } ;
typedef int sa_family_t ;
typedef int ro ;




 int FUNC_0 (struct route*) ;
 int FUNC_1 (struct route*,int) ;
 int FUNC_2 (struct route*) ;
 struct sockaddr_in* FUNC_3 (int *) ;

int
FUNC_4(struct pf_addr *VAR_0, sa_family_t VAR_1, struct pf_addr_wrap *VAR_2)
{
#pragma unused(aw)
 struct sockaddr_in *VAR_3;




 struct route VAR_4;

 int VAR_5 = 0;

 FUNC_1(&VAR_4, sizeof (VAR_4));
 switch (VAR_1) {
 case 129:
  VAR_3 = FUNC_3(&VAR_4.ro_dst);
  VAR_3->sin_family = 129;
  VAR_3->sin_len = sizeof (*VAR_3);
  VAR_3->sin_addr = VAR_0->v4addr;
  break;
 default:
  return (0);
 }


 FUNC_2((struct route *)&VAR_4);

 FUNC_0(&VAR_4);

 return (VAR_5);
}
