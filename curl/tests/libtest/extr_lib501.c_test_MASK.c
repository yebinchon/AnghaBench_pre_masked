
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
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,long) ;

int FUNC_7(char *VAR_6)
{
  CURLcode VAR_7;
  CURL *VAR_8;

  (void)VAR_6;

  if(FUNC_4(VAR_3) != VAR_0) {
    FUNC_5(VAR_5, "curl_global_init() failed\n");
    return VAR_4;
  }

  VAR_8 = FUNC_1();
  if(!VAR_8) {
    FUNC_5(VAR_5, "curl_easy_init() failed\n");
    FUNC_3();
    return VAR_4;
  }

  FUNC_6(VAR_8, VAR_1, 1L);


  FUNC_6(VAR_8, VAR_2, -1L);

  VAR_7 = FUNC_2(VAR_8);

test_cleanup:

  FUNC_0(VAR_8);
  FUNC_3();

  return (int)VAR_7;
}
