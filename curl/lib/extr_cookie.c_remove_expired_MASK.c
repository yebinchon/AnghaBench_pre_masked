
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CookieInfo {int numcookies; struct Cookie** cookies; } ;
struct Cookie {scalar_t__ expires; struct Cookie* next; } ;
typedef scalar_t__ curl_off_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct Cookie*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct CookieInfo *VAR_1)
{
  struct Cookie *VAR_2, *VAR_3;
  curl_off_t VAR_4 = (curl_off_t)FUNC_1(((void*)0));
  unsigned int VAR_5;

  for(VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
    struct Cookie *VAR_6 = ((void*)0);
    VAR_2 = VAR_1->cookies[VAR_5];
    while(VAR_2) {
      VAR_3 = VAR_2->next;
      if(VAR_2->expires && VAR_2->expires < VAR_4) {
        if(!VAR_6) {
          VAR_1->cookies[VAR_5] = VAR_2->next;
        }
        else {
          VAR_6->next = VAR_2->next;
        }
        VAR_1->numcookies--;
        FUNC_0(VAR_2);
      }
      else {
        VAR_6 = VAR_2;
      }
      VAR_2 = VAR_3;
    }
  }
}
