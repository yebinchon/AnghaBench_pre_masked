
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* do_more; } ;
struct connectdata {TYPE_2__* handler; TYPE_1__ bits; } ;
struct SingleRequest {void* ignorebody; int hbufp; int buf; scalar_t__ bytecount; int header; int start; int now; } ;
struct TYPE_8__ {int headerbuff; int buffer; void* expect100header; void* done; void* wildcardmatch; } ;
struct TYPE_7__ {scalar_t__ httpreq; scalar_t__ opt_no_body; } ;
struct Curl_easy {TYPE_4__ state; TYPE_3__ set; struct SingleRequest req; } ;
struct TYPE_6__ {int flags; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct Curl_easy*,int ) ;
 int FUNC_2 (struct Curl_easy*,int ) ;
 int FUNC_3 (struct Curl_easy*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

CURLcode FUNC_4(struct Curl_easy *VAR_6, struct connectdata *VAR_7)
{
  struct SingleRequest *VAR_8 = &VAR_6->req;

  if(VAR_7) {
    VAR_7->bits.do_more = VAR_1;


    if(VAR_6->state.wildcardmatch &&
       !(VAR_7->handler->flags & VAR_4))
      VAR_6->state.wildcardmatch = VAR_1;
  }

  VAR_6->state.done = VAR_1;
  VAR_6->state.expect100header = VAR_1;


  if(VAR_6->set.opt_no_body)

    VAR_6->set.httpreq = VAR_3;
  else if(VAR_3 == VAR_6->set.httpreq)





    VAR_6->set.httpreq = VAR_2;

  VAR_8->start = FUNC_0();
  VAR_8->now = VAR_8->start;
  VAR_8->header = VAR_5;

  VAR_8->bytecount = 0;

  VAR_8->buf = VAR_6->state.buffer;
  VAR_8->hbufp = VAR_6->state.headerbuff;
  VAR_8->ignorebody = VAR_1;

  FUNC_3(VAR_6);

  FUNC_2(VAR_6, 0);
  FUNC_1(VAR_6, 0);

  return VAR_0;
}
