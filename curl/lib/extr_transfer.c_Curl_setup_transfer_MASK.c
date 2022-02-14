
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ multiplex; } ;
struct connectdata {int httpversion; void** sock; TYPE_2__* handler; void* writesockfd; void* sockfd; TYPE_1__ bits; } ;
struct SingleRequest {int getheader; int keepon; int exp100; int start100; struct HTTP* protop; int header; scalar_t__ size; } ;
struct HTTP {scalar_t__ sending; } ;
struct TYPE_8__ {scalar_t__ expect100header; } ;
struct TYPE_7__ {int expect_100_timeout; int opt_no_body; } ;
struct Curl_easy {TYPE_4__ state; TYPE_3__ set; struct SingleRequest req; struct connectdata* conn; } ;
typedef scalar_t__ curl_off_t ;
struct TYPE_6__ {int protocol; } ;


 void* VAR_0 ;
 int FUNC_0 (struct Curl_easy*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct Curl_easy*,scalar_t__) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_4(
  struct Curl_easy *VAR_9,
  int VAR_10,
  curl_off_t VAR_11,
  bool VAR_12,
  int VAR_13

  )
{
  struct SingleRequest *VAR_14 = &VAR_9->req;
  struct connectdata *VAR_15 = VAR_9->conn;
  FUNC_3(VAR_15 != ((void*)0));
  FUNC_3((VAR_10 <= 1) && (VAR_10 >= -1));

  if(VAR_15->bits.multiplex || VAR_15->httpversion == 20) {

    VAR_15->sockfd = VAR_10 == -1 ?
      ((VAR_13 == -1 ? VAR_0 : VAR_15->sock[VAR_13])) :
      VAR_15->sock[VAR_10];
    VAR_15->writesockfd = VAR_15->sockfd;
  }
  else {
    VAR_15->sockfd = VAR_10 == -1 ?
      VAR_0 : VAR_15->sock[VAR_10];
    VAR_15->writesockfd = VAR_13 == -1 ?
      VAR_0:VAR_15->sock[VAR_13];
  }
  VAR_14->getheader = VAR_12;

  VAR_14->size = VAR_11;





  if(!VAR_14->getheader) {
    VAR_14->header = VAR_4;
    if(VAR_11 > 0)
      FUNC_2(VAR_9, VAR_11);
  }

  if(VAR_14->getheader || !VAR_9->set.opt_no_body) {

    if(VAR_10 != -1)
      VAR_14->keepon |= VAR_6;

    if(VAR_13 != -1) {
      struct HTTP *VAR_16 = VAR_9->req.protop;
      if((VAR_9->state.expect100header) &&
         (VAR_15->handler->protocol&VAR_8) &&
         (VAR_16->sending == VAR_5)) {

        VAR_14->exp100 = VAR_1;
        VAR_14->start100 = FUNC_1();



        FUNC_0(VAR_9, VAR_9->set.expect_100_timeout, VAR_3);
      }
      else {
        if(VAR_9->state.expect100header)


          VAR_14->exp100 = VAR_2;


        VAR_14->keepon |= VAR_7;
      }
    }
  }

}
