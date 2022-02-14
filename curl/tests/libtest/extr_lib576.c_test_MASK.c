
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char chunk_data_t ;
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
 char* VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,...) ;

int FUNC_6(char *VAR_10)
{
  CURL *VAR_11 = ((void*)0);
  CURLcode VAR_12 = VAR_0;
  chunk_data_t VAR_13 = {0, 0};
  FUNC_4(VAR_7);
  VAR_11 = FUNC_1();
  if(!VAR_11) {
    VAR_12 = VAR_1;
    goto test_cleanup;
  }

  FUNC_5(VAR_11, VAR_5, VAR_10);
  FUNC_5(VAR_11, VAR_6, 1L);
  FUNC_5(VAR_11, VAR_2, VAR_8);
  FUNC_5(VAR_11, VAR_4, VAR_9);
  FUNC_5(VAR_11, VAR_3, &VAR_13);

  VAR_12 = FUNC_2(VAR_11);

test_cleanup:
  if(VAR_11)
    FUNC_0(VAR_11);
  FUNC_3();
  return VAR_12;
}
