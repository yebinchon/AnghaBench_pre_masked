
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_16__ {int Bridge; } ;
struct TYPE_15__ {int AutoSaveConfigSpan; int BackupConfigOnlyWhenModified; int NoLinuxArpFilter; int AutoSaveConfigSpanSaved; scalar_t__ ServerType; int SaveThread; int SaveHaltEvent; TYPE_6__* Cedar; int EnableVpnAzure; int AzureClient; int * DDnsClient; scalar_t__ DisableDosProtection; int DontBackupConfig; TYPE_1__* CfgRw; int OpenVpnServerUdp; int IPsecServer; } ;
struct TYPE_14__ {int DontBackup; } ;
struct TYPE_13__ {scalar_t__ OsType; } ;
typedef TYPE_2__ SERVER ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_12__* FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (int,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_6__*,TYPE_2__*) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (int ,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (TYPE_6__*,char*,...) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_17(SERVER *VAR_7)
{

 if (VAR_7 == ((void*)0))
 {
  return;
 }

 VAR_7->AutoSaveConfigSpan = VAR_2;
 VAR_7->BackupConfigOnlyWhenModified = 1;


 if (VAR_7->Cedar->Bridge == 0)
 {
  VAR_7->IPsecServer = FUNC_9(VAR_7->Cedar);
 }


 if (VAR_7->Cedar->Bridge == 0)
 {
  VAR_7->OpenVpnServerUdp = FUNC_10(VAR_7->Cedar);
 }

 FUNC_12(VAR_7->Cedar, "LS_LOAD_CONFIG_1");
 if (FUNC_15(VAR_7) == 0)
 {

  FUNC_4();

  FUNC_12(VAR_7->Cedar, "LS_LOAD_CONFIG_3");
  FUNC_16(VAR_7);

  FUNC_13(VAR_0);

  VAR_6 = 0;
 }
 else
 {
  FUNC_12(VAR_7->Cedar, "LS_LOAD_CONFIG_2");
 }

 VAR_7->CfgRw->DontBackup = VAR_7->DontBackupConfig;


 if (FUNC_3()->OsType == VAR_1)
 {
  if (VAR_7->NoLinuxArpFilter == 0)
  {
   FUNC_14();
  }
 }

 if (VAR_7->DisableDosProtection)
 {
  FUNC_1();
 }
 else
 {
  FUNC_2();
 }

 VAR_7->AutoSaveConfigSpanSaved = VAR_7->AutoSaveConfigSpan;


 if (VAR_7->DDnsClient != ((void*)0) && VAR_7->Cedar->Bridge == 0 && VAR_7->ServerType == VAR_4)
 {
  VAR_7->AzureClient = FUNC_7(VAR_7->Cedar, VAR_7);

  FUNC_0(VAR_7->AzureClient, VAR_7->EnableVpnAzure);
 }
 FUNC_12(VAR_7->Cedar, "LS_INIT_SAVE_THREAD", VAR_7->AutoSaveConfigSpan / 1000);
 VAR_7->SaveHaltEvent = FUNC_8();
 VAR_7->SaveThread = FUNC_11(VAR_5, VAR_7);
}
