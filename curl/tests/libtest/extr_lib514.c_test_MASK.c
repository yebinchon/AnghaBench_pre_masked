
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






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
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_10 ;
 int FUNC_6 (int *,int ,...) ;

int FUNC_7(char *VAR_11)
{
  CURL *VAR_12;
  CURLcode VAR_13 = VAR_0;

  if(FUNC_4(VAR_8) != VAR_0) {
    FUNC_5(VAR_10, "curl_global_init() failed\n");
    return VAR_9;
  }

  VAR_12 = FUNC_1();
  if(!VAR_12) {
    FUNC_5(VAR_10, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_9;
  }


  FUNC_6(VAR_12, VAR_6, VAR_11);
  FUNC_6(VAR_12, VAR_4, "moo");
  FUNC_6(VAR_12, VAR_5, 3L);
  FUNC_6(VAR_12, VAR_3, 1L);




  FUNC_6(VAR_12, VAR_2, 1L);

  FUNC_6(VAR_12, VAR_7, 1L);
  FUNC_6(VAR_12, VAR_1, 1L);




  VAR_13 = FUNC_2(VAR_12);

test_cleanup:


  FUNC_0(VAR_12);
  FUNC_3();

  return (int)VAR_13;
}
