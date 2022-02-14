
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int dir ;
typedef int UINT ;


 int FUNC_0 (int*,int ,int*,int*) ;
 int FUNC_1 (int*,int) ;
 int VAR_0 ;
 int FUNC_2 (int*,int ,int*) ;

void FUNC_3(wchar_t *VAR_1, UINT VAR_2, wchar_t *VAR_3)
{

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (VAR_3[0] != L'@')
 {
  FUNC_2(VAR_1, VAR_2, VAR_3);
 }
 else
 {
  wchar_t VAR_4[VAR_0];
  FUNC_1(VAR_4, sizeof(VAR_4));
  FUNC_0(VAR_1, VAR_2, VAR_4, &VAR_3[1]);
 }
}
