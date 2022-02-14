
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef int curl_mimepart ;
typedef char curl_mime ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int * FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int *,char*,int) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 char* FUNC_13 (char*,char const*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int ,char*,char*) ;
 char** VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_16(void)
{
  CURL *VAR_14;
  CURLcode VAR_15 = VAR_1;

  VAR_14 = FUNC_1();
  if(VAR_14) {
    struct curl_slist *VAR_16 = ((void*)0);
    struct curl_slist *VAR_17 = ((void*)0);
    struct curl_slist *VAR_18 = ((void*)0);
    curl_mime *VAR_19;
    curl_mime *VAR_20;
    curl_mimepart *VAR_21;
    const char **VAR_22;


    FUNC_3(VAR_14, VAR_6, "smtp://mail.example.com");
    FUNC_3(VAR_14, VAR_3, VAR_8);




    VAR_17 = FUNC_13(VAR_17, VAR_9);
    VAR_17 = FUNC_13(VAR_17, VAR_0);
    FUNC_3(VAR_14, VAR_4, VAR_17);


    for(VAR_22 = VAR_10; *VAR_22; VAR_22++)
      VAR_16 = FUNC_13(VAR_16, *VAR_22);
    FUNC_3(VAR_14, VAR_2, VAR_16);


    VAR_19 = FUNC_10(VAR_14);



    VAR_20 = FUNC_10(VAR_14);


    VAR_21 = FUNC_5(VAR_20);
    FUNC_6(VAR_21, VAR_11, VAR_7);
    FUNC_12(VAR_21, "text/html");


    VAR_21 = FUNC_5(VAR_20);
    FUNC_6(VAR_21, VAR_12, VAR_7);


    VAR_21 = FUNC_5(VAR_19);
    FUNC_11(VAR_21, VAR_20);
    FUNC_12(VAR_21, "multipart/alternative");
    VAR_18 = FUNC_13(((void*)0), "Content-Disposition: inline");
    FUNC_9(VAR_21, VAR_18, 1);


    VAR_21 = FUNC_5(VAR_19);
    FUNC_7(VAR_21, "smtp-mime.c");
    FUNC_3(VAR_14, VAR_5, VAR_19);


    VAR_15 = FUNC_2(VAR_14);


    if(VAR_15 != VAR_1)
      FUNC_15(VAR_13, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_15));


    FUNC_14(VAR_17);
    FUNC_14(VAR_16);
    FUNC_0(VAR_14);


    FUNC_8(VAR_19);
  }

  return (int)VAR_15;
}
