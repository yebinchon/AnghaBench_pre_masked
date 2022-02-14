
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef scalar_t__ UINT ;
typedef int PACK ;
typedef int ELEMENT ;


 int * FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__,int ) ;
 int VAR_0 ;

bool FUNC_3(PACK *VAR_1, char *VAR_2, wchar_t *VAR_3, UINT VAR_4, UINT VAR_5)
{
 ELEMENT *VAR_6;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0)
 {
  return 0;
 }

 VAR_3[0] = 0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_6 == ((void*)0))
 {
  return 0;
 }
 FUNC_2(VAR_3, VAR_4, FUNC_1(VAR_6, VAR_5));
 return 1;
}
