
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_4__ {int sin6_family; int sin6_len; } ;
struct TYPE_3__ {int sin6_family; } ;
struct in6_aliasreq {TYPE_2__ ifra_dstaddr; TYPE_1__ ifra_addr; } ;
struct ifnet {int dummy; } ;
typedef int caddr_t ;
typedef int boolean_t ;


 int VAR_0 ;


 int FUNC_0 (int ) ;
 struct in6_aliasreq* FUNC_1 (int ,int,struct in6_aliasreq*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int *,struct in6_aliasreq*) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(struct ifnet *VAR_1, u_long VAR_2, caddr_t VAR_3)
{
 struct in6_aliasreq VAR_4, *VAR_5 = ((void*)0);
 boolean_t VAR_6;
 int VAR_7 = 0;

 FUNC_0(VAR_1 != ((void*)0));

 switch (VAR_2) {
 case 129:
 case 128:
  VAR_6 = (VAR_2 == 128);






  VAR_5 = FUNC_1(VAR_3, VAR_6, &VAR_4);






  if (VAR_5->ifra_addr.sin6_family == VAR_0 &&

      (VAR_5->ifra_dstaddr.sin6_len == 0 ||
      VAR_5->ifra_dstaddr.sin6_family == VAR_0)) {

   VAR_7 = FUNC_3(VAR_1, ((void*)0), VAR_5);
  } else {
   VAR_7 = FUNC_3(VAR_1, ((void*)0), ((void*)0));
  }
  if (VAR_7 == 0)
   FUNC_2(VAR_1);
  break;

 default:
  FUNC_0(0);

 }

 return (VAR_7);
}
