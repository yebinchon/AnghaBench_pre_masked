
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ authneg; int rewindaftersend; scalar_t__ proxy_user_passwd; scalar_t__ user_passwd; } ;
struct connectdata {int httpversion; TYPE_1__ bits; struct Curl_easy* data; scalar_t__ oauth_bearer; } ;
struct TYPE_11__ {int httpcode; void* newurl; } ;
struct TYPE_12__ {scalar_t__ picked; void* done; } ;
struct TYPE_10__ {TYPE_6__ authhost; void* authproblem; TYPE_6__ authproxy; } ;
struct TYPE_9__ {int url; } ;
struct TYPE_8__ {scalar_t__ httpreq; int httpversion; scalar_t__ http_fail_on_error; } ;
struct Curl_easy {TYPE_5__ req; TYPE_4__ state; TYPE_3__ change; TYPE_2__ set; } ;
typedef scalar_t__ CURLcode ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (void*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 void* VAR_9 ;
 int FUNC_1 (struct connectdata*,char*) ;
 int FUNC_2 (struct Curl_easy*,char*,int) ;
 scalar_t__ FUNC_3 (struct connectdata*) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;
 int FUNC_5 (struct Curl_easy*,char*) ;
 int FUNC_6 (TYPE_6__*,unsigned long) ;
 void* FUNC_7 (int ) ;

CURLcode FUNC_8(struct connectdata *VAR_10)
{
  struct Curl_easy *VAR_11 = VAR_10->data;
  bool VAR_12 = VAR_6;
  bool VAR_13 = VAR_6;
  CURLcode VAR_14 = VAR_3;
  unsigned long VAR_15 = ~0ul;

  if(!VAR_10->oauth_bearer)
    VAR_15 &= (unsigned long)~VAR_0;

  if(100 <= VAR_11->req.httpcode && 199 >= VAR_11->req.httpcode)

    return VAR_3;

  if(VAR_11->state.authproblem)
    return VAR_11->set.http_fail_on_error?VAR_2:VAR_3;

  if((VAR_10->bits.user_passwd || VAR_10->oauth_bearer) &&
     ((VAR_11->req.httpcode == 401) ||
      (VAR_10->bits.authneg && VAR_11->req.httpcode < 300))) {
    VAR_12 = FUNC_6(&VAR_11->state.authhost, VAR_15);
    if(!VAR_12)
      VAR_11->state.authproblem = VAR_9;
    if(VAR_11->state.authhost.picked == VAR_1 &&
       VAR_10->httpversion > 11) {
      FUNC_5(VAR_11, "Forcing HTTP/1.1 for NTLM");
      FUNC_1(VAR_10, "Force HTTP/1.1 connection");
      VAR_10->data->set.httpversion = VAR_5;
    }
  }
  if(VAR_10->bits.proxy_user_passwd &&
     ((VAR_11->req.httpcode == 407) ||
      (VAR_10->bits.authneg && VAR_11->req.httpcode < 300))) {
    VAR_13 = FUNC_6(&VAR_11->state.authproxy,
                            VAR_15 & ~VAR_0);
    if(!VAR_13)
      VAR_11->state.authproblem = VAR_9;
  }

  if(VAR_12 || VAR_13) {
    if((VAR_11->set.httpreq != VAR_7) &&
       (VAR_11->set.httpreq != VAR_8) &&
       !VAR_10->bits.rewindaftersend) {
      VAR_14 = FUNC_3(VAR_10);
      if(VAR_14)
        return VAR_14;
    }



    FUNC_0(VAR_11->req.newurl);
    VAR_11->req.newurl = FUNC_7(VAR_11->change.url);
    if(!VAR_11->req.newurl)
      return VAR_4;
  }
  else if((VAR_11->req.httpcode < 300) &&
          (!VAR_11->state.authhost.done) &&
          VAR_10->bits.authneg) {




    if((VAR_11->set.httpreq != VAR_7) &&
       (VAR_11->set.httpreq != VAR_8)) {
      VAR_11->req.newurl = FUNC_7(VAR_11->change.url);
      if(!VAR_11->req.newurl)
        return VAR_4;
      VAR_11->state.authhost.done = VAR_9;
    }
  }
  if(FUNC_4(VAR_10)) {
    FUNC_2(VAR_11, "The requested URL returned error: %d",
          VAR_11->req.httpcode);
    VAR_14 = VAR_2;
  }

  return VAR_14;
}
