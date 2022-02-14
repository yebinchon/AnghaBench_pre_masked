
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int*) ;
 int FUNC_13 () ;
 int VAR_8 ;

int FUNC_14(char *VAR_9)
{
  int VAR_10;
  CURLM *VAR_11 = ((void*)0);
  CURL *VAR_12 = ((void*)0);
  CURLMcode VAR_13 = VAR_1;
  int VAR_14;

  FUNC_9(VAR_6);

  FUNC_11(VAR_11);

  FUNC_6(VAR_12);

  FUNC_7(VAR_12, VAR_5, 1L);
  FUNC_7(VAR_12, VAR_4, VAR_9);


  if(FUNC_2(VAR_12, VAR_2, "0.0.0.0") == VAR_0)






    VAR_14 = VAR_7 * 2;
  else {
    FUNC_8(VAR_8,
            "CURLOPT_DNS_SERVERS not supported; "
            "assuming curl_multi_remove_handle() will block\n");
    VAR_14 = VAR_7 / 2;
  }





  FUNC_7(VAR_12, VAR_3, VAR_14);

  FUNC_10(VAR_11, VAR_12);


  FUNC_8(VAR_8, "curl_multi_perform()...\n");
  FUNC_12(VAR_11, &VAR_10);
  FUNC_8(VAR_8, "curl_multi_perform() succeeded\n");


  FUNC_8(VAR_8, "curl_multi_remove_handle()...\n");
  FUNC_13();
  VAR_13 = FUNC_5(VAR_11, VAR_12);
  if(VAR_13) {
    FUNC_8(VAR_8, "curl_multi_remove_handle() failed, "
            "with code %d\n", (int)VAR_13);
    goto test_cleanup;
  }
  FUNC_8(VAR_8, "curl_multi_remove_handle() succeeded\n");




  FUNC_0();

test_cleanup:
  FUNC_1(VAR_12);
  FUNC_4(VAR_11);
  FUNC_3();

  return (int)VAR_13;
}
