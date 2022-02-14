
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pp; } ;
struct TYPE_6__ {TYPE_1__ smtpc; } ;
struct connectdata {TYPE_2__ proto; struct Curl_easy* data; } ;
struct SMTP {TYPE_3__* rcpt; } ;
struct TYPE_8__ {struct SMTP* protop; } ;
struct Curl_easy {TYPE_4__ req; } ;
struct TYPE_7__ {char* data; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_2(struct connectdata *VAR_2)
{
  CURLcode VAR_3 = VAR_0;
  struct Curl_easy *VAR_4 = VAR_2->data;
  struct SMTP *VAR_5 = VAR_4->req.protop;


  if(VAR_5->rcpt->data[0] == '<')
    VAR_3 = FUNC_0(&VAR_2->proto.smtpc.pp, "RCPT TO:%s",
                           VAR_5->rcpt->data);
  else
    VAR_3 = FUNC_0(&VAR_2->proto.smtpc.pp, "RCPT TO:<%s>",
                           VAR_5->rcpt->data);
  if(!VAR_3)
    FUNC_1(VAR_2, VAR_1);

  return VAR_3;
}
