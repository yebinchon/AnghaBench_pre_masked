
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT ;
struct TYPE_4__ {int (* Write ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ CONSOLE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;

bool FUNC_3(CONSOLE *VAR_0, wchar_t *VAR_1, void *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_1);

 if (VAR_3 >= 1 && VAR_3 <= 65535)
 {
  return 1;
 }

 VAR_0->Write(VAR_0, FUNC_1("CMD_EVAL_PORT"));

 return 0;
}
