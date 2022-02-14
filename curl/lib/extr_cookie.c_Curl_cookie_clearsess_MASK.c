
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CookieInfo {struct Cookie** cookies; int numcookies; } ;
struct Cookie {struct Cookie* next; int expires; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct Cookie*) ;

void FUNC_1(struct CookieInfo *VAR_1)
{
  struct Cookie *VAR_2, *VAR_3, *VAR_4, *VAR_5 = ((void*)0);
  unsigned int VAR_6;

  if(!VAR_1)
    return;

  for(VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
    if(!VAR_1->cookies[VAR_6])
      continue;

    VAR_2 = VAR_3 = VAR_5 = VAR_1->cookies[VAR_6];

    for(; VAR_3; VAR_3 = VAR_4) {
      VAR_4 = VAR_3->next;
      if(!VAR_3->expires) {
        if(VAR_2 == VAR_3)
          VAR_2 = VAR_4;

        if(VAR_5 == VAR_3)
          VAR_5 = VAR_4;
        else
          VAR_5->next = VAR_4;

        FUNC_0(VAR_3);
        VAR_1->numcookies--;
      }
      else
        VAR_5 = VAR_3;
    }

    VAR_1->cookies[VAR_6] = VAR_2;
  }
}
