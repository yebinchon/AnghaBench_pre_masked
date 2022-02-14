
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct SMTP {TYPE_4__* rcpt; } ;
struct TYPE_7__ {int opt_no_body; } ;
struct TYPE_6__ {char* buffer; } ;
struct TYPE_5__ {struct SMTP* protop; } ;
struct Curl_easy {TYPE_3__ set; TYPE_2__ state; TYPE_1__ req; } ;
typedef int smtpstate ;
struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct connectdata*,int ,char*,size_t) ;
 int VAR_3 ;
 int FUNC_1 (struct Curl_easy*,char*,int) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*,int ) ;
 size_t FUNC_4 (char*) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_4, int VAR_5,
                                        smtpstate VAR_6)
{
  CURLcode VAR_7 = VAR_1;
  struct Curl_easy *VAR_8 = VAR_4->data;
  struct SMTP *VAR_9 = VAR_8->req.protop;
  char *VAR_10 = VAR_8->state.buffer;
  size_t VAR_11 = FUNC_4(VAR_10);

  (void)VAR_6;

  if((VAR_9->rcpt && VAR_5/100 != 2 && VAR_5 != 553 && VAR_5 != 1) ||
     (!VAR_9->rcpt && VAR_5/100 != 2 && VAR_5 != 1)) {
    FUNC_1(VAR_8, "Command failed: %d", VAR_5);
    VAR_7 = VAR_2;
  }
  else {

    if(!VAR_8->set.opt_no_body) {
      VAR_10[VAR_11] = '\n';
      VAR_7 = FUNC_0(VAR_4, VAR_0, VAR_10, VAR_11 + 1);
      VAR_10[VAR_11] = '\0';
    }

    if(VAR_5 != 1) {
      if(VAR_9->rcpt) {
        VAR_9->rcpt = VAR_9->rcpt->next;

        if(VAR_9->rcpt) {

          VAR_7 = FUNC_2(VAR_4);
        }
        else

          FUNC_3(VAR_4, VAR_3);
      }
      else

        FUNC_3(VAR_4, VAR_3);
    }
  }

  return VAR_7;
}
