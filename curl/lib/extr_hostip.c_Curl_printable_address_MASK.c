
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {struct in6_addr sin6_addr; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {struct in_addr sin_addr; } ;
struct TYPE_3__ {int ai_family; scalar_t__ ai_addr; } ;
typedef TYPE_1__ Curl_addrinfo ;




 char const* FUNC_0 (int,void const*,char*,size_t) ;

const char *
FUNC_1(const Curl_addrinfo *VAR_0, char *VAR_1, size_t VAR_2)
{
  const struct sockaddr_in *VAR_3;
  const struct in_addr *VAR_4;





  switch(VAR_0->ai_family) {
    case 129:
      VAR_3 = (const void *)VAR_0->ai_addr;
      VAR_4 = &VAR_3->sin_addr;
      return FUNC_0(VAR_0->ai_family, (const void *)VAR_4, VAR_1,
                            VAR_2);







    default:
      break;
  }
  return ((void*)0);
}
