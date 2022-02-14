
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,char*,int,long) ;
 scalar_t__ FUNC_7 (int *,char*,int,long) ;
 int VAR_6 ;

int FUNC_8(char *VAR_7)
{
  CURLcode VAR_8;
  CURL *VAR_9 = ((void*)0);

  long VAR_10 = FUNC_5(VAR_4);
  long VAR_11 = FUNC_5(VAR_5);

  if(VAR_10 == VAR_0 ||
      VAR_11 == VAR_0) {
    FUNC_4(VAR_6, "auth schemes not found on commandline\n");
    return VAR_3;
  }

  if(FUNC_3(VAR_2) != VAR_1) {
    FUNC_4(VAR_6, "curl_global_init() failed\n");
    return VAR_3;
  }



  VAR_9 = FUNC_1();
  if(!VAR_9) {
    FUNC_4(VAR_6, "curl_easy_init() failed\n");
    FUNC_2();
    return VAR_3;
  }

  VAR_8 = FUNC_7(VAR_9, VAR_7, 100, VAR_10);
  if(VAR_8 != VAR_1)
    goto test_cleanup;

  VAR_8 = FUNC_6(VAR_9, VAR_7, 200, VAR_11);
  if(VAR_8 != VAR_1)
    goto test_cleanup;

  FUNC_0(VAR_9);


  VAR_9 = FUNC_1();
  if(!VAR_9) {
    FUNC_4(VAR_6, "curl_easy_init() failed\n");
    FUNC_2();
    return VAR_3;
  }

  VAR_8 = FUNC_7(VAR_9, VAR_7, 300, VAR_10);
  if(VAR_8 != VAR_1)
    goto test_cleanup;

  VAR_8 = FUNC_7(VAR_9, VAR_7, 400, VAR_11);
  if(VAR_8 != VAR_1)
    goto test_cleanup;

  VAR_8 = FUNC_6(VAR_9, VAR_7, 500, VAR_11);
  if(VAR_8 != VAR_1)
    goto test_cleanup;

test_cleanup:

  FUNC_0(VAR_9);
  FUNC_2();

  return (int)VAR_8;
}
