
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef scalar_t__ UINT ;


 scalar_t__* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__*) ;

bool FUNC_4(wchar_t *VAR_0, wchar_t *VAR_1)
{
 UINT VAR_2;
 UINT VAR_3;
 wchar_t *VAR_4;
 bool VAR_5;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_2 < VAR_3)
 {
  return 0;
 }
 if (VAR_2 == 0 || VAR_3 == 0)
 {
  return 0;
 }
 VAR_4 = FUNC_0(VAR_0);
 VAR_4[VAR_3] = 0;

 if (FUNC_2(VAR_4, VAR_1) == 0)
 {
  VAR_5 = 1;
 }
 else
 {
  VAR_5 = 0;
 }

 FUNC_1(VAR_4);

 return VAR_5;
}
