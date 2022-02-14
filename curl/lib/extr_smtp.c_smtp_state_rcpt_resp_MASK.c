
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pp; } ;
struct TYPE_7__ {TYPE_2__ smtpc; } ;
struct connectdata {TYPE_3__ proto; struct Curl_easy* data; } ;
struct SMTP {TYPE_1__* rcpt; } ;
struct TYPE_8__ {struct SMTP* protop; } ;
struct Curl_easy {TYPE_4__ req; } ;
typedef int smtpstate ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct Curl_easy*,char*,int) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_3, int VAR_4,
                                     smtpstate VAR_5)
{
  CURLcode VAR_6 = VAR_0;
  struct Curl_easy *VAR_7 = VAR_3->data;
  struct SMTP *VAR_8 = VAR_7->req.protop;

  (void)VAR_5;

  if(VAR_4/100 != 2) {
    FUNC_1(VAR_7, "RCPT failed: %d", VAR_4);
    VAR_6 = VAR_1;
  }
  else {
    VAR_8->rcpt = VAR_8->rcpt->next;

    if(VAR_8->rcpt)

      VAR_6 = FUNC_2(VAR_3);
    else {

      VAR_6 = FUNC_0(&VAR_3->proto.smtpc.pp, "%s", "DATA");

      if(!VAR_6)
        FUNC_3(VAR_3, VAR_2);
    }
  }

  return VAR_6;
}
