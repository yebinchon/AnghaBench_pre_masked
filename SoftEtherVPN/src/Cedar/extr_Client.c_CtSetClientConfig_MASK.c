
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int KeepConnectInterval; scalar_t__ KeepConnectProtocol; int KeepConnectPort; int KeepConnectHost; } ;
struct TYPE_14__ {int AccountList; int UnixVLanList; TYPE_8__ Config; TYPE_1__* Keep; int lock; } ;
struct TYPE_13__ {int KeepConnectPort; scalar_t__ NicDownOnDisconnect; scalar_t__ UseKeepConnect; int KeepConnectHost; } ;
struct TYPE_12__ {int Interval; int UdpMode; int Enable; int lock; int ServerPort; int ServerName; } ;
typedef TYPE_1__ KEEP ;
typedef TYPE_2__ CLIENT_CONFIG ;
typedef TYPE_3__ CLIENT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_8__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

bool FUNC_11(CLIENT *VAR_2, CLIENT_CONFIG *VAR_3)
{
 KEEP *VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (VAR_3->UseKeepConnect)
 {
  if (FUNC_5(VAR_3->KeepConnectHost) ||
   VAR_3->KeepConnectPort == 0 ||
   VAR_3->KeepConnectPort >= 65536)
  {
   FUNC_1(VAR_2, VAR_1);
   return 0;
  }
 }

 FUNC_6(VAR_2->lock);
 {
  FUNC_2(&VAR_2->Config, VAR_3, sizeof(CLIENT_CONFIG));
 }
 FUNC_9(VAR_2->lock);


 FUNC_0(VAR_2);


 VAR_4 = VAR_2->Keep;
 FUNC_6(VAR_4->lock);
 {
  if (VAR_3->UseKeepConnect)
  {
   FUNC_8(VAR_4->ServerName, sizeof(VAR_4->ServerName), VAR_2->Config.KeepConnectHost);
   VAR_4->ServerPort = VAR_2->Config.KeepConnectPort;
   VAR_4->Interval = VAR_2->Config.KeepConnectInterval * 1000;
   VAR_4->UdpMode = (VAR_2->Config.KeepConnectProtocol == VAR_0) ? 1 : 0;
   VAR_4->Enable = 1;
  }
  else
  {
   VAR_4->Enable = 0;
  }
 }
 FUNC_9(VAR_4->lock);


 FUNC_7(VAR_2->AccountList);
 FUNC_7(VAR_2->UnixVLanList);
 if (VAR_3->NicDownOnDisconnect)
 {
  FUNC_3(VAR_2);
 }
 else
 {
  FUNC_4(VAR_2);
 }
 FUNC_10(VAR_2->UnixVLanList);
 FUNC_10(VAR_2->AccountList);

 return 1;
}
