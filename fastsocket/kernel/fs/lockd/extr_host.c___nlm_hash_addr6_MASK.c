
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int * s6_addr32; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct sockaddr {int dummy; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static unsigned int FUNC_1(const struct sockaddr *VAR_0)
{
 const struct sockaddr_in6 *VAR_1 = (struct sockaddr_in6 *)VAR_0;
 const struct in6_addr VAR_2 = VAR_1->sin6_addr;
 return FUNC_0(VAR_2.s6_addr32[0]) ^
        FUNC_0(VAR_2.s6_addr32[1]) ^
        FUNC_0(VAR_2.s6_addr32[2]) ^
        FUNC_0(VAR_2.s6_addr32[3]);
}
