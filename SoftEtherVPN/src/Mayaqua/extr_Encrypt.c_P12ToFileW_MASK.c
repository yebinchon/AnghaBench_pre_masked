
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int P12 ;
typedef int BUF ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

bool FUNC_3(P12 *VAR_0, wchar_t *VAR_1)
{
 BUF *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_2, VAR_1) == 0)
 {
  FUNC_1(VAR_2);
  return 0;
 }

 FUNC_1(VAR_2);

 return 1;
}
