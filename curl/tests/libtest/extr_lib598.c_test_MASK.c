
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
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_9 ;
 int FUNC_7 (int *,int ,...) ;

int FUNC_8(char *VAR_10)
{
  CURLcode VAR_11;
  CURL *VAR_12;

  if(FUNC_5(VAR_7) != VAR_0) {
    FUNC_6(VAR_9, "curl_global_init() failed\n");
    return VAR_8;
  }

  VAR_12 = FUNC_1();
  if(!VAR_12) {
    FUNC_6(VAR_9, "curl_easy_init() failed\n");
    FUNC_4();
    return VAR_8;
  }

  FUNC_7(VAR_12, VAR_4, VAR_10);
  FUNC_7(VAR_12, VAR_2, 1L);
  FUNC_7(VAR_12, VAR_3, "http://example.com/the-moo");
  FUNC_7(VAR_12, VAR_5, "the-moo agent next generation");
  FUNC_7(VAR_12, VAR_1, "name=moo");
  FUNC_7(VAR_12, VAR_6, 1L);

  VAR_11 = FUNC_2(VAR_12);
  if(VAR_11) {
    FUNC_6(VAR_9, "retrieve 1 failed\n");
    goto test_cleanup;
  }

  FUNC_3(VAR_12);

  FUNC_7(VAR_12, VAR_4, VAR_10);
  FUNC_7(VAR_12, VAR_2, 1L);
  FUNC_7(VAR_12, VAR_6, 1L);

  VAR_11 = FUNC_2(VAR_12);
  if(VAR_11)
    FUNC_6(VAR_9, "retrieve 2 failed\n");

test_cleanup:

  FUNC_0(VAR_12);
  FUNC_4();

  return (int)VAR_11;
}
