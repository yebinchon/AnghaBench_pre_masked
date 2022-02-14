
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct curl_slist {int dummy; } ;
struct Curl_easy {TYPE_1__* cookies; } ;
struct Cookie {int domain; struct Cookie* next; } ;
struct TYPE_2__ {scalar_t__ numcookies; struct Cookie** cookies; } ;


 unsigned int VAR_0 ;
 struct curl_slist* FUNC_0 (struct curl_slist*,char*) ;
 int FUNC_1 (struct curl_slist*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct Cookie*) ;

__attribute__((used)) static struct curl_slist *FUNC_4(struct Curl_easy *VAR_1)
{
  struct curl_slist *VAR_2 = ((void*)0);
  struct curl_slist *VAR_3;
  struct Cookie *VAR_4;
  char *VAR_5;
  unsigned int VAR_6;

  if((VAR_1->cookies == ((void*)0)) ||
      (VAR_1->cookies->numcookies == 0))
    return ((void*)0);

  for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    for(VAR_4 = VAR_1->cookies->cookies[VAR_6]; VAR_4; VAR_4 = VAR_4->next) {
      if(!VAR_4->domain)
        continue;
      VAR_5 = FUNC_3(VAR_4);
      if(!VAR_5) {
        FUNC_1(VAR_2);
        return ((void*)0);
      }
      VAR_3 = FUNC_0(VAR_2, VAR_5);
      if(!VAR_3) {
        FUNC_2(VAR_5);
        FUNC_1(VAR_2);
        return ((void*)0);
      }
      VAR_2 = VAR_3;
    }
  }

  return VAR_2;
}
