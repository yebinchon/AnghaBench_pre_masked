
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
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 long VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int *,int ,...) ;

int FUNC_7(char *VAR_9)
{
  CURL *VAR_10 = ((void*)0);
  CURLcode VAR_11 = VAR_0;
  (void)VAR_9;

  if(FUNC_4(VAR_5) != VAR_1) {
    FUNC_5(VAR_8, "curl_global_init() failed\n");
    return VAR_6;
  }

  VAR_10 = FUNC_1();
  if(!VAR_10) {
    FUNC_5(VAR_8, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_6;
  }

  FUNC_6(VAR_10, VAR_3, "http://99.99.99.99:9999");
  FUNC_6(VAR_10, VAR_4, 1L);
  FUNC_6(VAR_10, VAR_2, VAR_7);

  VAR_11 = FUNC_2(VAR_10);

test_cleanup:

  FUNC_0(VAR_10);
  FUNC_3();

  return (int)VAR_11;
}
