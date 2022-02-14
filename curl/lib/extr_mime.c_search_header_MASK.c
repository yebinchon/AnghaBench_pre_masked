
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {struct curl_slist* next; } ;


 char* FUNC_0 (struct curl_slist*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static char *FUNC_2(struct curl_slist *VAR_0, const char *VAR_1)
{
  size_t VAR_2 = FUNC_1(VAR_1);
  char *VAR_3 = ((void*)0);

  for(; !VAR_3 && VAR_0; VAR_0 = VAR_0->next)
    VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

  return VAR_3;
}
