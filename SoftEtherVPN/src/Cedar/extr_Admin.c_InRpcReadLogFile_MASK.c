
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Buffer; int Offset; int ServerName; int FilePath; } ;
typedef TYPE_1__ RPC_READ_LOG_FILE ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(RPC_READ_LOG_FILE *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_READ_LOG_FILE));
 FUNC_2(VAR_1, "FilePath", VAR_0->FilePath, sizeof(VAR_0->FilePath));
 FUNC_2(VAR_1, "ServerName", VAR_0->ServerName, sizeof(VAR_0->ServerName));
 VAR_0->Offset = FUNC_1(VAR_1, "Offset");

 VAR_0->Buffer = FUNC_0(VAR_1, "Buffer");
}
