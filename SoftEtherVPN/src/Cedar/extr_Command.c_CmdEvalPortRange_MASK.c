
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
struct TYPE_4__ {int (* Write ) (TYPE_1__*,int ) ;} ;
typedef TYPE_1__ CONSOLE ;


 int FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (char*,int,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

bool FUNC_4(CONSOLE *VAR_0, wchar_t *VAR_1, void *VAR_2)
{
 char VAR_3[64];

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(VAR_3, sizeof(VAR_3), VAR_1);

 if (FUNC_0(VAR_3, ((void*)0), ((void*)0)) == 0)
 {
  VAR_0->Write(VAR_0, FUNC_2("CMD_PORT_RANGE_EVAL_FAILED"));
  return 0;
 }

 return 1;
}
