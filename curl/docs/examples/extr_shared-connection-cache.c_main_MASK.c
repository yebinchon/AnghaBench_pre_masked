
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef char CURLSH ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 () ;
 int FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int ,char*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_9(void)
{
  CURLSH *VAR_10;
  int VAR_11;

  VAR_10 = FUNC_6();
  FUNC_7(VAR_10, VAR_4, VAR_6);

  FUNC_7(VAR_10, VAR_3, VAR_7);
  FUNC_7(VAR_10, VAR_5, VAR_8);




  for(VAR_11 = 0; VAR_11 < 3; VAR_11++) {
    CURL *VAR_12 = FUNC_1();
    if(VAR_12) {
      CURLcode VAR_13;

      FUNC_3(VAR_12, VAR_2, "https://curl.haxx.se/");


      FUNC_3(VAR_12, VAR_1, VAR_10);


      VAR_13 = FUNC_2(VAR_12);

      if(VAR_13 != VAR_0)
        FUNC_8(VAR_9, "curl_easy_perform() failed: %s\n",
                FUNC_4(VAR_13));


      FUNC_0(VAR_12);
    }
  }

  FUNC_5(VAR_10);
  return 0;
}
