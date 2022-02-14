
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CURLcode ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,...) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int,int,int,char*,char*) ;
 int VAR_8 ;
 int FUNC_7 (int *,int ,...) ;

int FUNC_8(char *VAR_9)
{
  CURL *VAR_10;
  CURLcode VAR_11 = VAR_0;
  long VAR_12;
  long VAR_13;
  char *VAR_14 = ((void*)0);
  char *VAR_15 = ((void*)0);

  VAR_10 = FUNC_2();
  if(!VAR_10) {
    FUNC_5(VAR_8, "curl_easy_init() failed\n");
    FUNC_4();
    return VAR_7;
  }

  FUNC_7(VAR_10, VAR_6, VAR_9);

  FUNC_7(VAR_10, VAR_5, 0L);


  VAR_11 = FUNC_3(VAR_10);

  FUNC_1(VAR_10, VAR_4, &VAR_12);
  FUNC_1(VAR_10, VAR_2, &VAR_13);
  FUNC_1(VAR_10, VAR_1, &VAR_14);
  FUNC_1(VAR_10, VAR_3, &VAR_15);

  FUNC_6("res: %d\n"
         "status: %d\n"
         "redirects: %d\n"
         "effectiveurl: %s\n"
         "redirecturl: %s\n",
         (int)VAR_11,
         (int)VAR_12,
         (int)VAR_13,
         VAR_14,
         VAR_15);

test_cleanup:


  FUNC_0(VAR_10);
  FUNC_4();

  return VAR_11;
}
