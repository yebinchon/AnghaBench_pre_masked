
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_7 ;
 int FUNC_6 (int *,int ,...) ;

int FUNC_7(char *VAR_8)
{
  CURL *VAR_9;
  CURLcode VAR_10 = VAR_0;

  if(FUNC_4(VAR_5) != VAR_0) {
    FUNC_5(VAR_7, "curl_global_init() failed\n");
    return VAR_6;
  }


  VAR_9 = FUNC_1();
  if(!VAR_9) {
    FUNC_5(VAR_7, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_6;
  }


  FUNC_6(VAR_9, VAR_4, 1L);


  FUNC_6(VAR_9, VAR_2, 1L);


  FUNC_6(VAR_9, VAR_1, 0L);


  FUNC_6(VAR_9, VAR_3, VAR_8);


  VAR_10 = FUNC_2(VAR_9);

test_cleanup:

  FUNC_0(VAR_9);
  FUNC_3();

  return VAR_10;
}
