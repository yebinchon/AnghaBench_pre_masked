
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int (* Write ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ CONSOLE ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

bool FUNC_5(CONSOLE *VAR_0, wchar_t *VAR_1, void *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_1))
 {
  return 1;
 }

 if (FUNC_2(VAR_1) == 0 && FUNC_1(VAR_1, L"0.0.0.0") != 0)
 {
  wchar_t *VAR_3 = (VAR_2 == ((void*)0)) ? FUNC_3("CMD_IP_EVAL_FAILED") : (wchar_t *)VAR_2;
  VAR_0->Write(VAR_0, VAR_3);
  return 0;
 }

 return 1;
}
