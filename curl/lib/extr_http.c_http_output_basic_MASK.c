
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* proxyuserpwd; char* userpwd; } ;
struct TYPE_3__ {char* user; char* passwd; } ;
struct connectdata {char* user; char* passwd; TYPE_2__ allocptr; TYPE_1__ http_proxy; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct Curl_easy*,char*,int ,char**,size_t*) ;
 char* FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_2, bool VAR_3)
{
  size_t VAR_4 = 0;
  char *VAR_5 = ((void*)0);
  struct Curl_easy *VAR_6 = VAR_2->data;
  char **VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  CURLcode VAR_10;
  char *VAR_11;

  if(VAR_3) {
    VAR_7 = &VAR_2->allocptr.proxyuserpwd;
    VAR_8 = VAR_2->http_proxy.user;
    VAR_9 = VAR_2->http_proxy.passwd;
  }
  else {
    VAR_7 = &VAR_2->allocptr.userpwd;
    VAR_8 = VAR_2->user;
    VAR_9 = VAR_2->passwd;
  }

  VAR_11 = FUNC_1("%s:%s", VAR_8, VAR_9);
  if(!VAR_11)
    return VAR_0;

  VAR_10 = FUNC_0(VAR_6, VAR_11, FUNC_3(VAR_11), &VAR_5, &VAR_4);
  if(VAR_10)
    goto fail;

  if(!VAR_5) {
    VAR_10 = VAR_1;
    goto fail;
  }

  FUNC_2(*VAR_7);
  *VAR_7 = FUNC_1("%sAuthorization: Basic %s\r\n",
                   VAR_3 ? "Proxy-" : "",
                   VAR_5);
  FUNC_2(VAR_5);
  if(!*VAR_7) {
    VAR_10 = VAR_0;
    goto fail;
  }

  fail:
  FUNC_2(VAR_11);
  return VAR_10;
}
