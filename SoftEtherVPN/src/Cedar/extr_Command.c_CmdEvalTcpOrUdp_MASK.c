
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int (* Write ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ CONSOLE ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

bool FUNC_3(CONSOLE *VAR_0, wchar_t *VAR_1, void *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_1, L"tcp") == 0 || FUNC_0(VAR_1, L"udp") == 0)
 {
  return 1;
 }

 VAR_0->Write(VAR_0, FUNC_1("CMD_KeepSet_EVAL_TCP_UDP"));

 return 0;
}
