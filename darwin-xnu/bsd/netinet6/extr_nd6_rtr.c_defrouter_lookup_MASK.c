
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int rtaddr; struct ifnet* ifp; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 scalar_t__ FUNC_0 (struct in6_addr*,int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct nd_defrouter*) ;
 int FUNC_3 (struct nd_defrouter*) ;
 int FUNC_4 (struct nd_defrouter*) ;
 struct nd_defrouter* FUNC_5 (int *) ;
 struct nd_defrouter* FUNC_6 (struct nd_defrouter*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

struct nd_defrouter *
FUNC_7(
 struct in6_addr *VAR_4,
 struct ifnet *VAR_5)
{
 struct nd_defrouter *VAR_6;

 FUNC_1(VAR_2, VAR_0);

 for (VAR_6 = FUNC_5(&VAR_3); VAR_6;
     VAR_6 = FUNC_6(VAR_6, VAR_1)) {
  FUNC_3(VAR_6);
  if (VAR_6->ifp == VAR_5 && FUNC_0(VAR_4, &VAR_6->rtaddr)) {
   FUNC_2(VAR_6);
   FUNC_4(VAR_6);
   return (VAR_6);
  }
  FUNC_4(VAR_6);
 }

 return (((void*)0));
}
