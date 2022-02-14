
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct WildcardData {scalar_t__ state; } ;
struct TYPE_13__ {int want; int picked; } ;
struct TYPE_12__ {int want; int picked; } ;
struct TYPE_14__ {int infilesize; scalar_t__ wildcardmatch; TYPE_6__ authproxy; TYPE_5__ authhost; int prev_signal; int allow_port; void* authproblem; scalar_t__ httpversion; void* errorbuf; void* this_is_a_follow; } ;
struct TYPE_8__ {int max_ssl_sessions; } ;
struct TYPE_11__ {scalar_t__ httpreq; int filesize; int postfieldsize; int no_signal; scalar_t__ postfields; int proxyauth; int httpauth; scalar_t__ followlocation; scalar_t__ wildcard_enabled; TYPE_1__ general_ssl; int ** str; scalar_t__ uh; } ;
struct TYPE_10__ {scalar_t__ resolve; scalar_t__ cookielist; int * url; void* url_alloc; } ;
struct TYPE_9__ {int * wouldredirect; } ;
struct Curl_easy {TYPE_7__ state; struct WildcardData wildcard; TYPE_4__ set; TYPE_3__ change; TYPE_2__ info; } ;
typedef int curl_off_t ;
typedef scalar_t__ CURLcode ;
typedef scalar_t__ CURLUcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct Curl_easy*) ;
 int FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (struct Curl_easy*) ;
 scalar_t__ FUNC_3 (struct Curl_easy*) ;
 int FUNC_4 (struct Curl_easy*) ;
 int FUNC_5 (struct Curl_easy*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct Curl_easy*,int ) ;
 scalar_t__ FUNC_8 (struct WildcardData*) ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (scalar_t__,int ,int **,int ) ;
 int FUNC_10 (struct Curl_easy*,char*) ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__) ;

CURLcode FUNC_13(struct Curl_easy *VAR_12)
{
  CURLcode VAR_13;

  if(!VAR_12->change.url && !VAR_12->set.uh) {

    FUNC_10(VAR_12, "No URL set!");
    return VAR_1;
  }


  if(VAR_12->change.url_alloc) {

    FUNC_6(VAR_12->change.url);
    VAR_12->change.url_alloc = VAR_4;
  }

  if(!VAR_12->change.url && VAR_12->set.uh) {
    CURLUcode VAR_14;
    VAR_14 = FUNC_9(VAR_12->set.uh,
                        VAR_2, &VAR_12->set.str[VAR_10], 0);
    if(VAR_14) {
      FUNC_10(VAR_12, "No URL set!");
      return VAR_1;
    }
  }

  VAR_12->change.url = VAR_12->set.str[VAR_10];




  VAR_13 = FUNC_7(VAR_12, VAR_12->set.general_ssl.max_ssl_sessions);
  if(VAR_13)
    return VAR_13;

  VAR_12->state.wildcardmatch = VAR_12->set.wildcard_enabled;
  VAR_12->set.followlocation = 0;
  VAR_12->state.this_is_a_follow = VAR_4;
  VAR_12->state.errorbuf = VAR_4;
  VAR_12->state.httpversion = 0;

  VAR_12->state.authproblem = VAR_4;
  VAR_12->state.authhost.want = VAR_12->set.httpauth;
  VAR_12->state.authproxy.want = VAR_12->set.proxyauth;
  FUNC_6(VAR_12->info.wouldredirect);
  VAR_12->info.wouldredirect = ((void*)0);

  if(VAR_12->set.httpreq == VAR_7)
    VAR_12->state.infilesize = VAR_12->set.filesize;
  else if((VAR_12->set.httpreq != VAR_5) &&
          (VAR_12->set.httpreq != VAR_6)) {
    VAR_12->state.infilesize = VAR_12->set.postfieldsize;
    if(VAR_12->set.postfields && (VAR_12->state.infilesize == -1))
      VAR_12->state.infilesize = (curl_off_t)FUNC_12(VAR_12->set.postfields);
  }
  else
    VAR_12->state.infilesize = 0;


  if(VAR_12->change.cookielist)
    FUNC_0(VAR_12);


  if(VAR_12->change.resolve)
    VAR_13 = FUNC_3(VAR_12);

  if(!VAR_13) {



    VAR_12->state.allow_port = VAR_11;
    FUNC_2(VAR_12);
    FUNC_4(VAR_12);
    FUNC_5(VAR_12);




    VAR_12->state.authhost.picked &= VAR_12->state.authhost.want;
    VAR_12->state.authproxy.picked &= VAR_12->state.authproxy.want;


    if(VAR_12->state.wildcardmatch) {
      struct WildcardData *VAR_15 = &VAR_12->wildcard;
      if(VAR_15->state < VAR_3) {
        VAR_13 = FUNC_8(VAR_15);
        if(VAR_13)
          return VAR_0;
      }
    }

    FUNC_1(&VAR_12->state);
  }

  return VAR_13;
}
