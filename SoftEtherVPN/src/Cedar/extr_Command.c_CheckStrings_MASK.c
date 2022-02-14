
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp2 ;
typedef int tmp ;
struct TYPE_4__ {int NumTokens; int ** Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef int UINT ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int,char*,int *,int) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,int,int *) ;
 int * FUNC_8 (char*) ;

bool FUNC_9()
{
 wchar_t *VAR_1 = FUNC_8("CHECK_TEST_123456789");
 char VAR_2[VAR_0];
 wchar_t VAR_3[VAR_0];
 UINT VAR_4;
 UINT VAR_5, VAR_6;
 UNI_TOKEN_LIST *VAR_7;

 FUNC_5(VAR_3, sizeof(VAR_3), L"");

 VAR_6 = 0;
 for (VAR_4 = 0;VAR_4 < 64;VAR_4++)
 {
  VAR_6 += VAR_4;
  FUNC_2(VAR_3, sizeof(VAR_3), L"%s,%u", VAR_3, VAR_4);
 }

 VAR_7 = FUNC_4(VAR_3, L",");

 VAR_5 = 0;

 for (VAR_4 = 0;VAR_4 < VAR_7->NumTokens;VAR_4++)
 {
  wchar_t *VAR_8 = VAR_7->Token[VAR_4];
  UINT VAR_9 = FUNC_6(VAR_8);

  VAR_5 += VAR_9;
 }

 FUNC_3(VAR_7);

 if (VAR_5 != VAR_6)
 {
  FUNC_0("UniParseToken Failed.\n");
  return 0;
 }

 if (FUNC_6(VAR_1) != 123456789)
 {
  FUNC_0("UniToInt Failed.\n");
  return 0;
 }

 FUNC_7(VAR_2, sizeof(VAR_2), VAR_1);
 if (FUNC_1(VAR_2) != 123456789)
 {
  FUNC_0("UniToStr Failed.\n");
  return 0;
 }

 return 1;
}
