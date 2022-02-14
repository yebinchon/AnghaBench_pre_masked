
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int * ifnet_t ;
typedef int * ifaddr_t ;


 int * FUNC_0 (struct sockaddr const*,int *) ;

ifaddr_t
FUNC_1(const struct sockaddr *VAR_0, ifnet_t VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (((void*)0));

 return (FUNC_0(VAR_0, VAR_1));
}
