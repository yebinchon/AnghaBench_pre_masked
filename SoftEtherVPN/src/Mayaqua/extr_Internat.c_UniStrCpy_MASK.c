
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,char*) ;

UINT FUNC_3(wchar_t *VAR_0, UINT VAR_1, wchar_t *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  if (VAR_2 == ((void*)0) && VAR_0 != ((void*)0))
  {
   if (VAR_1 >= sizeof(wchar_t))
   {
    VAR_0[0] = L'\0';
   }
  }
  return 0;
 }
 if (VAR_0 == VAR_2)
 {
  return FUNC_1(VAR_2);
 }
 if (VAR_1 != 0 && VAR_1 < sizeof(wchar_t))
 {
  return 0;
 }
 if (VAR_1 == sizeof(wchar_t))
 {
  FUNC_2(VAR_0, L"");
  return 0;
 }
 if (VAR_1 == 0)
 {

  VAR_1 = 0x3fffffff;
 }


 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 <= (VAR_1 / sizeof(wchar_t) - 1))
 {
  FUNC_0(VAR_0, VAR_2, (VAR_3 + 1) * sizeof(wchar_t));
 }
 else
 {
  VAR_3 = VAR_1 / sizeof(wchar_t) - 1;
  FUNC_0(VAR_0, VAR_2, VAR_3 * sizeof(wchar_t));
  VAR_0[VAR_3] = 0;
 }

 return VAR_3;
}
