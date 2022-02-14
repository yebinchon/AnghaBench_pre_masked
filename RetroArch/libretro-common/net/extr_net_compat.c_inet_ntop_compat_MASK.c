
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin_family; int sin6_family; int sin6_addr; int sin_addr; } ;
struct sockaddr_in {int sin_family; int sin6_family; int sin6_addr; int sin_addr; } ;
struct sockaddr {int dummy; } ;
struct in_addr6_compat {int dummy; } ;
struct in_addr {int dummy; } ;
typedef int socklen_t ;
typedef int in ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr*,int,char*,int ,int *,int ,int ) ;
 char const* FUNC_1 (int,void const*,char*,int ) ;
 char const* FUNC_2 (int,void const*,char*,int ) ;
 int FUNC_3 (int *,void const*,int) ;
 int FUNC_4 (struct sockaddr_in6*,int ,int) ;
 char const* FUNC_5 (int,void const*,char*,int ) ;

const char *FUNC_6(int VAR_3, const void *VAR_4, char *VAR_5, socklen_t VAR_6)
{
   return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

}
