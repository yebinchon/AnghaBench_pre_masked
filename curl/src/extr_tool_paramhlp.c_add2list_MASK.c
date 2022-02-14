
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;
typedef int ParameterError ;


 int VAR_0 ;
 int VAR_1 ;
 struct curl_slist* FUNC_0 (struct curl_slist*,char const*) ;

ParameterError FUNC_1(struct curl_slist **VAR_2, const char *VAR_3)
{
  struct curl_slist *VAR_4 = FUNC_0(*VAR_2, VAR_3);
  if(VAR_4)
    *VAR_2 = VAR_4;
  else
    return VAR_0;

  return VAR_1;
}
