
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char FILE ;
typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,char*) ;
 int VAR_7 ;
 char* VAR_8 ;

int FUNC_8(void)
{
  CURL *VAR_9;
  CURLcode VAR_10;
  FILE *VAR_11;
  FILE *VAR_12;


  VAR_11 = FUNC_6(VAR_5, "wb");


  VAR_12 = FUNC_6(VAR_6, "wb");

  VAR_9 = FUNC_1();
  if(VAR_9) {

    FUNC_3(VAR_9, VAR_3, "ftp://ftp.example.com/");
    FUNC_3(VAR_9, VAR_4, VAR_11);


    FUNC_3(VAR_9, VAR_2, VAR_8);
    FUNC_3(VAR_9, VAR_1, VAR_12);
    VAR_10 = FUNC_2(VAR_9);

    if(VAR_10 != VAR_0)
      FUNC_7(VAR_7, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_10));


    FUNC_0(VAR_9);
  }

  FUNC_5(VAR_11);
  FUNC_5(VAR_12);

  return 0;
}
