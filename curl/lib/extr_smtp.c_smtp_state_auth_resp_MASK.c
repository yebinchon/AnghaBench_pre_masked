
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smtp_conn {int sasl; } ;
struct TYPE_2__ {struct smtp_conn smtpc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int smtpstate ;
typedef int saslprogress ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct connectdata*,int,int*) ;


 int VAR_2 ;
 int FUNC_1 (struct Curl_easy*,char*) ;
 int FUNC_2 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_3,
                                     int VAR_4,
                                     smtpstate VAR_5)
{
  CURLcode VAR_6 = VAR_1;
  struct Curl_easy *VAR_7 = VAR_3->data;
  struct smtp_conn *VAR_8 = &VAR_3->proto.smtpc;
  saslprogress VAR_9;

  (void)VAR_5;

  VAR_6 = FUNC_0(&VAR_8->sasl, VAR_3, VAR_4, &VAR_9);
  if(!VAR_6)
    switch(VAR_9) {
    case 129:
      FUNC_2(VAR_3, VAR_2);
      break;
    case 128:
      FUNC_1(VAR_7, "Authentication cancelled");
      VAR_6 = VAR_0;
      break;
    default:
      break;
    }

  return VAR_6;
}
