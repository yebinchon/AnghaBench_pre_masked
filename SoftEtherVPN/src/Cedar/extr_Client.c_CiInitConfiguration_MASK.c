
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int OsType; } ;
struct TYPE_8__ {int AllowRemoteConfig; int UseKeepConnect; int KeepConnectInterval; int KeepConnectProtocol; int KeepConnectPort; int KeepConnectHost; } ;
struct TYPE_9__ {int Logger; int Eraser; TYPE_1__ Config; int EncryptedPassword; void* UnixVLanList; void* AccountList; } ;
typedef TYPE_2__ CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 () ;

void FUNC_10(CLIENT *VAR_6)
{

 if (VAR_6 == ((void*)0))
 {
  return;
 }







 VAR_6->AccountList = FUNC_5(VAR_4);


 if (FUNC_6(FUNC_3()->OsType))
 {
  VAR_6->UnixVLanList = FUNC_5(VAR_5);
 }


 FUNC_0(VAR_6, "LC_LOAD_CONFIG_1");
 if (FUNC_1(VAR_6) == 0)
 {
  FUNC_0(VAR_6, "LC_LOAD_CONFIG_3");


  FUNC_7(VAR_6->EncryptedPassword, "", 0);


  VAR_6->Config.AllowRemoteConfig = 0;
  FUNC_8(VAR_6->Config.KeepConnectHost, sizeof(VAR_6->Config.KeepConnectHost), VAR_0);
  VAR_6->Config.KeepConnectPort = VAR_2;
  VAR_6->Config.KeepConnectProtocol = VAR_3;
  VAR_6->Config.KeepConnectInterval = VAR_1;
  VAR_6->Config.UseKeepConnect = 0;

  VAR_6->Eraser = FUNC_4(VAR_6->Logger, 0);
 }
 else
 {
  FUNC_0(VAR_6, "LC_LOAD_CONFIG_2");
 }


 FUNC_2(VAR_6);
}
