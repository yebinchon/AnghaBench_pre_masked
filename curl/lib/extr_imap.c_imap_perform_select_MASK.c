
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imap_conn {int mailbox_uidvalidity; int mailbox; } ;
struct TYPE_4__ {struct imap_conn imapc; } ;
struct connectdata {struct Curl_easy* data; TYPE_2__ proto; } ;
struct IMAP {int mailbox; } ;
struct TYPE_3__ {struct IMAP* protop; } ;
struct Curl_easy {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct Curl_easy*,char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int ,int) ;
 int FUNC_4 (struct connectdata*,char*,char*) ;
 int FUNC_5 (struct connectdata*,int ) ;

__attribute__((used)) static CURLcode FUNC_6(struct connectdata *VAR_4)
{
  CURLcode VAR_5 = VAR_0;
  struct Curl_easy *VAR_6 = VAR_4->data;
  struct IMAP *VAR_7 = VAR_6->req.protop;
  struct imap_conn *VAR_8 = &VAR_4->proto.imapc;
  char *VAR_9;


  FUNC_0(VAR_8->mailbox);
  FUNC_0(VAR_8->mailbox_uidvalidity);


  if(!VAR_7->mailbox) {
    FUNC_1(VAR_4->data, "Cannot SELECT without a mailbox.");
    return VAR_2;
  }


  VAR_9 = FUNC_3(VAR_7->mailbox, 0);
  if(!VAR_9)
    return VAR_1;


  VAR_5 = FUNC_4(VAR_4, "SELECT %s", VAR_9);

  FUNC_2(VAR_9);

  if(!VAR_5)
    FUNC_5(VAR_4, VAR_3);

  return VAR_5;
}
