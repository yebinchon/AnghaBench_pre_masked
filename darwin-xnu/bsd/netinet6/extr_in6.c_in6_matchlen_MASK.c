
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in6_addr {int dummy; } ;



int
FUNC_0(struct in6_addr *VAR_0, struct in6_addr *VAR_1)
{
 int VAR_2 = 0;
 u_char *VAR_3 = (u_char *)VAR_0, *VAR_4 = (u_char *)VAR_1;
 u_char *VAR_5 = VAR_3 + 16, VAR_6;

 while (VAR_3 < VAR_5)
  if ((VAR_6 = (*VAR_4++ ^ *VAR_3++)) != 0) {
   while (VAR_6 < 128) {
    VAR_2++;
    VAR_6 <<= 1;
   }
   break;
  } else
   VAR_2 += 8;
 return (VAR_2);
}
