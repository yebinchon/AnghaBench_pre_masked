
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* user; } ;
struct TYPE_3__ {scalar_t__ user_passwd; scalar_t__ proxy_user_passwd; } ;
struct connectdata {char* user; TYPE_2__ http_proxy; scalar_t__ oauth_bearer; TYPE_1__ bits; struct Curl_easy* data; } ;
struct auth {scalar_t__ picked; void* multipass; void* done; } ;
struct Curl_easy {int dummy; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct connectdata*,char*) ;
 int FUNC_1 (struct connectdata*,char*) ;
 scalar_t__ FUNC_2 (struct connectdata*,int,unsigned char const*,unsigned char const*) ;
 scalar_t__ FUNC_3 (struct connectdata*,int) ;
 scalar_t__ FUNC_4 (struct connectdata*,int) ;
 scalar_t__ FUNC_5 (struct connectdata*,int) ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_6 (struct connectdata*,int) ;
 scalar_t__ FUNC_7 (struct connectdata*) ;
 int FUNC_8 (struct Curl_easy*,char*,char*,char const*,char*) ;

__attribute__((used)) static CURLcode
FUNC_9(struct connectdata *VAR_9,
                    struct auth *VAR_10,
                    const char *VAR_11,
                    const char *VAR_12,
                    bool VAR_13)
{
  const char *VAR_14 = ((void*)0);
  CURLcode VAR_15 = VAR_6;

  struct Curl_easy *VAR_16 = VAR_9->data;
  if(VAR_10->picked == VAR_2) {
    VAR_14 = "Digest";
    VAR_15 = FUNC_2(VAR_9,
                                VAR_13,
                                (const unsigned char *)VAR_11,
                                (const unsigned char *)VAR_12);
    if(VAR_15)
      return VAR_15;
  }
  else

  if(VAR_10->picked == VAR_0) {

    if((VAR_13 && VAR_9->bits.proxy_user_passwd &&
        !FUNC_0(VAR_9, "Proxy-authorization")) ||
       (!VAR_13 && VAR_9->bits.user_passwd &&
        !FUNC_1(VAR_9, "Authorization"))) {
      VAR_14 = "Basic";
      VAR_15 = FUNC_6(VAR_9, VAR_13);
      if(VAR_15)
        return VAR_15;
    }



    VAR_10->done = VAR_8;
  }
  if(VAR_10->picked == VAR_1) {

    if((!VAR_13 && VAR_9->oauth_bearer &&
        !FUNC_1(VAR_9, "Authorization:"))) {
      VAR_14 = "Bearer";
      VAR_15 = FUNC_7(VAR_9);
      if(VAR_15)
        return VAR_15;
    }



    VAR_10->done = VAR_8;
  }

  if(VAR_14) {
    FUNC_8(VAR_16, "%s auth using %s with user '%s'\n",
          VAR_13 ? "Proxy" : "Server", VAR_14,
          VAR_13 ? (VAR_9->http_proxy.user ? VAR_9->http_proxy.user : "") :
                  (VAR_9->user ? VAR_9->user : ""));
    VAR_10->multipass = (!VAR_10->done) ? VAR_8 : VAR_7;
  }
  else
    VAR_10->multipass = VAR_7;

  return VAR_6;
}
