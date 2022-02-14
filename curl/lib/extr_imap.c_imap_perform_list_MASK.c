
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connectdata {struct Curl_easy* data; } ;
struct IMAP {char* custom_params; scalar_t__ mailbox; scalar_t__ custom; } ;
struct TYPE_2__ {struct IMAP* protop; } ;
struct Curl_easy {TYPE_1__ req; } ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct connectdata*,char*,char*,...) ;
 int FUNC_3 (struct connectdata*,int ) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static CURLcode FUNC_5(struct connectdata *VAR_3)
{
  CURLcode VAR_4 = VAR_0;
  struct Curl_easy *VAR_5 = VAR_3->data;
  struct IMAP *VAR_6 = VAR_5->req.protop;

  if(VAR_6->custom)

    VAR_4 = FUNC_2(VAR_3, "%s%s", VAR_6->custom,
                        VAR_6->custom_params ? VAR_6->custom_params : "");
  else {

    char *VAR_7 = VAR_6->mailbox ? FUNC_1(VAR_6->mailbox, 1)
                                  : FUNC_4("");
    if(!VAR_7)
      return VAR_1;


    VAR_4 = FUNC_2(VAR_3, "LIST \"%s\" *", VAR_7);

    FUNC_0(VAR_7);
  }

  if(!VAR_4)
    FUNC_3(VAR_3, VAR_2);

  return VAR_4;
}
