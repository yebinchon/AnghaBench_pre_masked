
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct in6_cgareq {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int caddr_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,struct in6_cgareq*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,struct in6_cgareq*) ;

__attribute__((used)) static __attribute__((noinline)) int
FUNC_4(struct ifnet *VAR_0, u_long VAR_1, caddr_t VAR_2)
{
 struct in6_cgareq VAR_3;
 int VAR_4, VAR_5 = 0;

 FUNC_0(VAR_0 != ((void*)0));

 switch (VAR_1) {
 case 129:
 case 128:
  VAR_4 = (VAR_1 == 128);






  FUNC_1(VAR_2, VAR_4, &VAR_3);







  VAR_5 = FUNC_3(VAR_0, &VAR_3);
  if (VAR_5 == 0)
   FUNC_2(VAR_0);
  break;

 default:
  FUNC_0(0);

 }

 return (VAR_5);
}
