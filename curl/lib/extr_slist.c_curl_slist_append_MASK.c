
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;


 struct curl_slist* FUNC_0 (struct curl_slist*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char const*) ;

struct curl_slist *FUNC_3(struct curl_slist *VAR_0,
                                     const char *VAR_1)
{
  char *VAR_2 = FUNC_2(VAR_1);

  if(!VAR_2)
    return ((void*)0);

  VAR_0 = FUNC_0(VAR_0, VAR_2);
  if(!VAR_0)
    FUNC_1(VAR_2);

  return VAR_0;
}
