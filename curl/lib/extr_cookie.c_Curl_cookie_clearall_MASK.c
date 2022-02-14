
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CookieInfo {scalar_t__ numcookies; int ** cookies; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct CookieInfo *VAR_1)
{
  if(VAR_1) {
    unsigned int VAR_2;
    for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
      FUNC_0(VAR_1->cookies[VAR_2]);
      VAR_1->cookies[VAR_2] = ((void*)0);
    }
    VAR_1->numcookies = 0;
  }
}
