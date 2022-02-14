
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


struct TYPE_10__ {void* retry; scalar_t__ reuse; } ;
struct connectdata {TYPE_5__* handler; TYPE_4__ bits; struct Curl_easy* data; } ;
struct TYPE_12__ {scalar_t__ bytecount; scalar_t__ headerbytecount; scalar_t__ writebytecount; } ;
struct TYPE_9__ {int url; } ;
struct TYPE_8__ {void* refused_stream; } ;
struct TYPE_7__ {scalar_t__ rtspreq; int opt_no_body; scalar_t__ upload; } ;
struct Curl_easy {TYPE_6__ req; TYPE_3__ change; TYPE_2__ state; TYPE_1__ set; } ;
struct TYPE_11__ {int protocol; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct connectdata*) ;
 int FUNC_1 (char*) ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (struct connectdata*,char*) ;
 int FUNC_3 (struct Curl_easy*,char*) ;
 char* FUNC_4 (int ) ;

CURLcode FUNC_5(struct connectdata *VAR_7,
                            char **VAR_8)
{
  struct Curl_easy *VAR_9 = VAR_7->data;
  bool VAR_10 = VAR_3;
  *VAR_8 = ((void*)0);



  if(VAR_9->set.upload &&
     !(VAR_7->handler->protocol&(VAR_4|VAR_2)))
    return VAR_0;

  if((VAR_9->req.bytecount + VAR_9->req.headerbytecount == 0) &&
      VAR_7->bits.reuse &&
      (!VAR_9->set.opt_no_body
        || (VAR_7->handler->protocol & VAR_4)) &&
      (VAR_9->set.rtspreq != VAR_5))







    VAR_10 = VAR_6;
  else if(VAR_9->state.refused_stream &&
          (VAR_9->req.bytecount + VAR_9->req.headerbytecount == 0) ) {





    FUNC_3(VAR_7->data, "REFUSED_STREAM, retrying a fresh connect\n");
    VAR_9->state.refused_stream = VAR_3;
    VAR_10 = VAR_6;
  }
  if(VAR_10) {
    FUNC_3(VAR_7->data, "Connection died, retrying a fresh connect\n");
    *VAR_8 = FUNC_4(VAR_7->data->change.url);
    if(!*VAR_8)
      return VAR_1;

    FUNC_2(VAR_7, "retry");
    VAR_7->bits.retry = VAR_6;






    if(VAR_7->handler->protocol&VAR_4) {
      if(VAR_9->req.writebytecount) {
        CURLcode VAR_11 = FUNC_0(VAR_7);
        if(VAR_11) {
          FUNC_1(*VAR_8);
          return VAR_11;
        }
      }
    }
  }
  return VAR_0;
}
