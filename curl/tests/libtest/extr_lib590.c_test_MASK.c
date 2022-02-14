
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 char* VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int *,int ,...) ;

int FUNC_7(char *VAR_13)
{
  CURLcode VAR_14;
  CURL *VAR_15;

  if(FUNC_4(VAR_9) != VAR_3) {
    FUNC_5(VAR_12, "curl_global_init() failed\n");
    return VAR_10;
  }

  VAR_15 = FUNC_1();
  if(!VAR_15) {
    FUNC_5(VAR_12, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_10;
  }

  FUNC_6(VAR_15, VAR_8, VAR_13);
  FUNC_6(VAR_15, VAR_4, 1L);
  FUNC_6(VAR_15, VAR_6,
              (long) (VAR_0 | VAR_1 | VAR_2));
  FUNC_6(VAR_15, VAR_5, VAR_11);
  FUNC_6(VAR_15, VAR_7, "me:password");

  VAR_14 = FUNC_2(VAR_15);

  test_cleanup:

  FUNC_0(VAR_15);
  FUNC_3();

  return (int)VAR_14;
}
