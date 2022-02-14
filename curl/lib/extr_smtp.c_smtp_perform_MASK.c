
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int* tcpconnect; } ;
struct connectdata {struct Curl_easy* data; TYPE_4__ bits; } ;
struct SMTP {int eob; int trailing_crlf; scalar_t__ rcpt; int transfer; } ;
struct TYPE_6__ {scalar_t__ kind; } ;
struct TYPE_7__ {scalar_t__ mail_rcpt; TYPE_2__ mimepost; scalar_t__ upload; scalar_t__ opt_no_body; } ;
struct TYPE_5__ {struct SMTP* protop; } ;
struct Curl_easy {TYPE_3__ set; TYPE_1__ req; } ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct Curl_easy*,char*) ;
 scalar_t__ FUNC_2 (struct connectdata*,int*) ;
 scalar_t__ FUNC_3 (struct connectdata*) ;
 scalar_t__ FUNC_4 (struct connectdata*) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_5, bool *VAR_6,
                             bool *VAR_7)
{

  CURLcode VAR_8 = VAR_0;
  struct Curl_easy *VAR_9 = VAR_5->data;
  struct SMTP *VAR_10 = VAR_9->req.protop;

  FUNC_0(FUNC_1(VAR_5->data, "DO phase starts\n"));

  if(VAR_9->set.opt_no_body) {

    VAR_10->transfer = VAR_3;
  }

  *VAR_7 = VAR_1;


  VAR_10->rcpt = VAR_9->set.mail_rcpt;



  VAR_10->trailing_crlf = VAR_4;
  VAR_10->eob = 2;


  if((VAR_9->set.upload || VAR_9->set.mimepost.kind) && VAR_9->set.mail_rcpt)

    VAR_8 = FUNC_4(VAR_5);
  else

    VAR_8 = FUNC_3(VAR_5);

  if(VAR_8)
    return VAR_8;


  VAR_8 = FUNC_2(VAR_5, VAR_7);

  *VAR_6 = VAR_5->bits.tcpconnect[VAR_2];

  if(*VAR_7)
    FUNC_0(FUNC_1(VAR_5->data, "DO phase is complete\n"));

  return VAR_8;
}
