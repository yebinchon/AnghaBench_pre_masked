
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef size_t UINT ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

void FUNC_2(wchar_t *VAR_0)
{
 UINT VAR_1, VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_0(VAR_0);
 for (VAR_1 = 0;VAR_1 < VAR_2;VAR_1++)
 {
  VAR_0[VAR_1] = FUNC_1(VAR_0[VAR_1]);
 }
}
