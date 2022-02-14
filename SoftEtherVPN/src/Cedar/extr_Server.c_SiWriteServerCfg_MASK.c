
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int tmp ;
typedef int str ;
typedef scalar_t__ UINT ;
struct TYPE_16__ {int Tls_Disable1_2; int Tls_Disable1_1; int Tls_Disable1_0; } ;
struct TYPE_23__ {int Build; int Bridge; char* OpenVPNDefaultClientOption; char* CipherList; int DhParamBits; int lock; TYPE_1__ SslAcceptSettings; int TrafficLock; int Traffic; int UsernameHubSeparator; int ServerK; int ServerX; int OpenVPNPushDummyIPv4AddressOnL2Mode; int DisableIPv6Listener; } ;
struct TYPE_22__ {char* ServerName; int ServerPort; int UdpMode; int Interval; int lock; int Enable; } ;
struct TYPE_21__ {char* OpenVPNPortList; char* OpenVPNObfuscationMask; int OpenVPNObfuscation; } ;
struct TYPE_20__ {int AutoSaveConfigSpanSaved; int ServerType; int UpdatedServerType; char* ControllerName; int ControllerPort; scalar_t__ NumPublicPort; int Weight; int DisableJsonRpcWebApi; int StrictSyslogDatetimeFormat; int DisableCoreDumpOnUnix; int DisableGetHostNameWhenAcceptTcp; int EnableVpnAzure; int * AzureClient; int ControllerOnly; int * PublicPorts; int PublicIp; int MemberPassword; int HashedPassword; TYPE_8__* Cedar; int NoSendSignature; int SaveDebugLog; int UseWebTimePage; int EnableVpnOverDns; int EnableVpnOverIcmp; int DisableOpenVPNServer; int DisableSSTPServer; int DisableNatTraversal; int NoDebugDump; int NoHighPriorityProcess; int NoLinuxArpFilter; int UseWebUI; TYPE_3__* Eraser; int DisableDeadLockCheck; int DisableDosProtection; TYPE_7__* Keep; TYPE_2__* Logger; int ListenIP; int BackupConfigOnlyWhenModified; int DontBackupConfig; } ;
struct TYPE_19__ {int SaveType; char* Hostname; int Port; } ;
struct TYPE_18__ {int MinFreeSpace; } ;
struct TYPE_17__ {int SwitchType; } ;
struct TYPE_15__ {scalar_t__ OsType; } ;
typedef TYPE_4__ SYSLOG_SETTING ;
typedef TYPE_5__ SERVER ;
typedef TYPE_6__ OPENVPN_SSTP_CONFIG ;
typedef TYPE_7__ KEEP ;
typedef int FOLDER ;
typedef TYPE_8__ CEDAR ;
typedef int BUF ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,char*,char*) ;
 int * FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 int VAR_0 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 TYPE_14__* FUNC_16 () ;
 int * FUNC_17 (int ,int,int *) ;
 int FUNC_18 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_19 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_20 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,char*,int ) ;
 int FUNC_23 (char*,int,char*) ;
 int FUNC_24 (char*,int,int *) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (char*,int ) ;
 int FUNC_27 (int ) ;
 int * FUNC_28 (int ,int) ;

void FUNC_29(FOLDER *VAR_8, SERVER *VAR_9)
{
 BUF *VAR_10;
 CEDAR *VAR_11;
 FOLDER *VAR_12;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_8, "MaxConcurrentDnsClientThreads", FUNC_11());

 FUNC_3(VAR_8, "CurrentBuild", VAR_9->Cedar->Build);

 FUNC_3(VAR_8, "AutoSaveConfigSpan", VAR_9->AutoSaveConfigSpanSaved / 1000);

 FUNC_0(VAR_8, "DontBackupConfig", VAR_9->DontBackupConfig);
 FUNC_0(VAR_8, "BackupConfigOnlyWhenModified", VAR_9->BackupConfigOnlyWhenModified);

 FUNC_5(VAR_8, "ListenIP", &VAR_9->ListenIP);

 if (VAR_9->Logger != ((void*)0))
 {
  FUNC_3(VAR_8, "ServerLogSwitchType", VAR_9->Logger->SwitchType);
 }

 FUNC_4(VAR_8, "LoggerMaxLogSize", FUNC_14());

 VAR_12 = FUNC_8(VAR_8, "GlobalParams");

 if (VAR_12 != ((void*)0))
 {
  FUNC_21(VAR_12);
 }

 VAR_11 = VAR_9->Cedar;

 FUNC_18(VAR_11->lock);
 {
  FOLDER *VAR_13;
  FUNC_18(VAR_9->Keep->lock);
  {
   KEEP *VAR_14 = VAR_9->Keep;
   FUNC_0(VAR_8, "UseKeepConnect", VAR_14->Enable);
   FUNC_7(VAR_8, "KeepConnectHost", VAR_14->ServerName);
   FUNC_3(VAR_8, "KeepConnectPort", VAR_14->ServerPort);
   FUNC_3(VAR_8, "KeepConnectProtocol", VAR_14->UdpMode);
   FUNC_3(VAR_8, "KeepConnectInterval", VAR_14->Interval / 1000);
  }
  FUNC_27(VAR_9->Keep->lock);


  VAR_13 = FUNC_8(VAR_8, "SyslogSettings");
  if (VAR_13 != ((void*)0))
  {
   SYSLOG_SETTING VAR_15;

   FUNC_20(VAR_9, &VAR_15);

   FUNC_3(VAR_13, "SaveType", VAR_15.SaveType);
   FUNC_7(VAR_13, "HostName", VAR_15.Hostname);
   FUNC_3(VAR_13, "Port", VAR_15.Port);
  }


  FUNC_0(VAR_8, "DisableIPv6Listener", VAR_9->Cedar->DisableIPv6Listener);


  FUNC_0(VAR_8, "DisableDosProtection", VAR_9->DisableDosProtection);


  FUNC_3(VAR_8, "MaxConnectionsPerIP", FUNC_13());


  FUNC_3(VAR_8, "MaxUnestablishedConnections", FUNC_15());


  FUNC_0(VAR_8, "DisableDeadLockCheck", VAR_9->DisableDeadLockCheck);


  FUNC_4(VAR_8, "AutoDeleteCheckDiskFreeSpaceMin", VAR_9->Eraser->MinFreeSpace);
  FUNC_3(VAR_8, "AutoDeleteCheckIntervalSecs", FUNC_10());


  FUNC_0(VAR_8, "UseWebUI", VAR_9->UseWebUI);



  if (FUNC_16()->OsType == VAR_3)
  {
   FUNC_0(VAR_8, "NoLinuxArpFilter", VAR_9->NoLinuxArpFilter);
  }


  FUNC_0(VAR_8, "NoHighPriorityProcess", VAR_9->NoHighPriorityProcess);





  if (VAR_9->ServerType == VAR_6)
  {
   if (VAR_11->Bridge == 0)
   {

    FUNC_0(VAR_8, "DisableNatTraversal", VAR_9->DisableNatTraversal);


    FUNC_0(VAR_8, "DisableSSTPServer", VAR_9->DisableSSTPServer);


    FUNC_0(VAR_8, "DisableOpenVPNServer", VAR_9->DisableOpenVPNServer);
   }
  }

  FUNC_7(VAR_8, "OpenVPNDefaultClientOption", VAR_11->OpenVPNDefaultClientOption);

  FUNC_0(VAR_8, "OpenVPNPushDummyIPv4AddressOnL2Mode", VAR_11->OpenVPNPushDummyIPv4AddressOnL2Mode);

  if (VAR_11->Bridge == 0)
  {
   OPENVPN_SSTP_CONFIG VAR_16;


   FUNC_0(VAR_8, "EnableVpnOverIcmp", VAR_9->EnableVpnOverIcmp);


   FUNC_0(VAR_8, "EnableVpnOverDns", VAR_9->EnableVpnOverDns);

   FUNC_19(VAR_9, &VAR_16);

   FUNC_7(VAR_8, "OpenVPN_UdpPortList", VAR_16.OpenVPNPortList);

   FUNC_0(VAR_8, "OpenVPNObfuscation", VAR_16.OpenVPNObfuscation);
   FUNC_7(VAR_8, "OpenVPNObfuscationMask", VAR_16.OpenVPNObfuscationMask);
  }


  FUNC_0(VAR_8, "UseWebTimePage", VAR_9->UseWebTimePage);


  FUNC_0(VAR_8, "SaveDebugLog", VAR_9->SaveDebugLog);


  FUNC_0(VAR_8, "NoSendSignature", VAR_9->NoSendSignature);


  VAR_10 = FUNC_28(VAR_11->ServerX, 0);
  FUNC_1(VAR_8, "ServerCert", VAR_10);
  FUNC_9(VAR_10);


  VAR_10 = FUNC_17(VAR_11->ServerK, 0, ((void*)0));
  FUNC_1(VAR_8, "ServerKey", VAR_10);
  FUNC_9(VAR_10);

  {

   char VAR_17[2];
   FUNC_24(VAR_17, sizeof(VAR_17), &VAR_11->UsernameHubSeparator);
   FUNC_7(VAR_8, "UsernameHubSeparator", VAR_17);
  }


  FUNC_18(VAR_11->TrafficLock);
  {
   FUNC_22(VAR_8, "ServerTraffic", VAR_11->Traffic);
  }
  FUNC_27(VAR_11->TrafficLock);


  if (VAR_9->Cedar->Bridge == 0)
  {
   FUNC_3(VAR_8, "ServerType", VAR_9->UpdatedServerType);
  }


  FUNC_7(VAR_8, "CipherName", VAR_9->Cedar->CipherList);


  FUNC_2(VAR_8, "HashedPassword", VAR_9->HashedPassword, sizeof(VAR_9->HashedPassword));

  if (VAR_9->UpdatedServerType == VAR_5)
  {
   char VAR_18[6 * VAR_1 + 1];
   UINT VAR_19;

   FUNC_7(VAR_8, "ControllerName", VAR_9->ControllerName);
   FUNC_3(VAR_8, "ControllerPort", VAR_9->ControllerPort);
   FUNC_2(VAR_8, "MemberPassword", VAR_9->MemberPassword, VAR_7);
   FUNC_6(VAR_8, "PublicIp", VAR_9->PublicIp);
   VAR_18[0] = 0;
   for (VAR_19 = 0;VAR_19 < VAR_9->NumPublicPort;VAR_19++)
   {
    char VAR_20[VAR_2];
    FUNC_26(VAR_20, VAR_9->PublicPorts[VAR_19]);
    FUNC_23(VAR_18, sizeof(VAR_18), VAR_20);
    FUNC_23(VAR_18, sizeof(VAR_18), ",");
   }
   if (FUNC_25(VAR_18) >= 1)
   {
    if (VAR_18[FUNC_25(VAR_18) - 1] == ',')
    {
     VAR_18[FUNC_25(VAR_18) - 1] = 0;
    }
   }
   FUNC_7(VAR_8, "PublicPorts", VAR_18);
  }

  if (VAR_9->UpdatedServerType != VAR_6)
  {
   FUNC_3(VAR_8, "ClusterMemberWeight", VAR_9->Weight);
  }

  if (VAR_9->UpdatedServerType == VAR_4)
  {
   FUNC_0(VAR_8, "ControllerOnly", VAR_9->ControllerOnly);
  }


  if (VAR_9->AzureClient != ((void*)0))
  {
   FUNC_0(VAR_8, "EnableVpnAzure", VAR_9->EnableVpnAzure);
  }

  FUNC_0(VAR_8, "DisableGetHostNameWhenAcceptTcp", VAR_9->DisableGetHostNameWhenAcceptTcp);
  FUNC_0(VAR_8, "DisableCoreDumpOnUnix", VAR_9->DisableCoreDumpOnUnix);

  FUNC_0(VAR_8, "Tls_Disable1_0", VAR_11->SslAcceptSettings.Tls_Disable1_0);
  FUNC_0(VAR_8, "Tls_Disable1_1", VAR_11->SslAcceptSettings.Tls_Disable1_1);
  FUNC_0(VAR_8, "Tls_Disable1_2", VAR_11->SslAcceptSettings.Tls_Disable1_2);
  FUNC_3(VAR_8, "DhParamBits", VAR_11->DhParamBits);


  FUNC_0(VAR_8, "DisableSessionReconnect", FUNC_12(VAR_0));

  FUNC_0(VAR_8, "StrictSyslogDatetimeFormat", VAR_9->StrictSyslogDatetimeFormat);


  FUNC_0(VAR_8, "DisableJsonRpcWebApi", VAR_9->DisableJsonRpcWebApi);
 }
 FUNC_27(VAR_11->lock);
}
