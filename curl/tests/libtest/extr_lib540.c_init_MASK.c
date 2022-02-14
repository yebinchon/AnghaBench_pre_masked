
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const curl_slist ;
typedef int CURLM ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char const* VAR_8 ;
 int FUNC_0 (int *) ;
 int ** VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,...) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(int VAR_10, CURLM *VAR_11, const char *VAR_12, const char *VAR_13,
                struct curl_slist *VAR_14)
{
  int VAR_15 = 0;

  FUNC_1(VAR_9[VAR_10]);
  if(VAR_15)
    goto init_failed;

  FUNC_2(VAR_9[VAR_10], VAR_6, VAR_12);
  if(VAR_15)
    goto init_failed;

  FUNC_2(VAR_9[VAR_10], VAR_3, VAR_8);
  if(VAR_15)
    goto init_failed;

  FUNC_2(VAR_9[VAR_10], VAR_5, VAR_13);
  if(VAR_15)
    goto init_failed;

  FUNC_2(VAR_9[VAR_10], VAR_4, (long)VAR_0);
  if(VAR_15)
    goto init_failed;

  FUNC_2(VAR_9[VAR_10], VAR_7, 1L);
  if(VAR_15)
    goto init_failed;

  FUNC_2(VAR_9[VAR_10], VAR_1, 1L);
  if(VAR_15)
    goto init_failed;

  FUNC_2(VAR_9[VAR_10], VAR_2, VAR_14);
  if(VAR_15)
    goto init_failed;

  FUNC_3(VAR_11, VAR_9[VAR_10]);
  if(VAR_15)
    goto init_failed;

  return 0;

init_failed:

  FUNC_0(VAR_9[VAR_10]);
  VAR_9[VAR_10] = ((void*)0);

  return VAR_15;
}
