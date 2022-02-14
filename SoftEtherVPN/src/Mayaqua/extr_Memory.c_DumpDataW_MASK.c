
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

bool FUNC_3(void *VAR_0, UINT VAR_1, wchar_t *VAR_2)
{
 IO *VAR_3;

 if (VAR_2 == ((void*)0) || (VAR_1 != 0 && VAR_0 == ((void*)0)))
 {
  return 0;
 }

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }
 FUNC_2(VAR_3, VAR_0, VAR_1);
 FUNC_0(VAR_3);

 return 1;
}
