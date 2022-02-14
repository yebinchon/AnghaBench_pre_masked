
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_6 ;

int FUNC_6(void)
{
  CURL *VAR_7;
  CURLcode VAR_8 = VAR_0;

  VAR_7 = FUNC_1();
  if(VAR_7) {

    FUNC_3(VAR_7, VAR_5, "user");
    FUNC_3(VAR_7, VAR_2, "secret");


    FUNC_3(VAR_7, VAR_3, "shared-mailbox");


    FUNC_3(VAR_7, VAR_1, "AUTH=PLAIN");


    FUNC_3(VAR_7, VAR_4,
                     "imap://imap.example.com/INBOX/;UID=1");


    VAR_8 = FUNC_2(VAR_7);


    if(VAR_8 != VAR_0)
      FUNC_5(VAR_6, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_8));


    FUNC_0(VAR_7);
  }

  return (int)VAR_8;
}
