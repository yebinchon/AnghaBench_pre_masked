
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int name; } ;
struct TYPE_5__ {scalar_t__ tunnel_proxy; scalar_t__ netrc; scalar_t__ httpproxy; scalar_t__ user_passwd; scalar_t__ proxy_user_passwd; } ;
struct connectdata {TYPE_4__ host; TYPE_1__ bits; scalar_t__ oauth_bearer; struct Curl_easy* data; } ;
struct auth {void* done; scalar_t__ want; scalar_t__ picked; } ;
struct TYPE_7__ {int first_host; int this_is_a_follow; struct auth authproxy; struct auth authhost; } ;
struct TYPE_6__ {scalar_t__ allow_auth_to_other_hosts; } ;
struct Curl_easy {TYPE_3__ state; TYPE_2__ set; } ;
typedef scalar_t__ bit ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct Curl_easy*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (struct connectdata*,struct auth*,char const*,char const*,void*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

CURLcode
FUNC_3(struct connectdata *VAR_3,
                      const char *VAR_4,
                      const char *VAR_5,
                      bool VAR_6)

{
  CURLcode VAR_7 = VAR_0;
  struct Curl_easy *VAR_8 = VAR_3->data;
  struct auth *VAR_9;
  struct auth *VAR_10;

  FUNC_0(VAR_8);

  VAR_9 = &VAR_8->state.authhost;
  VAR_10 = &VAR_8->state.authproxy;

  if((VAR_3->bits.httpproxy && VAR_3->bits.proxy_user_passwd) ||
     VAR_3->bits.user_passwd || VAR_3->oauth_bearer)
                         ;
  else {
    VAR_9->done = VAR_2;
    VAR_10->done = VAR_2;
    return VAR_0;
  }

  if(VAR_9->want && !VAR_9->picked)



    VAR_9->picked = VAR_9->want;

  if(VAR_10->want && !VAR_10->picked)



    VAR_10->picked = VAR_10->want;



  if(VAR_3->bits.httpproxy &&
     (VAR_3->bits.tunnel_proxy == (bit)VAR_6)) {
    VAR_7 = FUNC_1(VAR_3, VAR_10, VAR_4, VAR_5, VAR_2);
    if(VAR_7)
      return VAR_7;
  }
  else





    VAR_10->done = VAR_2;



  if(!VAR_8->state.this_is_a_follow ||
     VAR_3->bits.netrc ||
     !VAR_8->state.first_host ||
     VAR_8->set.allow_auth_to_other_hosts ||
     FUNC_2(VAR_8->state.first_host, VAR_3->host.name)) {
    VAR_7 = FUNC_1(VAR_3, VAR_9, VAR_4, VAR_5, VAR_1);
  }
  else
    VAR_9->done = VAR_2;

  return VAR_7;
}
