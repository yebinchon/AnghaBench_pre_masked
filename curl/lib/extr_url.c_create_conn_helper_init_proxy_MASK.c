
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {int proxy_user_passwd; int proxy; void* tunnel_proxy; void* socksproxy; void* httpproxy; } ;
struct TYPE_12__ {scalar_t__ rawalloc; } ;
struct TYPE_14__ {char* passwd; int * user; TYPE_4__ host; int proxytype; } ;
struct TYPE_11__ {scalar_t__ rawalloc; } ;
struct TYPE_13__ {char* passwd; int * user; TYPE_3__ host; int proxytype; } ;
struct TYPE_9__ {int name; } ;
struct connectdata {TYPE_7__ bits; TYPE_6__ http_proxy; TYPE_5__ socks_proxy; TYPE_8__* handler; scalar_t__ unix_domain_socket; TYPE_1__ host; struct Curl_easy* data; } ;
struct TYPE_10__ {char** str; } ;
struct Curl_easy {TYPE_2__ set; } ;
struct TYPE_16__ {int flags; int protocol; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_8__ VAR_3 ;
 int FUNC_0 (char*) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 void* VAR_11 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct Curl_easy*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct Curl_easy*,char*,char const*,char*) ;
 scalar_t__ FUNC_7 (struct Curl_easy*,struct connectdata*,char*,int ) ;
 scalar_t__ FUNC_8 (struct Curl_easy*,struct connectdata*) ;
 char* FUNC_9 (char*) ;

__attribute__((used)) static CURLcode FUNC_10(struct connectdata *VAR_12)
{
  char *VAR_13 = ((void*)0);
  char *VAR_14 = ((void*)0);
  char *VAR_15 = ((void*)0);
  CURLcode VAR_16 = VAR_0;
  struct Curl_easy *VAR_17 = VAR_12->data;




  if(VAR_12->bits.proxy_user_passwd) {
    VAR_16 = FUNC_8(VAR_17, VAR_12);
    if(VAR_16)
      goto out;
  }




  if(VAR_17->set.str[VAR_10]) {
    VAR_13 = FUNC_9(VAR_17->set.str[VAR_10]);

    if(((void*)0) == VAR_13) {
      FUNC_4(VAR_17, "memory shortage");
      VAR_16 = VAR_1;
      goto out;
    }
  }

  if(VAR_17->set.str[VAR_9]) {
    VAR_14 = FUNC_9(VAR_17->set.str[VAR_9]);

    if(((void*)0) == VAR_14) {
      FUNC_4(VAR_17, "memory shortage");
      VAR_16 = VAR_1;
      goto out;
    }
  }

  if(!VAR_17->set.str[VAR_8]) {
    const char *VAR_18 = "no_proxy";
    VAR_15 = FUNC_2(VAR_18);
    if(!VAR_15) {
      VAR_18 = "NO_PROXY";
      VAR_15 = FUNC_2(VAR_18);
    }
    if(VAR_15) {
      FUNC_6(VAR_12->data, "Uses proxy env variable %s == '%s'\n", VAR_18, VAR_15);
    }
  }

  if(FUNC_1(VAR_12->host.name, VAR_17->set.str[VAR_8] ?
      VAR_17->set.str[VAR_8] : VAR_15)) {
    FUNC_0(VAR_13);
    FUNC_0(VAR_14);
  }

  else if(!VAR_13 && !VAR_14)

    VAR_13 = FUNC_3(VAR_12);


  FUNC_0(VAR_15);
  if(VAR_13 && (!*VAR_13 || (VAR_12->handler->flags & VAR_5))) {
    FUNC_5(VAR_13);

    VAR_13 = ((void*)0);
  }
  if(VAR_14 && (!*VAR_14 ||
                    (VAR_12->handler->flags & VAR_5))) {
    FUNC_5(VAR_14);

    VAR_14 = ((void*)0);
  }






  if(VAR_13 || VAR_14) {
    if(VAR_13) {
      VAR_16 = FUNC_7(VAR_17, VAR_12, VAR_13, VAR_12->http_proxy.proxytype);
      FUNC_0(VAR_13);
      if(VAR_16)
        goto out;
    }

    if(VAR_14) {
      VAR_16 = FUNC_7(VAR_17, VAR_12, VAR_14,
                           VAR_12->socks_proxy.proxytype);

      FUNC_0(VAR_14);
      if(VAR_16)
        goto out;
    }

    if(VAR_12->http_proxy.host.rawalloc) {






      if(!(VAR_12->handler->protocol & VAR_7)) {
        if((VAR_12->handler->flags & VAR_6) &&
           !VAR_12->bits.tunnel_proxy)
          VAR_12->handler = &VAR_3;
        else

          VAR_12->bits.tunnel_proxy = VAR_11;
      }
      VAR_12->bits.httpproxy = VAR_11;

    }
    else {
      VAR_12->bits.httpproxy = VAR_4;
      VAR_12->bits.tunnel_proxy = VAR_4;
    }

    if(VAR_12->socks_proxy.host.rawalloc) {
      if(!VAR_12->http_proxy.host.rawalloc) {

        if(!VAR_12->socks_proxy.user) {
          VAR_12->socks_proxy.user = VAR_12->http_proxy.user;
          VAR_12->http_proxy.user = ((void*)0);
          FUNC_0(VAR_12->socks_proxy.passwd);
          VAR_12->socks_proxy.passwd = VAR_12->http_proxy.passwd;
          VAR_12->http_proxy.passwd = ((void*)0);
        }
      }
      VAR_12->bits.socksproxy = VAR_11;
    }
    else
      VAR_12->bits.socksproxy = VAR_4;
  }
  else {
    VAR_12->bits.socksproxy = VAR_4;
    VAR_12->bits.httpproxy = VAR_4;
  }
  VAR_12->bits.proxy = VAR_12->bits.httpproxy || VAR_12->bits.socksproxy;

  if(!VAR_12->bits.proxy) {

    VAR_12->bits.proxy = VAR_4;
    VAR_12->bits.httpproxy = VAR_4;
    VAR_12->bits.socksproxy = VAR_4;
    VAR_12->bits.proxy_user_passwd = VAR_4;
    VAR_12->bits.tunnel_proxy = VAR_4;
  }

out:

  FUNC_5(VAR_14);
  FUNC_5(VAR_13);
  return VAR_16;
}
