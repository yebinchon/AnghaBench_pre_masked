
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_3 ;

int FUNC_8(void)
{
  CURL *VAR_4;
  CURLcode VAR_5;
  struct curl_slist *VAR_6 = ((void*)0);

  VAR_4 = FUNC_1();
  if(VAR_4) {

    FUNC_3(VAR_4, VAR_2, "smtp://mail.example.com");


    VAR_6 = FUNC_5(VAR_6, "<recipient@example.com>");
    FUNC_3(VAR_4, VAR_1, VAR_6);


    VAR_5 = FUNC_2(VAR_4);


    if(VAR_5 != VAR_0)
      FUNC_7(VAR_3, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_5));


    FUNC_6(VAR_6);







    FUNC_0(VAR_4);
  }

  return 0;
}
