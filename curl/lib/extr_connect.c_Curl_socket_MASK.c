
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_scope_id; } ;
struct curl_sockaddr {int dummy; } ;
struct connectdata {scalar_t__ transport; scalar_t__ scope_id; struct Curl_easy* data; } ;
struct Curl_sockaddr_storage {int dummy; } ;
struct Curl_sockaddr_ex {scalar_t__ family; int addrlen; int sa_addr; int protocol; int socktype; } ;
struct TYPE_4__ {scalar_t__ (* fopensocket ) (int ,int ,struct curl_sockaddr*) ;int opensocket_client; } ;
struct Curl_easy {TYPE_1__ set; } ;
typedef scalar_t__ curl_socket_t ;
struct TYPE_5__ {scalar_t__ ai_family; int ai_addrlen; int ai_addr; int ai_protocol; } ;
typedef TYPE_2__ Curl_addrinfo ;
typedef int CURLcode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct Curl_easy*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,struct curl_sockaddr*) ;

CURLcode FUNC_5(struct connectdata *VAR_11,
                     const Curl_addrinfo *VAR_12,
                     struct Curl_sockaddr_ex *VAR_13,
                     curl_socket_t *VAR_14)
{
  struct Curl_easy *VAR_15 = VAR_11->data;
  struct Curl_sockaddr_ex VAR_16;

  if(!VAR_13)

    VAR_13 = &VAR_16;
  VAR_13->family = VAR_12->ai_family;
  VAR_13->socktype = (VAR_11->transport == VAR_9) ? VAR_7 : VAR_6;
  VAR_13->protocol = VAR_11->transport != VAR_9 ? VAR_5 :
    VAR_12->ai_protocol;
  VAR_13->addrlen = VAR_12->ai_addrlen;

  if(VAR_13->addrlen > sizeof(struct Curl_sockaddr_storage))
     VAR_13->addrlen = sizeof(struct Curl_sockaddr_storage);
  FUNC_2(&VAR_13->sa_addr, VAR_12->ai_addr, VAR_13->addrlen);

  if(VAR_15->set.fopensocket) {
    FUNC_0(VAR_15, 1);
    *VAR_14 = VAR_15->set.fopensocket(VAR_15->set.opensocket_client,
                                    VAR_3,
                                    (struct curl_sockaddr *)VAR_13);
    FUNC_0(VAR_15, 0);
  }
  else

    *VAR_14 = FUNC_3(VAR_13->family, VAR_13->socktype, VAR_13->protocol);

  if(*VAR_14 == VAR_4)

    return VAR_1;

  if(VAR_11->transport == VAR_8) {

    (void)FUNC_1(*VAR_14, VAR_10);
  }
  return VAR_2;

}
