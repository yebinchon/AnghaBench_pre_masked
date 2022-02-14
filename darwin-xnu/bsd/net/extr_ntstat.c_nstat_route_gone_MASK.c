
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; } ;
typedef scalar_t__ nstat_provider_cookie_t ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(
 nstat_provider_cookie_t VAR_1)
{
 struct rtentry *VAR_2 = (struct rtentry*)VAR_1;
 return ((VAR_2->rt_flags & VAR_0) == 0) ? 1 : 0;
}
