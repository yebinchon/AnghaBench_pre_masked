
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef int curl_mimepart ;
typedef char curl_mime ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int *,char*,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 char* FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int ,char*,char*) ;
 int VAR_6 ;
 int FUNC_15 (char*,char*) ;

int FUNC_16(int VAR_7, char *VAR_8[])
{
  CURL *VAR_9;
  CURLcode VAR_10;

  curl_mime *VAR_11 = ((void*)0);
  curl_mimepart *VAR_12 = ((void*)0);
  struct curl_slist *VAR_13 = ((void*)0);
  static const char VAR_14[] = "Expect:";

  FUNC_5(VAR_4);

  VAR_9 = FUNC_1();
  if(VAR_9) {

    VAR_11 = FUNC_10(VAR_9);


    VAR_12 = FUNC_6(VAR_11);
    FUNC_11(VAR_12, "sendfile");
    FUNC_8(VAR_12, "postit2.c");


    VAR_12 = FUNC_6(VAR_11);
    FUNC_11(VAR_12, "filename");
    FUNC_7(VAR_12, "postit2.c", VAR_5);


    VAR_12 = FUNC_6(VAR_11);
    FUNC_11(VAR_12, "submit");
    FUNC_7(VAR_12, "send", VAR_5);



    VAR_13 = FUNC_12(VAR_13, VAR_14);

    FUNC_3(VAR_9, VAR_3, "https://example.com/examplepost.cgi");
    if((VAR_7 == 2) && (!FUNC_15(VAR_8[1], "noexpectheader")))

      FUNC_3(VAR_9, VAR_1, VAR_13);
    FUNC_3(VAR_9, VAR_2, VAR_11);


    VAR_10 = FUNC_2(VAR_9);

    if(VAR_10 != VAR_0)
      FUNC_14(VAR_6, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_10));


    FUNC_0(VAR_9);


    FUNC_9(VAR_11);

    FUNC_13(VAR_13);
  }
  return 0;
}
