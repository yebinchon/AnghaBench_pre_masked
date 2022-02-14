
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr8; } ;


 int FUNC_0 (struct in6_addr*,int) ;

void
FUNC_1(struct in6_addr *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_0, sizeof (*VAR_0));
 for (VAR_2 = 0; VAR_2 < VAR_1 / 8; VAR_2++)
  VAR_0->s6_addr8[VAR_2] = 0xff;
 if (VAR_1 % 8)
  VAR_0->s6_addr8[VAR_2] = (0xff00 >> (VAR_1 % 8)) & 0xff;
}
