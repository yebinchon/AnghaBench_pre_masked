
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb_data {scalar_t__ remaining_bytes; } ;
typedef long curl_off_t ;
typedef scalar_t__ CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 long VAR_14 ;
 int FUNC_6 (struct cb_data*,int *) ;
 int VAR_15 ;
 int FUNC_7 (int *,int ,...) ;
 long VAR_16 ;

int FUNC_8(char *VAR_17)
{
  struct cb_data VAR_18;
  CURL *VAR_19 = ((void*)0);
  CURLcode VAR_20 = VAR_0;

  if(FUNC_3(VAR_11) != VAR_1) {
    FUNC_4(VAR_15, "curl_global_init() failed\n");
    return VAR_12;
  }

  VAR_19 = FUNC_1();
  if(VAR_19 == ((void*)0)) {
    FUNC_4(VAR_15, "curl_easy_init() failed\n");
    FUNC_2();
    return VAR_12;
  }

  FUNC_6(&VAR_18, VAR_19);

  FUNC_7(VAR_19, VAR_7, VAR_17);
  FUNC_7(VAR_19, VAR_3, 1L);
  FUNC_7(VAR_19, VAR_4,
              (curl_off_t)VAR_18.remaining_bytes);
  FUNC_7(VAR_19, VAR_8, 1L);
  FUNC_7(VAR_19, VAR_6, VAR_14);
  FUNC_7(VAR_19, VAR_5, &VAR_18);
  FUNC_7(VAR_19, VAR_10, VAR_16);
  FUNC_7(VAR_19, VAR_9, &VAR_18);

  VAR_20 = FUNC_5(VAR_19,
    "First request without CURLOPT_KEEP_SENDING_ON_ERROR", 1);
  if(VAR_20 != VAR_13) {
    goto test_cleanup;
  }

  FUNC_6(&VAR_18, VAR_19);

  VAR_20 = FUNC_5(VAR_19,
    "Second request without CURLOPT_KEEP_SENDING_ON_ERROR", 1);
  if(VAR_20 != VAR_13) {
    goto test_cleanup;
  }

  FUNC_7(VAR_19, VAR_2, 1L);

  FUNC_6(&VAR_18, VAR_19);

  VAR_20 = FUNC_5(VAR_19,
    "First request with CURLOPT_KEEP_SENDING_ON_ERROR", 1);
  if(VAR_20 != VAR_13) {
    goto test_cleanup;
  }

  FUNC_6(&VAR_18, VAR_19);

  VAR_20 = FUNC_5(VAR_19,
    "Second request with CURLOPT_KEEP_SENDING_ON_ERROR", 0);
  if(VAR_20 != VAR_13) {
    goto test_cleanup;
  }

  VAR_20 = VAR_13;

test_cleanup:

  FUNC_0(VAR_19);

  FUNC_2();

  return (int)VAR_20;
}
