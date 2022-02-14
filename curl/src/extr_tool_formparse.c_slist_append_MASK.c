
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {int dummy; } ;


 struct curl_slist* FUNC_0 (struct curl_slist*,char const*) ;

__attribute__((used)) static int FUNC_1(struct curl_slist **VAR_0, const char *VAR_1)
{
  struct curl_slist *VAR_2 = FUNC_0(*VAR_0, VAR_1);

  if(!VAR_2)
    return -1;

  *VAR_0 = VAR_2;
  return 0;
}
