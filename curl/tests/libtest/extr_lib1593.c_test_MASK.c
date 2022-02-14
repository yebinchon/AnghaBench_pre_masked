
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char curl_slist ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,long*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 char* FUNC_4 (int *,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,...) ;
 int FUNC_8 (int ) ;

int FUNC_9(char *VAR_9)
{
  struct curl_slist *VAR_10 = ((void*)0);
  long VAR_11;
  CURL *VAR_12 = ((void*)0);
  int VAR_13 = 0;

  FUNC_8(VAR_5);

  FUNC_6(VAR_12);

  FUNC_7(VAR_12, VAR_4, VAR_9);
  FUNC_7(VAR_12, VAR_2, (long)VAR_6);

  FUNC_7(VAR_12, VAR_3, 1566210680L);

  VAR_10 = FUNC_4(((void*)0), "If-Modified-Since:");
  if(!VAR_10) {
    VAR_13 = VAR_8;
    goto test_cleanup;
  }

  FUNC_7(VAR_12, VAR_1, VAR_10);

  VAR_13 = FUNC_2(VAR_12);
  if(VAR_13)
    goto test_cleanup;






  VAR_13 = FUNC_1(VAR_12, VAR_0, &VAR_11);
  if(VAR_13)
    goto test_cleanup;

  if(VAR_11 != 1L) {
    VAR_13 = VAR_7;
    goto test_cleanup;
  }

test_cleanup:


  FUNC_0(VAR_12);
  FUNC_5(VAR_10);
  FUNC_3();

  return VAR_13;
}
