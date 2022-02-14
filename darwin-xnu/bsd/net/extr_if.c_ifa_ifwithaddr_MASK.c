
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct ifaddr {int dummy; } ;


 struct ifaddr* FUNC_0 (struct sockaddr const*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

struct ifaddr *
FUNC_3(const struct sockaddr *VAR_0)
{
 struct ifaddr *VAR_1 = ((void*)0);

 FUNC_2();

 VAR_1 = FUNC_0(VAR_0);

 FUNC_1();

 return (VAR_1);
}
