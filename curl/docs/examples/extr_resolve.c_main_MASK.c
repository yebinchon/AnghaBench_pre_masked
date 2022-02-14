
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;

int FUNC_6(void)
{
  CURL *VAR_3;
  CURLcode VAR_4 = VAR_0;






  struct curl_slist *VAR_5 = FUNC_4(((void*)0),
                                              "example.com:443:127.0.0.1");

  VAR_3 = FUNC_1();
  if(VAR_3) {
    FUNC_3(VAR_3, VAR_1, VAR_5);
    FUNC_3(VAR_3, VAR_2, "https://example.com");
    VAR_4 = FUNC_2(VAR_3);


    FUNC_0(VAR_3);
  }

  FUNC_5(VAR_5);

  return (int)VAR_4;
}
