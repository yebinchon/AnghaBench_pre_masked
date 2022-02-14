
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ ExpireDate; TYPE_5__* Admin; } ;
typedef TYPE_2__ WU_CONTEXT ;
struct TYPE_10__ {TYPE_1__* Cedar; } ;
typedef TYPE_3__ WEBUI ;
struct TYPE_12__ {int ServerAdmin; int * LogFileList; TYPE_4__* Rpc; int Server; int * HubName; } ;
struct TYPE_11__ {int ServerAdminMode; int ServerMode; int IsVpnServer; int Lock; TYPE_5__* Param; int Name; } ;
struct TYPE_8__ {int Server; } ;
typedef TYPE_4__ RPC ;
typedef TYPE_5__ ADMIN ;


 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static WU_CONTEXT *FUNC_7(WEBUI *VAR_1, char *VAR_2)
{
 WU_CONTEXT *VAR_3 = (WU_CONTEXT*)FUNC_1(sizeof(WU_CONTEXT));

 if(FUNC_4(VAR_2) == 0)
 {
  VAR_2=((void*)0);
 }
 VAR_3->Admin = (ADMIN*)FUNC_6(sizeof(ADMIN));
 VAR_3->Admin->HubName = VAR_2 != ((void*)0) ? FUNC_0(VAR_2) : ((void*)0);
 VAR_3->Admin->Server = VAR_1->Cedar->Server;
 VAR_3->Admin->ServerAdmin = VAR_2 == ((void*)0) ? 1: 0;
 VAR_3->Admin->Rpc = (RPC*)FUNC_6(sizeof(RPC));
 FUNC_3(VAR_3->Admin->Rpc->Name, sizeof(VAR_3->Admin->Rpc->Name), "WEBUI");
 VAR_3->Admin->Rpc->Param = VAR_3->Admin;
 VAR_3->Admin->Rpc->ServerAdminMode = VAR_3->Admin->ServerAdmin;
 VAR_3->Admin->Rpc->ServerMode = 1;
 VAR_3->Admin->Rpc->IsVpnServer = 1;
 VAR_3->Admin->Rpc->Lock = FUNC_2();
 VAR_3->Admin->LogFileList = ((void*)0);

 VAR_3->ExpireDate = FUNC_5() + VAR_0;

 return VAR_3;
}
