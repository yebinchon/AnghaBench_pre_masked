
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
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_8 ;

int FUNC_6(void)
{
  CURL *VAR_9;
  CURLcode VAR_10 = VAR_0;

  VAR_9 = FUNC_1();
  if(VAR_9) {

    FUNC_3(VAR_9, VAR_4, "user");
    FUNC_3(VAR_9, VAR_2, "secret");


    FUNC_3(VAR_9, VAR_3,
                     "imap://imap.example.com/INBOX/;UID=1");






    FUNC_3(VAR_9, VAR_5, (long)VAR_7);
    FUNC_3(VAR_9, VAR_1, "/path/to/certificate.pem");




    FUNC_3(VAR_9, VAR_6, 1L);


    VAR_10 = FUNC_2(VAR_9);


    if(VAR_10 != VAR_0)
      FUNC_5(VAR_8, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_10));


    FUNC_0(VAR_9);
  }

  return (int)VAR_10;
}
