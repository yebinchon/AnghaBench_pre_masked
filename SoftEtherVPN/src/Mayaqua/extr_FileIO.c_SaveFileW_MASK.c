
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;
typedef int IO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,void*,int ) ;

bool FUNC_3(wchar_t *VAR_0, void *VAR_1, UINT VAR_2)
{
 IO *VAR_3;

 if (VAR_0 == ((void*)0) || (VAR_1 == ((void*)0) && VAR_2 != 0))
 {
  return 0;
 }

 VAR_3 = FUNC_1(VAR_0);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_2(VAR_3, VAR_1, VAR_2) == 0)
 {
  FUNC_0(VAR_3);
  return 0;
 }

 FUNC_0(VAR_3);

 return 1;
}
