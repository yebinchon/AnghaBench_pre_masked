
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {void* sin6_port; void* sin6_family; int sin6_addr; } ;
struct sockaddr_in {void* sin_port; void* sin_family; int sin_addr; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct hostent {char** h_addr_list; scalar_t__ h_addrtype; int * h_name; } ;
typedef scalar_t__ curl_socklen_t ;
struct TYPE_6__ {scalar_t__ ai_family; void* ai_addr; scalar_t__ ai_addrlen; int ai_socktype; struct TYPE_6__* ai_next; struct TYPE_6__* ai_canonname; } ;
typedef TYPE_1__ Curl_addrinfo ;
typedef scalar_t__ CURLcode ;
typedef void* CURL_SA_FAMILY_T ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 void* FUNC_2 (int,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 void* FUNC_4 (unsigned short) ;
 int FUNC_5 (int *,char*,int) ;
 TYPE_1__* FUNC_6 (int *) ;

Curl_addrinfo *
FUNC_7(const struct hostent *VAR_3, int VAR_4)
{
  Curl_addrinfo *VAR_5;
  Curl_addrinfo *VAR_6 = ((void*)0);
  Curl_addrinfo *VAR_7 = ((void*)0);
  struct sockaddr_in *VAR_8;



  CURLcode VAR_9 = VAR_0;
  int VAR_10;
  char *VAR_11;

  if(!VAR_3)

    return ((void*)0);

  FUNC_1((VAR_3->h_name != ((void*)0)) && (VAR_3->h_addr_list != ((void*)0)));

  for(VAR_10 = 0; (VAR_11 = VAR_3->h_addr_list[VAR_10]) != ((void*)0); VAR_10++) {

    size_t VAR_12;





      VAR_12 = sizeof(struct sockaddr_in);

    VAR_5 = FUNC_2(1, sizeof(Curl_addrinfo));
    if(!VAR_5) {
      VAR_9 = VAR_1;
      break;
    }
    VAR_5->ai_canonname = FUNC_6(VAR_3->h_name);
    if(!VAR_5->ai_canonname) {
      VAR_9 = VAR_1;
      FUNC_3(VAR_5);
      break;
    }
    VAR_5->ai_addr = FUNC_2(1, VAR_12);
    if(!VAR_5->ai_addr) {
      VAR_9 = VAR_1;
      FUNC_3(VAR_5->ai_canonname);
      FUNC_3(VAR_5);
      break;
    }

    if(!VAR_7)

      VAR_7 = VAR_5;

    if(VAR_6)

      VAR_6->ai_next = VAR_5;

    VAR_5->ai_family = VAR_3->h_addrtype;



    VAR_5->ai_socktype = VAR_2;

    VAR_5->ai_addrlen = (curl_socklen_t)VAR_12;



    switch(VAR_5->ai_family) {
    case 129:
      VAR_8 = (void *)VAR_5->ai_addr;

      FUNC_5(&VAR_8->sin_addr, VAR_11, sizeof(struct in_addr));
      VAR_8->sin_family = (CURL_SA_FAMILY_T)(VAR_3->h_addrtype);
      VAR_8->sin_port = FUNC_4((unsigned short)VAR_4);
      break;
    }

    VAR_6 = VAR_5;
  }

  if(VAR_9) {
    FUNC_0(VAR_7);
    VAR_7 = ((void*)0);
  }

  return VAR_7;
}
