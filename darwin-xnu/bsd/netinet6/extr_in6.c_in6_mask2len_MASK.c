
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct in6_addr {int dummy; } ;



int
FUNC_0(struct in6_addr *VAR_0, u_char *VAR_1)
{
 int VAR_2 = 0, VAR_3;
 u_char *VAR_4 = VAR_1, *VAR_5;


 if (VAR_1 == ((void*)0) || VAR_1 - (u_char *)VAR_0 > sizeof (*VAR_0))
  VAR_4 = (u_char *)VAR_0 + sizeof (*VAR_0);
 for (VAR_5 = (u_char *)VAR_0; VAR_5 < VAR_4; VAR_2++, VAR_5++) {
  if (*VAR_5 != 0xff)
   break;
 }
 VAR_3 = 0;
 if (VAR_5 < VAR_4) {
  for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
   if ((*VAR_5 & (0x80 >> VAR_3)) == 0)
    break;
  }
 }





 if (VAR_5 < VAR_4) {
  if (VAR_3 != 0 && (*VAR_5 & (0x00ff >> VAR_3)) != 0)
   return (-1);
  for (VAR_5 = VAR_5 + 1; VAR_5 < VAR_4; VAR_5++)
   if (*VAR_5 != 0)
    return (-1);
 }

 return (VAR_2 * 8 + VAR_3);
}
