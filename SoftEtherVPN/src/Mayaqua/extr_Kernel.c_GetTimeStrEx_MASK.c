
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char wchar_t ;
typedef int UINT ;
struct TYPE_7__ {int SecondStr; int MinuteStr; int HourStr; } ;
struct TYPE_6__ {int wSecond; int wMinute; int wHour; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef TYPE_2__ LOCALE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,char*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__ VAR_2 ;

void FUNC_2(wchar_t *VAR_3, UINT VAR_4, SYSTEMTIME *VAR_5, LOCALE *VAR_6)
{
 wchar_t *VAR_7 = L"%02u%s%02u%s%02u%s";

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 if (FUNC_1() == VAR_1 || FUNC_1() == VAR_0)
 {
  VAR_7 = L"%2u%s%2u%s%2u%s";
 }

 VAR_6 = (VAR_6 != ((void*)0) ? VAR_6 : &VAR_2);
 FUNC_0(VAR_3, VAR_4,
  VAR_7,
  VAR_5->wHour, VAR_6->HourStr,
  VAR_5->wMinute, VAR_6->MinuteStr,
  VAR_5->wSecond, VAR_6->SecondStr);
}
