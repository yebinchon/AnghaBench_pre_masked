
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct in6_addr {scalar_t__* s6_addr16; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; struct in6_addr sin6_addr; } ;
struct ifnet {scalar_t__ if_index; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct in6_addr const*) ;
 scalar_t__ FUNC_1 (struct in6_addr const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;

int
FUNC_3(
 struct sockaddr_in6 *VAR_2,
 const struct in6_addr *VAR_3,
 struct ifnet *VAR_4)
{
 u_int32_t VAR_5;

 VAR_2->sin6_addr = *VAR_3;






 VAR_2->sin6_scope_id = 0;
 if (FUNC_1(VAR_3) || FUNC_0(VAR_3)) {



  VAR_5 = FUNC_2(VAR_2->sin6_addr.s6_addr16[1]);
  if (VAR_5) {






   if (VAR_1 < VAR_5)
    return (VAR_0);
   if (VAR_4 && VAR_4->if_index != VAR_5)
    return (VAR_0);
   VAR_2->sin6_addr.s6_addr16[1] = 0;
   VAR_2->sin6_scope_id = VAR_5;
  }
 }

 return (0);
}
