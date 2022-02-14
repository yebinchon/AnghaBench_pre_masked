
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT ;
struct TYPE_4__ {int (* Write ) (TYPE_1__*,int *) ;} ;
typedef TYPE_1__ CONSOLE ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *,int *,int ) ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

bool FUNC_5(CONSOLE *VAR_0, wchar_t *VAR_1, void *VAR_2)
{
 char *VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_1);

 VAR_4 = FUNC_2(VAR_3, ((void*)0), ((void*)0), (UINT)VAR_2);

 if (VAR_4 == 0)
 {
  VAR_0->Write(VAR_0, VAR_2 == ((void*)0) ? FUNC_3("CMD_HOSTPORT_EVAL_FAILED") : (wchar_t *)VAR_2);
 }

 FUNC_1(VAR_3);

 return VAR_4;
}
