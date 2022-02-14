
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imap_conn {int preauth; } ;
struct TYPE_2__ {struct imap_conn imapc; } ;
struct connectdata {TYPE_1__ proto; struct Curl_easy* data; } ;
struct Curl_easy {int dummy; } ;
typedef int imapstate ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct Curl_easy*,char*) ;
 int FUNC_1 (struct connectdata*) ;
 int FUNC_2 (struct Curl_easy*,char*) ;

__attribute__((used)) static CURLcode FUNC_3(struct connectdata *VAR_4,
                                            int VAR_5,
                                            imapstate VAR_6)
{
  struct Curl_easy *VAR_7 = VAR_4->data;
  (void)VAR_6;

  if(VAR_5 == VAR_2) {

    struct imap_conn *VAR_8 = &VAR_4->proto.imapc;
    VAR_8->preauth = VAR_3;
    FUNC_2(VAR_7, "PREAUTH connection, already authenticated!\n");
  }
  else if(VAR_5 != VAR_1) {
    FUNC_0(VAR_7, "Got unexpected imap-server response");
    return VAR_0;
  }

  return FUNC_1(VAR_4);
}
