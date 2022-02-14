
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in {int dummy; } ;
struct TYPE_5__ {int ai_addrlen; int ai_family; struct TYPE_5__* ai_canonname; void* ai_addr; } ;
typedef TYPE_1__ Curl_addrinfo ;


 int VAR_0 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (char*) ;

__attribute__((used)) static Curl_addrinfo *FUNC_3(void)
{
  static Curl_addrinfo *VAR_1;

  VAR_1 = FUNC_0(1, sizeof(Curl_addrinfo));
  if(!VAR_1)
    return ((void*)0);

  VAR_1->ai_canonname = FUNC_2("dummy");
  if(!VAR_1->ai_canonname) {
    FUNC_1(VAR_1);
    return ((void*)0);
  }

  VAR_1->ai_addr = FUNC_0(1, sizeof(struct sockaddr_in));
  if(!VAR_1->ai_addr) {
    FUNC_1(VAR_1->ai_canonname);
    FUNC_1(VAR_1);
    return ((void*)0);
  }

  VAR_1->ai_family = VAR_0;
  VAR_1->ai_addrlen = sizeof(struct sockaddr_in);

  return VAR_1;
}
