
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {char* rawalloc; char* name; } ;
struct proxy_info {char* user; char* passwd; long port; TYPE_3__ host; scalar_t__ proxytype; } ;
struct TYPE_5__ {int proxy_user_passwd; } ;
struct connectdata {long port; struct proxy_info socks_proxy; TYPE_1__ bits; struct proxy_info http_proxy; } ;
struct TYPE_6__ {long proxyport; } ;
struct Curl_easy {TYPE_2__ set; } ;
typedef scalar_t__ curl_proxytype ;
struct TYPE_8__ {int supports; } ;
typedef int CURLcode ;
typedef scalar_t__ CURLUcode ;
typedef int CURLU ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 long VAR_19 ;
 long VAR_20 ;
 int FUNC_0 (char*) ;
 TYPE_4__* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,char**,int ) ;
 scalar_t__ FUNC_4 (int *,int ,char*,int) ;
 int FUNC_5 (struct Curl_easy*,char*,char*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;
 size_t FUNC_9 (char*) ;
 long FUNC_10 (char*,int *,int) ;
 int FUNC_11 (int *,struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_12(struct Curl_easy *VAR_24,
                            struct connectdata *VAR_25, char *VAR_26,
                            curl_proxytype VAR_27)
{
  char *VAR_28 = ((void*)0);
  long VAR_29 = -1;
  char *VAR_30 = ((void*)0);
  char *VAR_31 = ((void*)0);
  char *VAR_32;
  bool VAR_33;
  CURLUcode VAR_34;
  struct proxy_info *VAR_35;
  CURLU *VAR_36 = FUNC_1();
  CURLcode VAR_37 = VAR_3;
  char *VAR_38 = ((void*)0);



  VAR_34 = FUNC_4(VAR_36, VAR_14, VAR_26,
                    VAR_17|VAR_16);
  if(!VAR_34) {

    VAR_34 = FUNC_3(VAR_36, VAR_13, &VAR_38, 0);
    if(VAR_34) {
      VAR_37 = VAR_4;
      goto error;
    }

    if(FUNC_7("https", VAR_38))
      VAR_27 = VAR_5;
    else if(FUNC_7("socks5h", VAR_38))
      VAR_27 = VAR_9;
    else if(FUNC_7("socks5", VAR_38))
      VAR_27 = VAR_8;
    else if(FUNC_7("socks4a", VAR_38))
      VAR_27 = VAR_7;
    else if(FUNC_7("socks4", VAR_38) ||
            FUNC_7("socks", VAR_38))
      VAR_27 = VAR_6;
    else if(FUNC_7("http", VAR_38))
      ;
    else {

      FUNC_5(VAR_24, "Unsupported proxy scheme for \'%s\'", VAR_26);
      VAR_37 = VAR_0;
      goto error;
    }
  }
  else {
    FUNC_5(VAR_24, "Unsupported proxy syntax in \'%s\'", VAR_26);
    VAR_37 = VAR_1;
    goto error;
  }




    if(VAR_27 == VAR_5) {
      FUNC_5(VAR_24, "Unsupported proxy \'%s\', libcurl is built without the "
                  "HTTPS-proxy support.", VAR_26);
      VAR_37 = VAR_2;
      goto error;
    }

  VAR_33 =
    VAR_27 == VAR_9 ||
    VAR_27 == VAR_8 ||
    VAR_27 == VAR_7 ||
    VAR_27 == VAR_6;

  VAR_35 = VAR_33 ? &VAR_25->socks_proxy : &VAR_25->http_proxy;
  VAR_35->proxytype = VAR_27;


  FUNC_3(VAR_36, VAR_15, &VAR_30, VAR_18);
  FUNC_3(VAR_36, VAR_11, &VAR_31, VAR_18);
  if(VAR_30 || VAR_31) {
    FUNC_0(VAR_35->user);
    VAR_35->user = VAR_30;
    FUNC_0(VAR_35->passwd);
    if(!VAR_31) {
      VAR_31 = FUNC_8("");
      if(!VAR_31) {
        VAR_37 = VAR_4;
        goto error;
      }
    }
    VAR_35->passwd = VAR_31;
    VAR_25->bits.proxy_user_passwd = VAR_23;
  }

  FUNC_3(VAR_36, VAR_12, &VAR_28, 0);

  if(VAR_28) {
    VAR_29 = FUNC_10(VAR_28, ((void*)0), 10);
    FUNC_6(VAR_28);
  }
  else {
    if(VAR_24->set.proxyport)


      VAR_29 = VAR_24->set.proxyport;
    else {
      if(VAR_27 == VAR_5)
        VAR_29 = VAR_19;
      else
        VAR_29 = VAR_20;
    }
  }
  if(VAR_29 >= 0) {
    VAR_35->port = VAR_29;
    if(VAR_25->port < 0 || VAR_33 || !VAR_25->socks_proxy.host.rawalloc)
      VAR_25->port = VAR_29;
  }


  VAR_34 = FUNC_3(VAR_36, VAR_10, &VAR_32, VAR_18);
  if(VAR_34) {
    VAR_37 = VAR_4;
    goto error;
  }
  FUNC_0(VAR_35->host.rawalloc);
  VAR_35->host.rawalloc = VAR_32;
  if(VAR_32[0] == '[') {

    size_t VAR_39 = FUNC_9(VAR_32);
    VAR_32[VAR_39-1] = 0;
    VAR_32++;
    FUNC_11(VAR_36, VAR_25);
  }
  VAR_35->host.name = VAR_32;

  error:
  FUNC_6(VAR_38);
  FUNC_2(VAR_36);
  return VAR_37;
}
