
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_off_t ;
typedef int CURLofft ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char const*,char**,int) ;

CURLofft FUNC_2(const char *VAR_5, char **VAR_6, int VAR_7,
                         curl_off_t *VAR_8)
{
  char *VAR_9;
  curl_off_t VAR_10;
  VAR_4 = 0;
  *VAR_8 = 0;

  while(*VAR_5 && FUNC_0(*VAR_5))
    VAR_5++;
  if('-' == *VAR_5) {
    if(VAR_6)
      *VAR_6 = (char *)VAR_5;
    return VAR_1;
  }
  VAR_10 = FUNC_1(VAR_5, &VAR_9, VAR_7);
  if(VAR_6)
    *VAR_6 = VAR_9;
  if(VAR_4 == VAR_3)

    return VAR_0;
  else if(VAR_5 == VAR_9)

    return VAR_1;

  *VAR_8 = VAR_10;
  return VAR_2;
}
