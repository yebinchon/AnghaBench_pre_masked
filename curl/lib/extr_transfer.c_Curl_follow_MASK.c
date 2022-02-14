
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int maxredirs; int followlocation; void* httpreq; int keep_post; int opt_no_body; scalar_t__ http_auto_referer; } ;
struct TYPE_7__ {char* wouldredirect; int httpcode; } ;
struct TYPE_6__ {int referer_alloc; char* referer; char* url; int url_alloc; } ;
struct TYPE_5__ {void* allow_port; int uh; void* this_is_a_follow; } ;
struct Curl_easy {TYPE_4__ set; TYPE_3__ info; TYPE_2__ change; TYPE_1__ state; } ;
typedef scalar_t__ followtype ;
typedef int CURLcode ;
typedef scalar_t__ CURLUcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (char*,int *,int ) ;
 int FUNC_1 (struct Curl_easy*) ;
 int FUNC_2 (struct Curl_easy*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 void* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* VAR_18 ;
 scalar_t__ FUNC_6 (int ,int ,char**,int ) ;
 scalar_t__ FUNC_7 (int ,int ,char*,int ) ;
 int FUNC_8 (struct Curl_easy*,char*,int) ;
 int FUNC_9 (struct Curl_easy*,char*,...) ;
 void* FUNC_10 (char*) ;

CURLcode FUNC_11(struct Curl_easy *VAR_19,
                     char *VAR_20,
                     followtype VAR_21)
{
  bool VAR_22 = VAR_9;
  bool VAR_23 = VAR_9;
  CURLUcode VAR_24;

  if(VAR_21 == VAR_11) {
    if((VAR_19->set.maxredirs != -1) &&
       (VAR_19->set.followlocation >= VAR_19->set.maxredirs)) {
      VAR_23 = VAR_18;
      VAR_21 = VAR_10;

    }
    else {

      VAR_19->state.this_is_a_follow = VAR_18;

      VAR_19->set.followlocation++;

      if(VAR_19->set.http_auto_referer) {




        if(VAR_19->change.referer_alloc) {
          FUNC_3(VAR_19->change.referer);
          VAR_19->change.referer_alloc = VAR_9;
        }

        VAR_19->change.referer = FUNC_10(VAR_19->change.url);
        if(!VAR_19->change.referer)
          return VAR_1;
        VAR_19->change.referer_alloc = VAR_18;
      }
    }
  }

  if(FUNC_0(VAR_20, ((void*)0), VAR_16))

    VAR_22 = VAR_18;

  FUNC_5(VAR_19->state.uh);
  VAR_24 = FUNC_7(VAR_19->state.uh, VAR_3, VAR_20,
                    (VAR_21 == VAR_10) ? VAR_4 :
                    ((VAR_21 == VAR_11) ? VAR_5 : 0) );
  if(VAR_24) {
    if(VAR_21 != VAR_10)
      return FUNC_4(VAR_24);



    VAR_20 = FUNC_10(VAR_20);
    if(!VAR_20)
      return VAR_1;
  }
  else {

    VAR_24 = FUNC_6(VAR_19->state.uh, VAR_3, &VAR_20, 0);
    if(VAR_24)
      return FUNC_4(VAR_24);
  }

  if(VAR_21 == VAR_10) {


    VAR_19->info.wouldredirect = VAR_20;

    if(VAR_23) {
      FUNC_8(VAR_19, "Maximum (%ld) redirects followed", VAR_19->set.maxredirs);
      return VAR_2;
    }
    return VAR_0;
  }

  if(VAR_22)
    VAR_19->state.allow_port = VAR_9;

  if(VAR_19->change.url_alloc)
    FUNC_3(VAR_19->change.url);

  VAR_19->change.url = VAR_20;
  VAR_19->change.url_alloc = VAR_18;

  FUNC_9(VAR_19, "Issue another request to this URL: '%s'\n", VAR_19->change.url);
  switch(VAR_19->info.httpcode) {







  default:



    break;
  case 301:
    if((VAR_19->set.httpreq == VAR_13
        || VAR_19->set.httpreq == VAR_14
        || VAR_19->set.httpreq == VAR_15)
       && !(VAR_19->set.keep_post & VAR_6)) {
      FUNC_9(VAR_19, "Switch from POST to GET\n");
      VAR_19->set.httpreq = VAR_12;
    }
    break;
  case 302:
    if((VAR_19->set.httpreq == VAR_13
        || VAR_19->set.httpreq == VAR_14
        || VAR_19->set.httpreq == VAR_15)
       && !(VAR_19->set.keep_post & VAR_7)) {
      FUNC_9(VAR_19, "Switch from POST to GET\n");
      VAR_19->set.httpreq = VAR_12;
    }
    break;

  case 303:


    if(VAR_19->set.httpreq != VAR_12
      && !(VAR_19->set.keep_post & VAR_8)) {
      VAR_19->set.httpreq = VAR_12;
      FUNC_9(VAR_19, "Disables POST, goes with %s\n",
            VAR_19->set.opt_no_body?"HEAD":"GET");
    }
    break;
  case 304:



    break;
  case 305:







    break;
  }
  FUNC_2(VAR_19, VAR_17);
  FUNC_1(VAR_19);

  return VAR_0;

}
