
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int UINT ;


 int FUNC_0 (char*,int,void*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__*,int,char*) ;
 char* FUNC_3 (int) ;

void FUNC_4(wchar_t *VAR_0, UINT VAR_1, void *VAR_2, UINT VAR_3)
{
 char *VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  if (VAR_0 != ((void*)0))
  {
   VAR_0[0] = 0;
  }
  return;
 }

 VAR_5 = (VAR_3 * 2 + 4) * sizeof(wchar_t);
 VAR_4 = FUNC_3(VAR_5);

 FUNC_0(VAR_4, VAR_5, VAR_2, VAR_3);

 FUNC_2(VAR_0, VAR_1, VAR_4);

 FUNC_1(VAR_4);
}
