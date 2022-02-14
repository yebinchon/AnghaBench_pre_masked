
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,...) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,char*) ;
 int VAR_7 ;

int FUNC_6(void)
{
  CURL *VAR_8;
  CURLcode VAR_9;

  VAR_8 = FUNC_1();
  if(VAR_8) {
    FUNC_3(VAR_8, VAR_6, "https://example.com");


    FUNC_3(VAR_8, VAR_4, "altsvc.txt");


    FUNC_3(VAR_8, VAR_5, (long)
                     VAR_0|VAR_1|VAR_2);


    VAR_9 = FUNC_2(VAR_8);

    if(VAR_9 != VAR_3)
      FUNC_5(VAR_7, "curl_easy_perform() failed: %s\n",
              FUNC_4(VAR_9));


    FUNC_0(VAR_8);
  }
  return 0;
}
