
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * Buffer; int Offset; int ServerName; int FilePath; } ;
typedef TYPE_1__ RPC_READ_LOG_FILE ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, RPC_READ_LOG_FILE *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "FilePath", VAR_1->FilePath);
 FUNC_2(VAR_0, "ServerName", VAR_1->ServerName);
 FUNC_1(VAR_0, "Offset", VAR_1->Offset);

 if (VAR_1->Buffer != ((void*)0))
 {
  FUNC_0(VAR_0, "Buffer", VAR_1->Buffer);
 }
}
