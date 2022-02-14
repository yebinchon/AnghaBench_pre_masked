
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int fullpath ;
typedef int filename ;
typedef int dirname ;
typedef int datestr ;
typedef int* UINT ;
struct TYPE_6__ {int* LastSavedDateStr; } ;
struct TYPE_5__ {int wHour; int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int FOLDER ;
typedef TYPE_2__ CFG_RW ;


 int FUNC_0 (int *,int*) ;
 int* VAR_0 ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int,char*,int*,...) ;
 scalar_t__ FUNC_5 (int*,int*) ;
 int FUNC_6 (int*,int,int*) ;

void FUNC_7(CFG_RW *VAR_2, FOLDER *VAR_3, wchar_t *VAR_4, UINT VAR_5)
{
 wchar_t VAR_6[VAR_1];
 wchar_t VAR_7[VAR_1];
 wchar_t VAR_8[VAR_1];
 wchar_t VAR_9[VAR_1];
 SYSTEMTIME VAR_10;

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 FUNC_4(VAR_6, sizeof(VAR_6), L"@backup.%s", VAR_4[0] == L'@' ? VAR_4 + 1 : VAR_4);


 FUNC_2(&VAR_10);
 FUNC_4(VAR_9, sizeof(VAR_9), L"%04u%02u%02u%02u_%s",
  &VAR_10.wYear, VAR_10.wMonth, VAR_10.wDay, VAR_10.wHour, VAR_4[0] == L'@' ? VAR_4 + 1 : VAR_4);

 if (VAR_5 == VAR_0)
 {
  FUNC_6(VAR_7, sizeof(VAR_7), VAR_9);
 }
 else
 {
  FUNC_4(VAR_7, sizeof(VAR_7), L"%08u_%s",
   VAR_5, VAR_4[0] == L'@' ? VAR_4 + 1 : VAR_4);
 }


 if (FUNC_5(VAR_9, VAR_2->LastSavedDateStr) == 0)
 {
  return;
 }

 FUNC_6(VAR_2->LastSavedDateStr, sizeof(VAR_2->LastSavedDateStr), VAR_9);


 if (FUNC_1(VAR_7))
 {
  return;
 }


 FUNC_3(VAR_6);


 FUNC_4(VAR_8, sizeof(VAR_8), L"%s/%s", VAR_6, VAR_7);
 FUNC_0(VAR_3, VAR_8);
}
