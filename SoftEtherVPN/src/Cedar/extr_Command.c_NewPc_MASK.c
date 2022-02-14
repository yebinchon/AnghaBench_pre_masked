
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {int ConsoleForServer; int CmdLine; int * RemoteClient; scalar_t__ LastError; int * Console; int ServerName; } ;
typedef int REMOTE_CLIENT ;
typedef TYPE_1__ PC ;
typedef int CONSOLE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int) ;

PC *FUNC_4(CONSOLE *VAR_0, REMOTE_CLIENT *VAR_1, char *VAR_2, wchar_t *VAR_3)
{
 PC *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }
 if (FUNC_2(VAR_3))
 {
  VAR_3 = ((void*)0);
 }

 VAR_4 = FUNC_3(sizeof(PC));
 VAR_4->ConsoleForServer = 0;
 VAR_4->ServerName = FUNC_0(VAR_2);
 VAR_4->Console = VAR_0;
 VAR_4->LastError = 0;
 VAR_4->RemoteClient = VAR_1;
 VAR_4->CmdLine = FUNC_1(VAR_3);

 return VAR_4;
}
