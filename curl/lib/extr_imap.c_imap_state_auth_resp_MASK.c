
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imap_conn {int preftype; int login_disabled; int sasl; } ;
struct TYPE_2__ {struct imap_conn imapc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int saslprogress ;
typedef int imapstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct connectdata*,int,int*) ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (struct Curl_easy*,char*) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_4(struct connectdata *VAR_4,
                                     int VAR_5,
                                     imapstate VAR_6)
{
  CURLcode VAR_7 = VAR_1;
  struct Curl_easy *VAR_8 = VAR_4->data;
  struct imap_conn *VAR_9 = &VAR_4->proto.imapc;
  saslprogress VAR_10;

  (void)VAR_6;

  VAR_7 = FUNC_0(&VAR_9->sasl, VAR_4, VAR_5, &VAR_10);
  if(!VAR_7)
    switch(VAR_10) {
    case 129:
      FUNC_3(VAR_4, VAR_2);
      break;
    case 128:
      if((!VAR_9->login_disabled) && (VAR_9->preftype & VAR_3))

        VAR_7 = FUNC_2(VAR_4);
      else {
        FUNC_1(VAR_8, "Authentication cancelled");
        VAR_7 = VAR_0;
      }
      break;
    default:
      break;
    }

  return VAR_7;
}
