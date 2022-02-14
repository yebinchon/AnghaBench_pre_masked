
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int sin6_addr; } ;
struct TYPE_3__ {int sin6_addr; } ;
struct in6_ifaddr {int ia_ifa; TYPE_2__ ia_prefixmask; TYPE_1__ ia_addr; struct in6_ifaddr* ia_next; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct in6_addr*,int *,int *) ;
 scalar_t__ FUNC_3 (struct in6_addr*) ;
 scalar_t__ FUNC_4 (struct in6_addr*) ;
 int VAR_0 ;
 struct in6_ifaddr* VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct in6_addr *VAR_2)
{
 struct in6_ifaddr *VAR_3;

 if (FUNC_4(VAR_2) || FUNC_3(VAR_2))
  return (1);

 FUNC_6(&VAR_0);
 for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->ia_next) {
  FUNC_0(&VAR_3->ia_ifa);
  if (FUNC_2(VAR_2, &VAR_3->ia_addr.sin6_addr,
      &VAR_3->ia_prefixmask.sin6_addr)) {
   FUNC_1(&VAR_3->ia_ifa);
   FUNC_5(&VAR_0);
   return (1);
  }
  FUNC_1(&VAR_3->ia_ifa);
 }
 FUNC_5(&VAR_0);
 return (0);
}
