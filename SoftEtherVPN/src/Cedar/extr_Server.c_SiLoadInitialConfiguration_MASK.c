
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef int k ;
typedef int c ;
struct TYPE_17__ {int Enable; int Server; int ServerPort; int Interval; int lock; int UdpMode; int ServerName; } ;
struct TYPE_16__ {int UseKeepConnect; int KeepConnectPort; int KeepConnectInterval; int EnableOpenVPN; int EnableSSTP; int OpenVPNObfuscation; int OpenVPNPortList; int KeepConnectProtocol; int KeepConnectHost; } ;
struct TYPE_15__ {int BackupConfigOnlyWhenModified; int DisableNatTraversal; int DisableSSTPServer; int DisableOpenVPNServer; int EnableVpnOverIcmp; int EnableVpnOverDns; int Logger; int Eraser; TYPE_13__* Cedar; int DDnsClient; int HashedPassword; TYPE_4__* Keep; int Weight; int AutoSaveConfigSpan; } ;
struct TYPE_14__ {int Bridge; int UsernameHubSeparator; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_KEEP ;
typedef TYPE_2__ OPENVPN_SSTP_CONFIG ;
typedef TYPE_4__ KEEP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_13__*,int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int) ;

void FUNC_14(SERVER *VAR_7)
{
 RPC_KEEP VAR_8;

 if (VAR_7 == ((void*)0))
 {
  return;
 }


 VAR_7->AutoSaveConfigSpan = VAR_6;
 VAR_7->BackupConfigOnlyWhenModified = 1;

 VAR_7->Weight = VAR_3;

 FUNC_8(((void*)0));


 FUNC_13(&VAR_8, sizeof(VAR_8));

 {
  VAR_8.UseKeepConnect = 1;
 }
 VAR_8.KeepConnectPort = 80;
 FUNC_10(VAR_8.KeepConnectHost, sizeof(VAR_8.KeepConnectHost), VAR_0);
 VAR_8.KeepConnectInterval = VAR_4 * 1000;
 VAR_8.KeepConnectProtocol = VAR_1;

 FUNC_0(VAR_7->Keep->lock);
 {
  KEEP *VAR_9 = VAR_7->Keep;
  VAR_9->Enable = VAR_8.UseKeepConnect;
  VAR_9->Server = 1;
  FUNC_10(VAR_9->ServerName, sizeof(VAR_9->ServerName), VAR_8.KeepConnectHost);
  VAR_9->ServerPort = VAR_8.KeepConnectPort;
  VAR_9->UdpMode = VAR_8.KeepConnectProtocol;
  VAR_9->Interval = VAR_8.KeepConnectInterval;
 }
 FUNC_12(VAR_7->Keep->lock);


 {
  FUNC_3(VAR_7->HashedPassword, "", 0);
 }


 FUNC_4(VAR_7);


 FUNC_6(VAR_7);


 VAR_7->Cedar->UsernameHubSeparator = VAR_2;


 {
  FUNC_5(VAR_7);
 }

 if (VAR_7->Cedar->Bridge == 0)
 {

  VAR_7->DDnsClient = FUNC_1(VAR_7->Cedar, ((void*)0), ((void*)0));
 }



 FUNC_7(VAR_7);

 if (VAR_7->Cedar->Bridge)
 {

  VAR_7->DisableNatTraversal = 1;
  VAR_7->DisableSSTPServer = 1;
  VAR_7->DisableOpenVPNServer = 1;
 }
 else
 {

  OPENVPN_SSTP_CONFIG VAR_10;

  FUNC_13(&VAR_10, sizeof(VAR_10));
  VAR_10.EnableOpenVPN = 1;
  VAR_10.EnableSSTP = 1;

  {
   FUNC_11(VAR_10.OpenVPNPortList, VAR_5);
  }

  VAR_10.OpenVPNObfuscation = 0;

  FUNC_9(VAR_7, &VAR_10);

  {

   VAR_7->EnableVpnOverIcmp = 0;
   VAR_7->EnableVpnOverDns = 0;
  }
 }

 VAR_7->Eraser = FUNC_2(VAR_7->Logger, 0);
}
