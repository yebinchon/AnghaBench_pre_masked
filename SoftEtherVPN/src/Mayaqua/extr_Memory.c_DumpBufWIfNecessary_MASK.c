
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int BUF ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

bool FUNC_4(BUF *VAR_0, wchar_t *VAR_1)
{
 BUF *VAR_2;
 bool VAR_3 = 1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_3(VAR_1);

 if (VAR_2 != ((void*)0))
 {
  if (FUNC_0(VAR_2, VAR_0))
  {
   VAR_3 = 0;
  }

  FUNC_2(VAR_2);
 }

 if (VAR_3 == 0)
 {
  return 1;
 }
 else
 {
  return FUNC_1(VAR_0, VAR_1);
 }
}
