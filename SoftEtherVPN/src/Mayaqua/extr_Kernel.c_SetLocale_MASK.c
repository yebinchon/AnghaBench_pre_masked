
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int LOCALE ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int * VAR_1 ;

void FUNC_2(wchar_t *VAR_2)
{
 wchar_t *VAR_3;
 LOCALE VAR_4;

 if (VAR_2 != ((void*)0))
 {
  VAR_3 = VAR_2;
 }
 else
 {
  VAR_3 = VAR_1;
 }

 if (FUNC_1(&VAR_4, VAR_3) == 0)
 {
  if (FUNC_1(&VAR_4, VAR_1) == 0)
  {
   return;
  }
 }

 FUNC_0(&VAR_0, &VAR_4, sizeof(LOCALE));
}
