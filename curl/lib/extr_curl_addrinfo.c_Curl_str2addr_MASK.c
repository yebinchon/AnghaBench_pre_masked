
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
typedef struct in_addr in6_addr ;
typedef int Curl_addrinfo ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,struct in_addr*) ;
 int * FUNC_1 (int ,struct in_addr*,char*,int) ;

Curl_addrinfo *FUNC_2(char *VAR_2, int VAR_3)
{
  struct in_addr VAR_4;
  if(FUNC_0(VAR_0, VAR_2, &VAR_4) > 0)

    return FUNC_1(VAR_0, &VAR_4, VAR_2, VAR_3);
  return ((void*)0);
}
