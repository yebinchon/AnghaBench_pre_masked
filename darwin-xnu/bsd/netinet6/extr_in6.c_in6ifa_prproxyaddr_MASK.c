
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_ifaddr {int ia_ifa; struct in6_ifaddr* ia_next; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct in6_addr*,int ) ;
 int VAR_0 ;
 struct in6_ifaddr* VAR_1 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct in6_ifaddr*) ;

struct in6_ifaddr *
FUNC_9(struct in6_addr *VAR_2)
{
 struct in6_ifaddr *VAR_3;

 FUNC_7(&VAR_0);
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->ia_next) {
  FUNC_2(&VAR_3->ia_ifa);
  if (FUNC_5(VAR_2, FUNC_1(&VAR_3->ia_ifa))) {
   FUNC_0(&VAR_3->ia_ifa);
   FUNC_4(&VAR_3->ia_ifa);
   break;
  }
  FUNC_4(&VAR_3->ia_ifa);
 }
 FUNC_6(&VAR_0);

 if (VAR_3 != ((void*)0) && !FUNC_8(VAR_3)) {
  FUNC_3(&VAR_3->ia_ifa);
  VAR_3 = ((void*)0);
 }

 return (VAR_3);
}
