
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CookieInfo {int * cookies; struct CookieInfo* filename; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct CookieInfo*) ;

void FUNC_2(struct CookieInfo *VAR_1)
{
  if(VAR_1) {
    unsigned int VAR_2;
    FUNC_1(VAR_1->filename);
    for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
      FUNC_0(VAR_1->cookies[VAR_2]);
    FUNC_1(VAR_1);
  }
}
