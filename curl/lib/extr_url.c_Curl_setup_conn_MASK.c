
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


struct TYPE_14__ {void** tcpconnect; void* proxy_connect_closed; } ;
struct TYPE_9__ {int uagent; } ;
struct connectdata {scalar_t__* sock; void* now; TYPE_7__ bits; TYPE_6__* handler; TYPE_5__* ssl; int dns_entry; TYPE_2__ allocptr; struct Curl_easy* data; } ;
struct TYPE_11__ {scalar_t__ crlf_conversions; } ;
struct TYPE_10__ {scalar_t__ headerbytecount; } ;
struct TYPE_8__ {scalar_t__* str; } ;
struct Curl_easy {TYPE_4__ state; TYPE_3__ req; TYPE_1__ set; } ;
struct TYPE_13__ {int flags; int protocol; } ;
struct TYPE_12__ {scalar_t__ use; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct connectdata*,int ) ;
 void* FUNC_1 () ;
 int FUNC_2 (struct Curl_easy*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct connectdata*,scalar_t__) ;
 int FUNC_5 (struct connectdata*) ;
 void* VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_6 (char*,scalar_t__) ;

CURLcode FUNC_7(struct connectdata *VAR_12,
                         bool *VAR_13)
{
  CURLcode VAR_14 = VAR_0;
  struct Curl_easy *VAR_15 = VAR_12->data;

  FUNC_2(VAR_15, VAR_10);

  if(VAR_12->handler->flags & VAR_5) {

    *VAR_13 = VAR_11;
    return VAR_14;
  }
  *VAR_13 = VAR_3;





  VAR_12->bits.proxy_connect_closed = VAR_3;






  if(VAR_15->set.str[VAR_7]) {
    FUNC_3(VAR_12->allocptr.uagent);
    VAR_12->allocptr.uagent =
      FUNC_6("User-Agent: %s\r\n", VAR_15->set.str[VAR_7]);
    if(!VAR_12->allocptr.uagent)
      return VAR_1;
  }

  VAR_15->req.headerbytecount = 0;







  VAR_12->now = FUNC_1();

  if(VAR_2 == VAR_12->sock[VAR_4]) {
    VAR_12->bits.tcpconnect[VAR_4] = VAR_3;
    VAR_14 = FUNC_0(VAR_12, VAR_12->dns_entry);
    if(VAR_14)
      return VAR_14;
  }
  else {
    FUNC_2(VAR_15, VAR_9);
    if(VAR_12->ssl[VAR_4].use ||
       (VAR_12->handler->protocol & VAR_6))
      FUNC_2(VAR_15, VAR_8);
    VAR_12->bits.tcpconnect[VAR_4] = VAR_11;
    *VAR_13 = VAR_11;
    FUNC_4(VAR_12, VAR_12->sock[VAR_4]);
    FUNC_5(VAR_12);
  }

  VAR_12->now = FUNC_1();

  return VAR_14;
}
