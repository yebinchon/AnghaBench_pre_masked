
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct imap_conn {void* mailbox; void* mailbox_uidvalidity; } ;
struct TYPE_5__ {struct imap_conn imapc; } ;
struct connectdata {struct Curl_easy* data; TYPE_2__ proto; } ;
struct IMAP {char* mailbox; scalar_t__ query; scalar_t__ custom; scalar_t__ uidvalidity; } ;
struct TYPE_6__ {char* buffer; } ;
struct TYPE_4__ {struct IMAP* protop; } ;
struct Curl_easy {TYPE_3__ state; TYPE_1__ req; } ;
typedef int imapstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int VAR_3 ;
 int FUNC_1 (struct Curl_easy*,char*) ;
 int FUNC_2 (struct connectdata*) ;
 int FUNC_3 (struct connectdata*) ;
 int FUNC_4 (struct connectdata*) ;
 int FUNC_5 (char const*,char*,char*) ;
 int FUNC_6 (scalar_t__,void*) ;
 void* FUNC_7 (char*) ;

__attribute__((used)) static CURLcode FUNC_8(struct connectdata *VAR_4, int VAR_5,
                                       imapstate VAR_6)
{
  CURLcode VAR_7 = VAR_1;
  struct Curl_easy *VAR_8 = VAR_4->data;
  struct IMAP *VAR_9 = VAR_4->data->req.protop;
  struct imap_conn *VAR_10 = &VAR_4->proto.imapc;
  const char *VAR_11 = VAR_8->state.buffer;

  (void)VAR_6;

  if(VAR_5 == '*') {

    char VAR_12[20];
    if(FUNC_5(VAR_11 + 2, "OK [UIDVALIDITY %19[0123456789]]", VAR_12) == 1) {
      FUNC_0(VAR_10->mailbox_uidvalidity);
      VAR_10->mailbox_uidvalidity = FUNC_7(VAR_12);
    }
  }
  else if(VAR_5 == VAR_3) {

    if(VAR_9->uidvalidity && VAR_10->mailbox_uidvalidity &&
       !FUNC_6(VAR_9->uidvalidity, VAR_10->mailbox_uidvalidity)) {
      FUNC_1(VAR_4->data, "Mailbox UIDVALIDITY has changed");
      VAR_7 = VAR_2;
    }
    else {

      VAR_10->mailbox = FUNC_7(VAR_9->mailbox);

      if(VAR_9->custom)
        VAR_7 = FUNC_3(VAR_4);
      else if(VAR_9->query)
        VAR_7 = FUNC_4(VAR_4);
      else
        VAR_7 = FUNC_2(VAR_4);
    }
  }
  else {
    FUNC_1(VAR_8, "Select failed");
    VAR_7 = VAR_0;
  }

  return VAR_7;
}
