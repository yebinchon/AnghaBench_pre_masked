
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef int * ifaddr_t ;


 int * FUNC_0 (int,struct sockaddr const*,struct sockaddr const*) ;

ifaddr_t
FUNC_1(int VAR_0, const struct sockaddr *VAR_1,
    const struct sockaddr *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (((void*)0));

 return (FUNC_0(VAR_0, VAR_1, VAR_2));
}
