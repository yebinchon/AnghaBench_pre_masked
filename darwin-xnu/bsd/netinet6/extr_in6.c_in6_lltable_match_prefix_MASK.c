
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {struct in6_addr addr6; } ;
struct llentry {int la_flags; TYPE_1__ r_l3addr; } ;


 scalar_t__ FUNC_0 (struct in6_addr const*,struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*,struct in6_addr const*,struct in6_addr const*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const struct sockaddr *VAR_2,
  const struct sockaddr *VAR_3, u_int VAR_4, struct llentry *VAR_5)
{
 const struct in6_addr *VAR_6, *VAR_7, *VAR_8;

 VAR_6 = &((const struct sockaddr_in6 *)(const void *)VAR_2)->sin6_addr;
 VAR_7 = &((const struct sockaddr_in6 *)(const void *)VAR_3)->sin6_addr;
 VAR_8 = &VAR_5->r_l3addr.addr6;

 if (FUNC_1(VAR_8, VAR_6, VAR_7) == 0)
  return (0);

 if (VAR_5->la_flags & VAR_0) {





  if (FUNC_0(VAR_6, VAR_8) &&
    (VAR_4 & VAR_1) != 0)
   return (1);
  return (0);
 }


 if ((VAR_4 & VAR_1) || !(VAR_5->la_flags & VAR_1))
  return (1);

 return (0);
}
