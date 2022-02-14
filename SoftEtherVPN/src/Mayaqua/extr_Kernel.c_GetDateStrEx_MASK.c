
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int UINT ;
struct TYPE_7__ {int * DayOfWeek; int DayStr; int MonthStr; int YearStr; } ;
struct TYPE_6__ {size_t wDayOfWeek; int wDay; int wMonth; int wYear; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__ LOCALE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,char*,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__ VAR_2 ;

void FUNC_2(wchar_t *VAR_3, UINT VAR_4, SYSTEMTIME *VAR_5, LOCALE *VAR_6)
{
 wchar_t *VAR_7 = L"%04u%s%02u%s%02u%s (%s)";

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 if (FUNC_1() == VAR_1 || FUNC_1() == VAR_0)
 {
  VAR_7 = L"%4u%s%2u%s%2u%s(%s)";
 }

 VAR_6 = (VAR_6 != ((void*)0) ? VAR_6 : &VAR_2);
 FUNC_0(VAR_3, VAR_4,
  VAR_7,
  VAR_5->wYear, VAR_6->YearStr,
  VAR_5->wMonth, VAR_6->MonthStr,
  VAR_5->wDay, VAR_6->DayStr,
  VAR_6->DayOfWeek[VAR_5->wDayOfWeek]);
}
