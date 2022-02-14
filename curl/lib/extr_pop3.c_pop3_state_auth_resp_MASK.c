
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pop3_conn {int authtypes; int preftype; int sasl; } ;
struct TYPE_2__ {struct pop3_conn pop3c; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int saslprogress ;
typedef int pop3state ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct connectdata*,int,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (struct Curl_easy*,char*) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_5,
                                     int VAR_6,
                                     pop3state VAR_7)
{
  CURLcode VAR_8 = VAR_1;
  struct Curl_easy *VAR_9 = VAR_5->data;
  struct pop3_conn *VAR_10 = &VAR_5->proto.pop3c;
  saslprogress VAR_11;

  (void)VAR_7;

  VAR_8 = FUNC_0(&VAR_10->sasl, VAR_5, VAR_6, &VAR_11);
  if(!VAR_8)
    switch(VAR_11) {
    case 129:
      FUNC_4(VAR_5, VAR_2);
      break;
    case 128:

      if(VAR_10->authtypes & VAR_10->preftype & VAR_3)

        VAR_8 = FUNC_2(VAR_5);
      else

      if(VAR_10->authtypes & VAR_10->preftype & VAR_4)

        VAR_8 = FUNC_3(VAR_5);
      else {
        FUNC_1(VAR_9, "Authentication cancelled");
        VAR_8 = VAR_0;
      }
      break;
    default:
      break;
    }

  return VAR_8;
}
