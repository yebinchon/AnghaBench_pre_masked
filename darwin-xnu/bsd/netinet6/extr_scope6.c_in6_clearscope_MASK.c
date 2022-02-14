
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr16; } ;


 scalar_t__ FUNC_0 (struct in6_addr*) ;
 scalar_t__ FUNC_1 (struct in6_addr*) ;

int
FUNC_2(struct in6_addr *VAR_0)
{
 int VAR_1 = 0;

 if (FUNC_1(VAR_0) || FUNC_0(VAR_0)) {
  if (VAR_0->s6_addr16[1] != 0)
   VAR_1 = 1;
  VAR_0->s6_addr16[1] = 0;
 }

 return (VAR_1);
}
