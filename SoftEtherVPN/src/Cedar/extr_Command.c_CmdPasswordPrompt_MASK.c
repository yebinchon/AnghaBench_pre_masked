
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* (* ReadPassword ) (TYPE_1__*,char*) ;int (* Write ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ CONSOLE ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 char* FUNC_5 (TYPE_1__*,char*) ;
 char* FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;

char *FUNC_9(CONSOLE *VAR_0)
{
 char *VAR_1, *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_0->Write(VAR_0, FUNC_2("CMD_VPNCMD_PWPROMPT_0"));

RETRY:
 VAR_0->Write(VAR_0, L"");


 VAR_1 = VAR_0->ReadPassword(VAR_0, FUNC_2("CMD_VPNCMD_PWPROMPT_1"));
 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = VAR_0->ReadPassword(VAR_0, FUNC_2("CMD_VPNCMD_PWPROMPT_2"));
 if (VAR_2 == ((void*)0))
 {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 VAR_0->Write(VAR_0, L"");

 if (FUNC_1(VAR_1, VAR_2) != 0)
 {
  FUNC_0(VAR_1);
  FUNC_0(VAR_2);
  VAR_0->Write(VAR_0, FUNC_2("CMD_VPNCMD_PWPROMPT_3"));
  goto RETRY;
 }

 FUNC_0(VAR_1);

 return VAR_2;
}
