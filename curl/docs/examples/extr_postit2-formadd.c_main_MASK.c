
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef char curl_httppost ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char**,char**,int ,char*,int ,char*,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,char*) ;
 int VAR_9 ;
 int FUNC_11 (char*,char*) ;

int FUNC_12(int VAR_10, char *VAR_11[])
{
  CURL *VAR_12;
  CURLcode VAR_13;

  struct curl_httppost *VAR_14 = ((void*)0);
  struct curl_httppost *VAR_15 = ((void*)0);
  struct curl_slist *VAR_16 = ((void*)0);
  static const char VAR_17[] = "Expect:";

  FUNC_7(VAR_8);


  FUNC_5(&VAR_14,
               &VAR_15,
               VAR_2, "sendfile",
               VAR_4, "postit2.c",
               VAR_3);


  FUNC_5(&VAR_14,
               &VAR_15,
               VAR_2, "filename",
               VAR_1, "postit2.c",
               VAR_3);



  FUNC_5(&VAR_14,
               &VAR_15,
               VAR_2, "submit",
               VAR_1, "send",
               VAR_3);

  VAR_12 = FUNC_1();


  VAR_16 = FUNC_8(VAR_16, VAR_17);
  if(VAR_12) {

    FUNC_3(VAR_12, VAR_7, "https://example.com/examplepost.cgi");
    if((VAR_10 == 2) && (!FUNC_11(VAR_11[1], "noexpectheader")))

      FUNC_3(VAR_12, VAR_5, VAR_16);
    FUNC_3(VAR_12, VAR_6, VAR_14);


    VAR_13 = FUNC_2(VAR_12);

    if(VAR_13 != VAR_0)
      FUNC_10(VAR_9, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_13));


    FUNC_0(VAR_12);


    FUNC_6(VAR_14);

    FUNC_9(VAR_16);
  }
  return 0;
}
