
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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 char* FUNC_7 () ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

int FUNC_11(char *VAR_12)
{
  CURLcode VAR_13 = VAR_0;
  CURLSH *VAR_14;
  int VAR_15;

  FUNC_10(VAR_6);

  VAR_14 = FUNC_7();
  if(!VAR_14) {
    FUNC_9(VAR_11, "curl_share_init() failed\n");
    FUNC_5();
    return VAR_8;
  }

  FUNC_8(VAR_14, VAR_4, VAR_7);
  FUNC_8(VAR_14, VAR_3, VAR_9);
  FUNC_8(VAR_14, VAR_5, VAR_10);




  for(VAR_15 = 0; VAR_15 < 3; VAR_15++) {
    CURL *VAR_16 = FUNC_1();
    if(VAR_16) {
      FUNC_3(VAR_16, VAR_2, VAR_12);


      FUNC_3(VAR_16, VAR_1, VAR_14);


      VAR_13 = FUNC_2(VAR_16);

      if(VAR_13 != VAR_0)
        FUNC_9(VAR_11, "curl_easy_perform() failed: %s\n",
                FUNC_4(VAR_13));


      FUNC_0(VAR_16);
    }
  }

  FUNC_6(VAR_14);
  FUNC_5();

  return 0;
}
