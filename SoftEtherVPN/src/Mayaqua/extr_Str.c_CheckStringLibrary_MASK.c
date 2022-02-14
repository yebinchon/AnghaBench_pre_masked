
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int tmp ;
typedef unsigned long long UINT64 ;
typedef int UINT ;


 int FUNC_0 (char*,int,char*,char*,char*,int,unsigned long long) ;
 scalar_t__ FUNC_1 (char*,char*) ;

bool FUNC_2()
{
 wchar_t *VAR_0 = L"TEST_TEST_123_123456789012345";
 char *VAR_1 = "TEST";
 wchar_t *VAR_2 = L"TEST";
 wchar_t VAR_3[64];
 UINT VAR_4 = 123;
 UINT64 VAR_5 = 123456789012345ULL;

 FUNC_0(VAR_3, sizeof(VAR_3), L"%S_%s_%u_%I64u", VAR_1, VAR_2,
  VAR_4, VAR_5);

 if (FUNC_1(VAR_3, VAR_0) != 0)
 {
  return 0;
 }

 return 1;
}
