
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (int ) ;
 struct curl_slist* FUNC_5 (struct curl_slist*,char*) ;
 int FUNC_6 (struct curl_slist*) ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_4 ;

int FUNC_8(void)
{
  CURL *VAR_5;
  CURLcode VAR_6;

  VAR_5 = FUNC_1();
  if(VAR_5) {
    struct curl_slist *VAR_7 = ((void*)0);


    VAR_7 = FUNC_5(VAR_7, "Accept:");


    VAR_7 = FUNC_5(VAR_7, "Another: yes");


    VAR_7 = FUNC_5(VAR_7, "Host: example.com");



    VAR_7 = FUNC_5(VAR_7, "X-silly-header;");


    FUNC_3(VAR_5, VAR_1, VAR_7);

    FUNC_3(VAR_5, VAR_2, "localhost");
    FUNC_3(VAR_5, VAR_3, 1L);

    VAR_6 = FUNC_2(VAR_5);

    if(VAR_6 != VAR_0)
      FUNC_7(VAR_4, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_6));


    FUNC_0(VAR_5);


    FUNC_6(VAR_7);
  }
  return 0;
}
