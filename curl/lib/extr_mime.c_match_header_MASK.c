
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curl_slist {char* data; } ;


 scalar_t__ FUNC_0 (char*,char const*,size_t) ;

__attribute__((used)) static char *FUNC_1(struct curl_slist *VAR_0, const char *VAR_1, size_t VAR_2)
{
  char *VAR_3 = ((void*)0);

  if(FUNC_0(VAR_0->data, VAR_1, VAR_2) && VAR_0->data[VAR_2] == ':')
    for(VAR_3 = VAR_0->data + VAR_2 + 1; *VAR_3 == ' '; VAR_3++)
      ;
  return VAR_3;
}
