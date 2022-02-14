
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct curl_slist {char* data; struct curl_slist* next; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_7__ {scalar_t__ te; scalar_t__ host; } ;
struct TYPE_6__ {scalar_t__ authneg; int tunnel_proxy; scalar_t__ httpproxy; } ;
struct connectdata {int httpversion; TYPE_5__ host; TYPE_2__ allocptr; TYPE_1__ bits; struct Curl_easy* data; } ;
struct TYPE_9__ {scalar_t__ first_host; scalar_t__ this_is_a_follow; } ;
struct TYPE_8__ {scalar_t__ httpreq; int allow_auth_to_other_hosts; struct curl_slist* headers; struct curl_slist* proxyheaders; int sep_headers; } ;
struct Curl_easy {TYPE_4__ state; TYPE_3__ set; } ;
typedef enum proxy_use { ____Placeholder_proxy_use } proxy_use ;
typedef int Curl_send_buffer ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int **,char*,char*) ;



 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__,int ) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*) ;

CURLcode FUNC_8(struct connectdata *VAR_4,
                                 bool VAR_5,
                                 Curl_send_buffer *VAR_6)
{
  char *VAR_7;
  struct curl_slist *VAR_8[2];
  struct curl_slist *VAR_9;
  int VAR_10 = 1;
  struct Curl_easy *VAR_11 = VAR_4->data;
  int VAR_12;

  enum proxy_use VAR_13;

  if(VAR_5)
    VAR_13 = 130;
  else
    VAR_13 = VAR_4->bits.httpproxy && !VAR_4->bits.tunnel_proxy?
      129:128;

  switch(VAR_13) {
  case 128:
    VAR_8[0] = VAR_11->set.headers;
    break;
  case 129:
    VAR_8[0] = VAR_11->set.headers;
    if(VAR_11->set.sep_headers) {
      VAR_8[1] = VAR_11->set.proxyheaders;
      VAR_10++;
    }
    break;
  case 130:
    if(VAR_11->set.sep_headers)
      VAR_8[0] = VAR_11->set.proxyheaders;
    else
      VAR_8[0] = VAR_11->set.headers;
    break;
  }


  for(VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
    VAR_9 = VAR_8[VAR_12];

    while(VAR_9) {
      char *VAR_14 = ((void*)0);
      VAR_7 = FUNC_6(VAR_9->data, ':');
      if(!VAR_7) {
        char *VAR_15;

        VAR_7 = FUNC_6(VAR_9->data, ';');
        if(VAR_7) {
          VAR_15 = VAR_7;
          VAR_7++;
          while(*VAR_7 && FUNC_2(*VAR_7))
            VAR_7++;

          if(*VAR_7) {

            VAR_15 = ((void*)0);
          }
          else {
            if(*(--VAR_7) == ';') {

              VAR_14 = FUNC_7(VAR_9->data);
              if(!VAR_14) {
                FUNC_0(&VAR_6);
                return VAR_1;
              }

              VAR_14[VAR_7 - VAR_9->data] = ':';

              VAR_15 = &VAR_14 [VAR_7 - VAR_9->data];
            }
          }
          VAR_7 = VAR_15;
        }
      }
      if(VAR_7) {


        VAR_7++;
        while(*VAR_7 && FUNC_2(*VAR_7))
          VAR_7++;

        if(*VAR_7 || VAR_14) {

          CURLcode VAR_16 = VAR_0;
          char *VAR_17 = VAR_14 ? VAR_14 : VAR_9->data;

          if(VAR_4->allocptr.host &&


             FUNC_3("Host:", VAR_17))
            ;
          else if(VAR_11->set.httpreq == VAR_2 &&

                  FUNC_3("Content-Type:", VAR_17))
            ;
          else if(VAR_11->set.httpreq == VAR_3 &&

                  FUNC_3("Content-Type:", VAR_17))
            ;
          else if(VAR_4->bits.authneg &&


                  FUNC_3("Content-Length:", VAR_17))
            ;
          else if(VAR_4->allocptr.te &&


                  FUNC_3("Connection:", VAR_17))
            ;
          else if((VAR_4->httpversion >= 20) &&
                  FUNC_3("Transfer-Encoding:", VAR_17))

            ;
          else if((FUNC_3("Authorization:", VAR_17) ||
                   FUNC_3("Cookie:", VAR_17)) &&


                  (VAR_11->state.this_is_a_follow &&
                   VAR_11->state.first_host &&
                   !VAR_11->set.allow_auth_to_other_hosts &&
                   !FUNC_5(VAR_11->state.first_host, VAR_4->host.name)))
            ;
          else {
            VAR_16 = FUNC_1(&VAR_6, "%s\r\n", VAR_17);
          }
          if(VAR_14)
            FUNC_4(VAR_14);
          if(VAR_16)
            return VAR_16;
        }
      }
      VAR_9 = VAR_9->next;
    }
  }

  return VAR_0;
}
