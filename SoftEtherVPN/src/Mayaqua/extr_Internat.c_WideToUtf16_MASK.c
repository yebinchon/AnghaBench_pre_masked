
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wchar_t ;
typedef scalar_t__ USHORT ;
typedef int UINT ;


 scalar_t__* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*) ;

USHORT *FUNC_2(wchar_t *VAR_0)
{
 USHORT *VAR_1;
 UINT VAR_2;
 UINT VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_1(VAR_0);

 VAR_3 = (VAR_2 + 1) * 2;
 VAR_1 = FUNC_0(VAR_3);

 for (VAR_4 = 0;VAR_4 < VAR_2 + 1;VAR_4++)
 {
  VAR_1[VAR_4] = (USHORT)VAR_0[VAR_4];
 }

 return VAR_1;
}
