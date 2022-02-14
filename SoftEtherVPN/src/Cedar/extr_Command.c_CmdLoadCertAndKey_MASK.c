
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int X ;
struct TYPE_7__ {int (* Write ) (TYPE_1__*,int ) ;} ;
typedef int K ;
typedef TYPE_1__ CONSOLE ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;

bool FUNC_9(CONSOLE *VAR_0, X **VAR_1, K **VAR_2, wchar_t *VAR_3, wchar_t *VAR_4)
{
 X *VAR_5;
 K *VAR_6;

 if (VAR_0 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5 == ((void*)0))
 {
  VAR_0->Write(VAR_0, FUNC_5("CMD_LOADCERT_FAILED"));
  return 0;
 }

 VAR_6 = FUNC_1(VAR_0, VAR_4);
 if (VAR_6 == ((void*)0))
 {
  VAR_0->Write(VAR_0, FUNC_5("CMD_LOADKEY_FAILED"));
  FUNC_4(VAR_5);
  return 0;
 }

 if (FUNC_0(VAR_5, VAR_6) == 0)
 {
  VAR_0->Write(VAR_0, FUNC_5("CMD_KEYPAIR_FAILED"));
  FUNC_4(VAR_5);
  FUNC_3(VAR_6);

  return 0;
 }

 *VAR_1 = VAR_5;
 *VAR_2 = VAR_6;

 return 1;
}
