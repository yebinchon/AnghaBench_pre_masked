
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef scalar_t__ CURLcode ;
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
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 int VAR_11 ;
 char* VAR_12 ;
 int FUNC_8 (int *,int ,char*) ;

int FUNC_9(char *VAR_13)
{
  CURLcode VAR_14;
  CURL *VAR_15;
  struct curl_slist *VAR_16 = ((void*)0);

  if(FUNC_4(VAR_8) != VAR_0) {
    FUNC_7(VAR_11, "curl_global_init() failed\n");
    return VAR_10;
  }

  VAR_15 = FUNC_1();
  if(!VAR_15) {
    FUNC_7(VAR_11, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_10;
  }


  FUNC_8(VAR_15, VAR_1, VAR_12);
  FUNC_8(VAR_15, VAR_7, VAR_12);

  FUNC_8(VAR_15, VAR_5, VAR_13);
  FUNC_8(VAR_15, VAR_4, VAR_13);
  FUNC_8(VAR_15, VAR_3, VAR_9);
  FUNC_8(VAR_15, VAR_6, "test567");

  VAR_16 = FUNC_5(VAR_16, "Test-Number: 567");
  FUNC_8(VAR_15, VAR_2, VAR_16);

  VAR_14 = FUNC_2(VAR_15);

test_cleanup:

  if(VAR_16)
    FUNC_6(VAR_16);
  FUNC_0(VAR_15);
  FUNC_3();

  return (int)VAR_14;
}
