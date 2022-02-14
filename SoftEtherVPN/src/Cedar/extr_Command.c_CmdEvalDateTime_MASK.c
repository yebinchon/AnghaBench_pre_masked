
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef scalar_t__ UINT64 ;
struct TYPE_4__ {int (* Write ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ CONSOLE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

bool FUNC_4(CONSOLE *VAR_2, wchar_t *VAR_3, void *VAR_4)
{
 UINT64 VAR_5;
 char VAR_6[VAR_1];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_6, sizeof(VAR_6), VAR_3);

 VAR_5 = FUNC_0(VAR_6);

 if (VAR_5 == VAR_0)
 {
  VAR_2->Write(VAR_2, FUNC_2("CMD_EVAL_DATE_TIME_FAILED"));
  return 0;
 }

 return 1;
}
