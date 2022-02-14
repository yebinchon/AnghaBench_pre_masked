
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT ;
struct TYPE_4__ {int ConsoleForServer; int CmdLine; void* AdminHub; scalar_t__ LastError; void* HubName; int * Rpc; int * Console; void* ServerName; int ServerPort; } ;
typedef int RPC ;
typedef TYPE_1__ PS ;
typedef int CONSOLE ;


 void* FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int) ;

PS *FUNC_5(CONSOLE *VAR_0, RPC *VAR_1, char *VAR_2, UINT VAR_3, char *VAR_4, char *VAR_5, wchar_t *VAR_6)
{
 PS *VAR_7;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_2(VAR_4))
 {
  VAR_4 = ((void*)0);
 }
 if (FUNC_2(VAR_5))
 {
  VAR_5 = ((void*)0);
 }
 if (FUNC_3(VAR_6))
 {
  VAR_6 = ((void*)0);
 }

 VAR_7 = FUNC_4(sizeof(PS));
 VAR_7->ConsoleForServer = 1;
 VAR_7->ServerPort = VAR_3;
 VAR_7->ServerName = FUNC_0(VAR_2);
 VAR_7->Console = VAR_0;
 VAR_7->Rpc = VAR_1;
 VAR_7->HubName = FUNC_0(VAR_4);
 VAR_7->LastError = 0;
 VAR_7->AdminHub = FUNC_0(VAR_5);
 VAR_7->CmdLine = FUNC_1(VAR_6);

 return VAR_7;
}
