
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int tmp ;
typedef int set ;
typedef int k ;
typedef int config ;
typedef int X ;
typedef size_t UINT ;
struct TYPE_20__ {void* Tls_Disable1_2; void* Tls_Disable1_1; void* Tls_Disable1_0; } ;
struct TYPE_25__ {char* OpenVPNDefaultClientOption; int OpenVPNPushDummyIPv4AddressOnL2Mode; int Bridge; char UsernameHubSeparator; int DhParamBits; int lock; TYPE_1__ SslAcceptSettings; int TrafficLock; int Traffic; void* DisableIPv6Listener; } ;
struct TYPE_24__ {int Server; char* ServerName; int ServerPort; int UdpMode; int Interval; int lock; void* Enable; } ;
struct TYPE_23__ {int AutoSaveConfigSpan; int BackupConfigOnlyWhenModified; int DisableSSTPServer; int DisableOpenVPNServer; int DisableNatTraversal; int EnableVpnOverIcmp; int EnableVpnOverDns; int SaveDebugLog; int UpdatedServerType; int ServerType; int Weight; char* ControllerName; int ControllerPort; int NumPublicPort; int DisableGetHostNameWhenAcceptTcp; int DisableCoreDumpOnUnix; scalar_t__ OpenVpnServerUdp; void* DisableJsonRpcWebApi; void* StrictSyslogDatetimeFormat; void* EnableVpnAzure; int * PublicPorts; int PublicIp; int MemberPassword; TYPE_8__* Cedar; void* ControllerOnly; int HashedPassword; void* NoSendSignature; int DebugLog; void* NoDebugDump; void* NoHighPriorityProcess; void* NoLinuxArpFilter; void* UseWebTimePage; void* UseWebUI; int Logger; int Eraser; void* DisableDeadLockCheck; void* DisableDosProtection; TYPE_7__* Keep; int ListenIP; void* DontBackupConfig; } ;
struct TYPE_22__ {char* KeepConnectHost; int KeepConnectPort; int KeepConnectProtocol; int KeepConnectInterval; int SaveType; char* Hostname; int Port; int EnableOpenVPN; int EnableSSTP; char* OpenVPNPortList; char* OpenVPNObfuscationMask; void* OpenVPNObfuscation; void* UseKeepConnect; } ;
struct TYPE_21__ {int NumTokens; int * Token; } ;
typedef TYPE_2__ TOKEN_LIST ;
typedef TYPE_3__ SYSLOG_SETTING ;
typedef TYPE_4__ SERVER ;
typedef TYPE_3__ RPC_KEEP ;
typedef TYPE_3__ OPENVPN_SSTP_CONFIG ;
typedef TYPE_7__ KEEP ;
typedef int K ;
typedef int FOLDER ;
typedef TYPE_8__ CEDAR ;
typedef int BUF ;


 int * FUNC_0 (int *,int,int,int *) ;
 int * FUNC_1 (int *,int) ;
 char* VAR_0 ;
 void* FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*,int *) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,char*,int) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,int *) ;
 size_t VAR_1 ;
 char VAR_2 ;
 int VAR_3 ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 void* VAR_4 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_19 (TYPE_4__*,char*) ;
 int FUNC_20 (char*) ;
 scalar_t__ FUNC_21 (char) ;
 int VAR_6 ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_24 (int) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 () ;
 int VAR_9 ;
 int FUNC_27 (scalar_t__,int ) ;
 TYPE_2__* FUNC_28 (char*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_29 (TYPE_8__*,int *,int *) ;
 int FUNC_30 (TYPE_8__*,char*) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int) ;
 int FUNC_33 (size_t) ;
 int FUNC_34 (int ,void*) ;
 int FUNC_35 (int ,size_t) ;
 int FUNC_36 (int) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int) ;
 int FUNC_39 (int ,char*,int ) ;
 int FUNC_40 (int **,int **) ;
 int FUNC_41 (int *) ;
 int FUNC_42 (int *,char*,int ) ;
 int FUNC_43 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_44 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_45 (char*,int,char*) ;
 scalar_t__ FUNC_46 (char*) ;
 int FUNC_47 (char*) ;
 int FUNC_48 (int ) ;
 int FUNC_49 (char*,int ) ;
 int FUNC_50 () ;
 int FUNC_51 (int ) ;
 int FUNC_52 (TYPE_3__*,int) ;
 int * FUNC_53 (int) ;

void FUNC_54(SERVER *VAR_17, FOLDER *VAR_18)
{
 BUF *VAR_19;
 CEDAR *VAR_20;
 char VAR_21[VAR_8];
 X *VAR_22 = ((void*)0);
 K *VAR_23 = ((void*)0);
 FOLDER *VAR_24;
 UINT VAR_25;

 if (VAR_17 == ((void*)0) || VAR_18 == ((void*)0))
 {
  return;
 }


 VAR_17->AutoSaveConfigSpan = FUNC_6(VAR_18, "AutoSaveConfigSpan") * 1000;
 if (VAR_17->AutoSaveConfigSpan == 0)
 {
  VAR_17->AutoSaveConfigSpan = VAR_10;
 }
 else
 {
  VAR_17->AutoSaveConfigSpan = FUNC_23(VAR_17->AutoSaveConfigSpan, VAR_12, VAR_11);
 }

 VAR_25 = FUNC_6(VAR_18, "MaxConcurrentDnsClientThreads");
 if (VAR_25 != 0)
 {
  FUNC_33(VAR_25);
 }
 else
 {
  FUNC_33(VAR_1);
 }

 VAR_17->DontBackupConfig = FUNC_2(VAR_18, "DontBackupConfig");
 FUNC_8(VAR_18, "ListenIP", &VAR_17->ListenIP);

 if (FUNC_11(VAR_18, "BackupConfigOnlyWhenModified"))
 {
  VAR_17->BackupConfigOnlyWhenModified = FUNC_2(VAR_18, "BackupConfigOnlyWhenModified");
 }
 else
 {
  VAR_17->BackupConfigOnlyWhenModified = 1;
 }


 if (FUNC_11(VAR_18, "ServerLogSwitchType"))
 {
  UINT VAR_26 = FUNC_6(VAR_18, "ServerLogSwitchType");

  FUNC_35(VAR_17->Logger, VAR_26);
 }

 FUNC_37(FUNC_7(VAR_18, "LoggerMaxLogSize"));

 VAR_24 = FUNC_5(VAR_18, "GlobalParams");
 FUNC_41(VAR_24);

 VAR_20 = VAR_17->Cedar;
 FUNC_22(VAR_20->lock);
 {
  OPENVPN_SSTP_CONFIG VAR_27;
  FOLDER *VAR_28;
  {
   RPC_KEEP VAR_29;


   FUNC_52(&VAR_29, sizeof(VAR_29));
   VAR_29.UseKeepConnect = FUNC_2(VAR_18, "UseKeepConnect");
   FUNC_10(VAR_18, "KeepConnectHost", VAR_29.KeepConnectHost, sizeof(VAR_29.KeepConnectHost));
   VAR_29.KeepConnectPort = FUNC_6(VAR_18, "KeepConnectPort");
   VAR_29.KeepConnectProtocol = FUNC_6(VAR_18, "KeepConnectProtocol");
   VAR_29.KeepConnectInterval = FUNC_6(VAR_18, "KeepConnectInterval") * 1000;
   if (VAR_29.KeepConnectPort == 0)
   {
    VAR_29.KeepConnectPort = 80;
   }
   if (FUNC_46(VAR_29.KeepConnectHost) == 0)
   {
    FUNC_45(VAR_29.KeepConnectHost, sizeof(VAR_29.KeepConnectHost), VAR_0);
   }
   if (VAR_29.KeepConnectInterval == 0)
   {
    VAR_29.KeepConnectInterval = VAR_6 * 1000;
   }
   if (VAR_29.KeepConnectInterval < 5000)
   {
    VAR_29.KeepConnectInterval = 5000;
   }
   if (VAR_29.KeepConnectInterval > 600000)
   {
    VAR_29.KeepConnectInterval = 600000;
   }

   FUNC_22(VAR_17->Keep->lock);
   {
    KEEP *VAR_30 = VAR_17->Keep;
    VAR_30->Enable = VAR_29.UseKeepConnect;
    VAR_30->Server = 1;
    FUNC_45(VAR_30->ServerName, sizeof(VAR_30->ServerName), VAR_29.KeepConnectHost);
    VAR_30->ServerPort = VAR_29.KeepConnectPort;
    VAR_30->UdpMode = VAR_29.KeepConnectProtocol;
    VAR_30->Interval = VAR_29.KeepConnectInterval;
   }
   FUNC_51(VAR_17->Keep->lock);
  }


  VAR_28 = FUNC_5(VAR_18, "SyslogSettings");
  if (VAR_28 != ((void*)0) && FUNC_19(VAR_17, "b_support_syslog"))
  {
   SYSLOG_SETTING VAR_31;

   FUNC_52(&VAR_31, sizeof(VAR_31));

   VAR_31.SaveType = FUNC_6(VAR_28, "SaveType");
   FUNC_10(VAR_28, "HostName", VAR_31.Hostname, sizeof(VAR_31.Hostname));
   VAR_31.Port = FUNC_6(VAR_28, "Port");

   FUNC_44(VAR_17, &VAR_31);
  }


  VAR_17->Cedar->DisableIPv6Listener = FUNC_2(VAR_18, "DisableIPv6Listener");


  VAR_17->DisableDosProtection = FUNC_2(VAR_18, "DisableDosProtection");


  FUNC_36(FUNC_6(VAR_18, "MaxConnectionsPerIP"));


  FUNC_38(FUNC_6(VAR_18, "MaxUnestablishedConnections"));


  VAR_17->DisableDeadLockCheck = FUNC_2(VAR_18, "DisableDeadLockCheck");


  FUNC_32(FUNC_6(VAR_18, "AutoDeleteCheckIntervalSecs"));
  VAR_17->Eraser = FUNC_25(VAR_17->Logger, FUNC_7(VAR_18, "AutoDeleteCheckDiskFreeSpaceMin"));


  VAR_17->UseWebUI = FUNC_2(VAR_18, "UseWebUI");



  VAR_17->UseWebTimePage = FUNC_2(VAR_18, "UseWebTimePage");


  VAR_17->NoLinuxArpFilter = FUNC_2(VAR_18, "NoLinuxArpFilter");


  VAR_17->NoHighPriorityProcess = FUNC_2(VAR_18, "NoHighPriorityProcess");


  VAR_17->NoDebugDump = FUNC_2(VAR_18, "NoDebugDump");
  if (VAR_17->NoDebugDump)
  {



  }


  VAR_17->DisableSSTPServer = FUNC_2(VAR_18, "DisableSSTPServer");


  VAR_17->DisableOpenVPNServer = FUNC_2(VAR_18, "DisableOpenVPNServer");


  if (FUNC_10(VAR_18, "OpenVPNDefaultClientOption", VAR_21, sizeof(VAR_21)))
  {
   if (FUNC_20(VAR_21) == 0)
   {
    FUNC_45(VAR_20->OpenVPNDefaultClientOption,
     sizeof(VAR_20->OpenVPNDefaultClientOption), VAR_21);
   }
  }


  if (FUNC_11(VAR_18, "OpenVPNPushDummyIPv4AddressOnL2Mode") == 0)
  {

   VAR_20->OpenVPNPushDummyIPv4AddressOnL2Mode = 1;
  }
  else
  {
   VAR_20->OpenVPNPushDummyIPv4AddressOnL2Mode = FUNC_2(VAR_18, "OpenVPNPushDummyIPv4AddressOnL2Mode");
  }


  VAR_17->DisableNatTraversal = FUNC_2(VAR_18, "DisableNatTraversal");

  if (VAR_17->Cedar->Bridge == 0)
  {

   if (FUNC_11(VAR_18, "EnableVpnOverIcmp"))
   {
    VAR_17->EnableVpnOverIcmp = FUNC_2(VAR_18, "EnableVpnOverIcmp");
   }
   else
   {
    VAR_17->EnableVpnOverIcmp = 0;
   }


   if (FUNC_11(VAR_18, "EnableVpnOverDns"))
   {
    VAR_17->EnableVpnOverDns = FUNC_2(VAR_18, "EnableVpnOverDns");
   }
   else
   {
    VAR_17->EnableVpnOverDns = 0;
   }
  }


  VAR_17->SaveDebugLog = FUNC_2(VAR_18, "SaveDebugLog");
  if (VAR_17->SaveDebugLog)
  {
   VAR_17->DebugLog = FUNC_26();
  }


  VAR_17->NoSendSignature = FUNC_2(VAR_18, "NoSendSignature");


  VAR_19 = FUNC_3(VAR_18, "ServerCert");
  if (VAR_19 != ((void*)0))
  {
   VAR_22 = FUNC_1(VAR_19, 0);
   FUNC_15(VAR_19);
  }


  VAR_19 = FUNC_3(VAR_18, "ServerKey");
  if (VAR_19 != ((void*)0))
  {
   VAR_23 = FUNC_0(VAR_19, 1, 0, ((void*)0));
   FUNC_15(VAR_19);
  }

  if (VAR_22 == ((void*)0) || VAR_23 == ((void*)0) || FUNC_12(VAR_22, VAR_23) == 0)
  {
   FUNC_18(VAR_22);
   FUNC_16(VAR_23);
   FUNC_40(&VAR_22, &VAR_23);

   FUNC_29(VAR_20, VAR_22, VAR_23);

   FUNC_18(VAR_22);
   FUNC_16(VAR_23);
  }
  else
  {
   FUNC_29(VAR_20, VAR_22, VAR_23);

   FUNC_18(VAR_22);
   FUNC_16(VAR_23);
  }


  if (FUNC_10(VAR_18, "UsernameHubSeparator", VAR_21, sizeof(VAR_21)))
  {
   VAR_20->UsernameHubSeparator = FUNC_21(VAR_21[0]) ? VAR_21[0] : VAR_2;
  }


  if (FUNC_10(VAR_18, "CipherName", VAR_21, sizeof(VAR_21)))
  {
   FUNC_47(VAR_21);
   FUNC_30(VAR_20, VAR_21);
  }


  FUNC_22(VAR_20->TrafficLock);
  {
   FUNC_42(VAR_18, "ServerTraffic", VAR_20->Traffic);
  }
  FUNC_51(VAR_20->TrafficLock);


  VAR_17->UpdatedServerType = VAR_17->ServerType = FUNC_6(VAR_18, "ServerType");


  if (FUNC_4(VAR_18, "HashedPassword", VAR_17->HashedPassword, sizeof(VAR_17->HashedPassword)) != sizeof(VAR_17->HashedPassword))
  {
   FUNC_39(VAR_17->HashedPassword, "", 0);
  }

  if (VAR_17->ServerType != VAR_15)
  {

   VAR_17->Weight = FUNC_6(VAR_18, "ClusterMemberWeight");
   if (VAR_17->Weight == 0)
   {
    VAR_17->Weight = VAR_4;
   }
  }
  else
  {
   VAR_17->Weight = VAR_4;
  }

  if (VAR_17->ServerType == VAR_13)
  {
   VAR_17->ControllerOnly = FUNC_2(VAR_18, "ControllerOnly");
  }

  if (VAR_17->ServerType != VAR_15)
  {

   VAR_17->DisableNatTraversal = 1;
   VAR_17->DisableSSTPServer = 1;
   VAR_17->DisableOpenVPNServer = 1;
  }

  if (VAR_17->Cedar->Bridge)
  {

   VAR_17->DisableNatTraversal = 1;
   VAR_17->DisableSSTPServer = 1;
   VAR_17->DisableOpenVPNServer = 1;
  }


  if (FUNC_10(VAR_18, "OpenVPN_UdpPortList", VAR_21, sizeof(VAR_21)) == 0)
  {
   {
    FUNC_49(VAR_21, VAR_9);
   }
  }


  FUNC_52(&VAR_27, sizeof(VAR_27));
  VAR_27.EnableOpenVPN = !VAR_17->DisableOpenVPNServer;
  VAR_27.EnableSSTP = !VAR_17->DisableSSTPServer;
  FUNC_45(VAR_27.OpenVPNPortList, sizeof(VAR_27.OpenVPNPortList), VAR_21);

  VAR_27.OpenVPNObfuscation = FUNC_2(VAR_18, "OpenVPNObfuscation");

  if (FUNC_10(VAR_18, "OpenVPNObfuscationMask", VAR_21, sizeof(VAR_21)))
  {
   if (FUNC_20(VAR_21) == 0)
   {
    FUNC_45(VAR_27.OpenVPNObfuscationMask, sizeof(VAR_27.OpenVPNObfuscationMask), VAR_21);
   }
  }

  FUNC_43(VAR_17, &VAR_27);

  if (VAR_17->ServerType == VAR_14)
  {
   char VAR_32[6 * VAR_7 + 1];

   FUNC_10(VAR_18, "ControllerName", VAR_17->ControllerName, sizeof(VAR_17->ControllerName));
   VAR_17->ControllerPort = FUNC_6(VAR_18, "ControllerPort");
   FUNC_4(VAR_18, "MemberPassword", VAR_17->MemberPassword, VAR_16);
   VAR_17->PublicIp = FUNC_9(VAR_18, "PublicIp");
   if (FUNC_10(VAR_18, "PublicPorts", VAR_32, sizeof(VAR_32)))
   {
    TOKEN_LIST *VAR_33 = FUNC_28(VAR_32, ", ");
    UINT VAR_34;
    VAR_17->NumPublicPort = VAR_33->NumTokens;
    VAR_17->PublicPorts = FUNC_53(VAR_17->NumPublicPort * sizeof(UINT));
    for (VAR_34 = 0;VAR_34 < VAR_17->NumPublicPort;VAR_34++)
    {
     VAR_17->PublicPorts[VAR_34] = FUNC_48(VAR_33->Token[VAR_34]);
    }
    FUNC_17(VAR_33);
   }
  }


  VAR_17->EnableVpnAzure = FUNC_2(VAR_18, "EnableVpnAzure");


  VAR_17->DisableGetHostNameWhenAcceptTcp = FUNC_2(VAR_18, "DisableGetHostNameWhenAcceptTcp");

  if (VAR_17->DisableGetHostNameWhenAcceptTcp)
  {
   FUNC_14();
  }


  VAR_17->DisableCoreDumpOnUnix = FUNC_2(VAR_18, "DisableCoreDumpOnUnix");


  FUNC_34(VAR_5, FUNC_2(VAR_18, "DisableSessionReconnect"));

  VAR_20->SslAcceptSettings.Tls_Disable1_0 = FUNC_2(VAR_18, "Tls_Disable1_0");
  VAR_20->SslAcceptSettings.Tls_Disable1_1 = FUNC_2(VAR_18, "Tls_Disable1_1");
  VAR_20->SslAcceptSettings.Tls_Disable1_2 = FUNC_2(VAR_18, "Tls_Disable1_2");

  VAR_17->StrictSyslogDatetimeFormat = FUNC_2(VAR_18, "StrictSyslogDatetimeFormat");


  VAR_17->DisableJsonRpcWebApi = FUNC_2(VAR_18, "DisableJsonRpcWebApi");


  VAR_20->DhParamBits = FUNC_6(VAR_18, "DhParamBits");
  if (VAR_20->DhParamBits == 0)
  {
   VAR_20->DhParamBits = VAR_3;
  }

  FUNC_31(FUNC_13(VAR_20->DhParamBits));
  if (VAR_17->OpenVpnServerUdp)
  {
   FUNC_27(VAR_17->OpenVpnServerUdp, FUNC_13(VAR_20->DhParamBits));
  }
 }
 FUNC_51(VAR_20->lock);







}
