
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_7__ {int NumTokens; int * Token; } ;
typedef TYPE_1__ UNI_TOKEN_LIST ;
typedef int UINT ;
struct TYPE_8__ {int Unknown; int SpanSecond; int SpanMinute; int SpanHour; int SpanDay; int * DayOfWeek; int SecondStr; int MinuteStr; int HourStr; int DayStr; int MonthStr; int YearStr; } ;
typedef TYPE_2__ LOCALE ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_2__*,int) ;

bool FUNC_4(LOCALE *VAR_0, wchar_t *VAR_1)
{
 UNI_TOKEN_LIST *VAR_2;
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 VAR_2 = FUNC_2(VAR_1, L" ");
 if (VAR_2->NumTokens != 18)
 {
  FUNC_1(VAR_2);
  return 0;
 }


 FUNC_3(VAR_0, sizeof(LOCALE));
 FUNC_0(VAR_0->YearStr, sizeof(VAR_0->YearStr), VAR_2->Token[0]);
 FUNC_0(VAR_0->MonthStr, sizeof(VAR_0->MonthStr), VAR_2->Token[1]);
 FUNC_0(VAR_0->DayStr, sizeof(VAR_0->DayStr), VAR_2->Token[2]);
 FUNC_0(VAR_0->HourStr, sizeof(VAR_0->HourStr), VAR_2->Token[3]);
 FUNC_0(VAR_0->MinuteStr, sizeof(VAR_0->MinuteStr), VAR_2->Token[4]);
 FUNC_0(VAR_0->SecondStr, sizeof(VAR_0->SecondStr), VAR_2->Token[5]);

 for (VAR_3 = 0;VAR_3 < 7;VAR_3++)
 {
  FUNC_0(VAR_0->DayOfWeek[VAR_3], sizeof(VAR_0->DayOfWeek[VAR_3]),
   VAR_2->Token[6 + VAR_3]);
 }

 FUNC_0(VAR_0->SpanDay, sizeof(VAR_0->SpanDay), VAR_2->Token[13]);
 FUNC_0(VAR_0->SpanHour, sizeof(VAR_0->SpanHour), VAR_2->Token[14]);
 FUNC_0(VAR_0->SpanMinute, sizeof(VAR_0->SpanMinute), VAR_2->Token[15]);
 FUNC_0(VAR_0->SpanSecond, sizeof(VAR_0->SpanSecond), VAR_2->Token[16]);

 FUNC_0(VAR_0->Unknown, sizeof(VAR_0->Unknown), VAR_2->Token[17]);

 FUNC_1(VAR_2);
 return 1;
}
