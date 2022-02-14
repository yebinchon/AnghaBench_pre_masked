
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_slist {char* data; struct curl_slist* next; } ;
struct connectdata {struct Curl_easy* data; } ;
struct TYPE_2__ {struct curl_slist* headers; } ;
struct Curl_easy {TYPE_1__ set; } ;


 scalar_t__ FUNC_0 (char) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,size_t) ;

char *FUNC_3(const struct connectdata *VAR_0,
                        const char *VAR_1)
{
  struct curl_slist *VAR_2;
  size_t VAR_3 = FUNC_1(VAR_1);
  struct Curl_easy *VAR_4 = VAR_0->data;

  for(VAR_2 = VAR_4->set.headers; VAR_2; VAR_2 = VAR_2->next) {
    if(FUNC_2(VAR_2->data, VAR_1, VAR_3) &&
       FUNC_0(VAR_2->data[VAR_3]) )
      return VAR_2->data;
  }

  return ((void*)0);
}
