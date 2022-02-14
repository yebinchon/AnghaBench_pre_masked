
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef int UINT ;


 int FUNC_0 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (scalar_t__*,char*) ;

UINT FUNC_3(wchar_t *VAR_0, UINT VAR_1, wchar_t *VAR_2)
{
 UINT VAR_3, VAR_4, VAR_5;

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
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

 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_1(VAR_2);
 VAR_5 = VAR_3 + VAR_4 + 1;
 if (VAR_5 > (VAR_1 / sizeof(wchar_t)))
 {
  if (VAR_4 <= (VAR_5 - (VAR_1 / sizeof(wchar_t))))
  {
   return 0;
  }
  VAR_4 -= VAR_5 - (VAR_1 / sizeof(wchar_t));
 }
 FUNC_0(&VAR_0[VAR_3], VAR_2, VAR_4 * sizeof(wchar_t));
 VAR_0[VAR_3 + VAR_4] = 0;

 return VAR_3 + VAR_4;
}
