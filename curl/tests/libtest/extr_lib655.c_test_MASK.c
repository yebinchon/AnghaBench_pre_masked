
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 char* VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int *,int ,char*) ;

int FUNC_7(char *VAR_13)
{
  CURL *VAR_14;
  CURLcode VAR_15 = VAR_1;

  if(FUNC_4(VAR_5) != VAR_1) {
    FUNC_5(VAR_12, "curl_global_init() failed\n");
    return VAR_8;
  }
  VAR_14 = FUNC_1();
  if(!VAR_14) {
    FUNC_5(VAR_12, "curl_easy_init() failed\n");
    VAR_15 = VAR_8;
    goto test_cleanup;
  }


  FUNC_6(VAR_14, VAR_4, VAR_13);

  FUNC_6(VAR_14, VAR_2, VAR_6);
  FUNC_6(VAR_14, VAR_3, VAR_10);


  VAR_15 = FUNC_2(VAR_14);
  if(VAR_15 != VAR_0) {
    FUNC_5(VAR_12, "curl_easy_perform should have returned "
            "CURLE_COULDNT_RESOLVE_HOST but instead returned error %ld\n", VAR_15);
    if(VAR_15 == VAR_1)
      VAR_15 = VAR_7;
    goto test_cleanup;
  }

  FUNC_6(VAR_14, VAR_3, VAR_11);


  VAR_15 = FUNC_2(VAR_14);
  if(VAR_15) {
    FUNC_5(VAR_12, "curl_easy_perform failed.\n");
    goto test_cleanup;
  }

  if(VAR_9 != 2) {
    FUNC_5(VAR_12, "Unexpected number of callbacks: %d\n", VAR_9);
    VAR_15 = VAR_7;
    goto test_cleanup;
  }

test_cleanup:

  FUNC_0(VAR_14);
  FUNC_3();

  return (int)VAR_15;
}
