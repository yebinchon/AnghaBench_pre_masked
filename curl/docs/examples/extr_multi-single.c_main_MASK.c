
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int *) ;
 scalar_t__ FUNC_11 (int *,int *,int ,int,int*) ;
 int FUNC_12 (int ,char*,scalar_t__) ;
 int VAR_3 ;

int FUNC_13(void)
{
  CURL *VAR_4;
  CURLM *VAR_5;

  int VAR_6 = 0;
  int VAR_7 = 0;

  FUNC_5(VAR_2);

  VAR_4 = FUNC_2();


  FUNC_3(VAR_4, VAR_1, "https://www.example.com/");


  VAR_5 = FUNC_8();


  FUNC_6(VAR_5, VAR_4);


  FUNC_9(VAR_5, &VAR_6);

  while(VAR_6) {
    CURLMcode VAR_8;
    int VAR_9;


    VAR_8 = FUNC_11(VAR_5, ((void*)0), 0, 1000, &VAR_9);

    if(VAR_8 != VAR_0) {
      FUNC_12(VAR_3, "curl_multi_wait() failed, code %ld.\n", VAR_8);
      break;
    }






    if(!VAR_9) {
      VAR_7++;
      if(VAR_7 > 1) {
        FUNC_0(100);
      }
    }
    else
      VAR_7 = 0;

    FUNC_9(VAR_5, &VAR_6);
  }

  FUNC_10(VAR_5, VAR_4);

  FUNC_1(VAR_4);

  FUNC_7(VAR_5);

  FUNC_4();

  return 0;
}
