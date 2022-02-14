
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,...) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 long VAR_9 ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int*) ;
 int VAR_10 ;

int FUNC_11(char *VAR_11)
{
  int VAR_12;
  CURLM *VAR_13 = ((void*)0);
  CURL *VAR_14 = ((void*)0);
  CURLMcode VAR_15 = VAR_0;

  FUNC_7(VAR_8);

  FUNC_9(VAR_13);

  FUNC_4(VAR_14);

  FUNC_5(VAR_14, VAR_6, VAR_9);
  FUNC_5(VAR_14, VAR_3, "curl_client_key.pub");
  FUNC_5(VAR_14, VAR_2, "curl_client_key");

  FUNC_5(VAR_14, VAR_4, 1L);
  FUNC_5(VAR_14, VAR_7, 1L);

  FUNC_5(VAR_14, VAR_5, VAR_11);
  FUNC_5(VAR_14, VAR_1, (long)5);

  FUNC_8(VAR_13, VAR_14);




  FUNC_6(VAR_10, "curl_multi_perform()...\n");

  FUNC_10(VAR_13, &VAR_12);

  FUNC_6(VAR_10, "curl_multi_perform() succeeded\n");

  FUNC_6(VAR_10, "curl_multi_remove_handle()...\n");
  VAR_15 = FUNC_3(VAR_13, VAR_14);
  if(VAR_15)
    FUNC_6(VAR_10, "curl_multi_remove_handle() failed, "
            "with code %d\n", (int)VAR_15);
  else
    FUNC_6(VAR_10, "curl_multi_remove_handle() succeeded\n");

test_cleanup:



  FUNC_0(VAR_14);
  FUNC_2(VAR_13);
  FUNC_1();

  return (int)VAR_15;
}
