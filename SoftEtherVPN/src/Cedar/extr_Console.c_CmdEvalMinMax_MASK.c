
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {char* StrName; scalar_t__ MinValue; scalar_t__ MaxValue; } ;
struct TYPE_5__ {int (* Write ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ CONSOLE ;
typedef TYPE_2__ CMD_EVAL_MIN_MAX ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

bool FUNC_4(CONSOLE *VAR_1, wchar_t *VAR_2, void *VAR_3)
{
 CMD_EVAL_MIN_MAX *VAR_4;
 wchar_t *VAR_5;
 UINT VAR_6;

 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = (CMD_EVAL_MIN_MAX *)VAR_3;

 if (VAR_4->StrName == ((void*)0))
 {
  VAR_5 = FUNC_2("CMD_EVAL_MIN_MAX");
 }
 else
 {
  VAR_5 = FUNC_2(VAR_4->StrName);
 }

 VAR_6 = FUNC_1(VAR_2);

 if (VAR_6 >= VAR_4->MinValue && VAR_6 <= VAR_4->MaxValue)
 {
  return 1;
 }
 else
 {
  wchar_t VAR_7[VAR_0];

  FUNC_0(VAR_7, sizeof(VAR_7), VAR_5, VAR_4->MinValue, VAR_4->MaxValue);
  VAR_1->Write(VAR_1, VAR_7);

  return 0;
 }
}
