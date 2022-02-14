
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrs {int dummy; } ;


 struct ifaddrs* FUNC_0 () ;

int FUNC_1(struct ifaddrs **VAR_0)
{
   if (!VAR_0)
      return -1;
   *VAR_0 = FUNC_0();

   return (*VAR_0 == ((void*)0)) ? -1 : 0;
}
