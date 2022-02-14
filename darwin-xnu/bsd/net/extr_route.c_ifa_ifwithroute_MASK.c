
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct ifaddr {int dummy; } ;


 struct ifaddr* FUNC_0 (int,struct sockaddr const*,struct sockaddr const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

struct ifaddr *
FUNC_3(
 int VAR_1,
 const struct sockaddr *VAR_2,
 const struct sockaddr *VAR_3)
{
 struct ifaddr *VAR_4;

 FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_0);

 return (VAR_4);
}
