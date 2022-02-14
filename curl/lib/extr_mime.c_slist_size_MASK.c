
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {char const* data; struct curl_slist* next; } ;


 int FUNC_0 (struct curl_slist*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static size_t FUNC_2(struct curl_slist *VAR_0,
                         size_t VAR_1, const char *VAR_2)
{
  size_t VAR_3 = 0;
  size_t VAR_4 = VAR_2? FUNC_1(VAR_2): 0;

  for(; VAR_0; VAR_0 = VAR_0->next)
    if(!VAR_2 || !FUNC_0(VAR_0, VAR_2, VAR_4))
      VAR_3 += FUNC_1(VAR_0->data) + VAR_1;
  return VAR_3;
}
