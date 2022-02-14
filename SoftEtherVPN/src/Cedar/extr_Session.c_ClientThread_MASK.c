
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_22__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_15__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef int p ;
struct TYPE_28__ {char* ServerName; int CurrentRetryCount; int RetryLimit; int RetryIntervalSec; int HideWindow; int ShowNoSavePassword; int NoSavePassword; int ProxyServer; char* Username; char* Password; scalar_t__ Type; int CancelEvent; void* Err; int AccountName; } ;
typedef TYPE_2__ UI_PASSWORD_DLG ;
typedef TYPE_2__ UI_CONNECTERROR_DLG ;
typedef int UINT ;
struct TYPE_33__ {int * ClientSession; int lock; int ClientOption; int ClientAuth; } ;
struct TYPE_32__ {TYPE_22__* Client; int CurrentActiveLinks; } ;
struct TYPE_31__ {void* LastError; } ;
struct TYPE_30__ {int LinkModeClient; int RetryFlag; int CurrentRetryCount; int Win32HideConnectWindow; int Halt; int RetryInterval; int Client_NoSavePassword; int ConnectSucceed; TYPE_8__* Account; void* ClientStatus; scalar_t__ ForceStopFlag; TYPE_7__* Cedar; TYPE_16__* ClientOption; TYPE_15__* ClientAuth; void* Err; int HaltEvent; TYPE_1__* Link; scalar_t__* NicDownOnDisconnect; scalar_t__ UserCanceled; scalar_t__ NextConnectionTime; TYPE_2__ ServerIP_CacheForNextConnect; int Win32HideNicInfoWindow; TYPE_4__* Thread; int ref; } ;
struct TYPE_29__ {int ref; } ;
struct TYPE_27__ {int DontSavePassword; } ;
struct TYPE_26__ {int Hub; scalar_t__ Halting; scalar_t__* StopAllLinkFlag; } ;
struct TYPE_25__ {int HideStatusWindow; int NumRetry; char* Hostname; char* ProxyUsername; char* ProxyPassword; char* ProxyName; int AccountName; int DeviceName; int HideNicInfoWindow; } ;
struct TYPE_24__ {scalar_t__ AuthType; char* Username; char* PlainPassword; int HashedPassword; } ;
typedef TYPE_4__ THREAD ;
typedef TYPE_5__ SESSION ;
typedef TYPE_6__ LINK ;
typedef int IP ;
typedef int CLIENT_OPTION ;
typedef TYPE_7__ CEDAR ;
typedef TYPE_8__ ACCOUNT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (TYPE_22__*,char*,int ,int,...) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_22__*) ;
 int FUNC_6 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_7 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_8 (int ,TYPE_16__*,int) ;
 int FUNC_9 (TYPE_15__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,...) ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_12 (void*) ;
 char* VAR_16 ;
 int FUNC_13 (int ,char*,int ,int,...) ;
 int FUNC_14 (int ,char*,char*) ;
 scalar_t__ FUNC_15 (int ,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int,int) ;
 int VAR_17 ;
 int FUNC_18 (int,int) ;
 int FUNC_19 (int *,int,int *) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (TYPE_5__*,int ) ;
 int FUNC_22 (TYPE_5__*) ;
 int VAR_18 ;
 int FUNC_23 () ;
 int FUNC_24 (TYPE_5__*) ;
 int FUNC_25 (TYPE_5__*) ;
 scalar_t__ FUNC_26 (char*,char*) ;
 int FUNC_27 (char*,int,char*) ;
 scalar_t__ FUNC_28 (char*) ;
 int FUNC_29 (int *,int,int ,int ,void*,int ) ;
 int FUNC_30 (int ,int,int ) ;
 int FUNC_31 (int ,int) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,int) ;
 int FUNC_34 (TYPE_2__*,int) ;
 int FUNC_35 (void*) ;
 int FUNC_36 (char*) ;

void FUNC_37(THREAD *VAR_19, void *VAR_20)
{
 SESSION *VAR_21;
 bool VAR_22;
 bool VAR_23 = 0;
 bool VAR_24 = 0;
 CEDAR *VAR_25;
 bool VAR_26 = 0;

 if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0))
 {
  return;
 }

 FUNC_11("ClientThread 0x%x Started.\n", VAR_19);

 VAR_21 = (SESSION *)VAR_20;
 FUNC_0(VAR_21->ref);
 VAR_21->Thread = VAR_19;
 FUNC_0(VAR_19->ref);

 if (VAR_21->LinkModeClient == 0)
 {
  FUNC_4();
  VAR_26 = 1;
 }

 FUNC_20(VAR_19);

 VAR_25 = VAR_21->Cedar;

 VAR_21->ClientStatus = VAR_5;
 VAR_21->RetryFlag = 1;
 VAR_21->CurrentRetryCount = 0;

 FUNC_21(VAR_21, VAR_4);

 if (VAR_21->Cedar->Client != ((void*)0))
 {
  VAR_23 = VAR_21->Cedar->Client->DontSavePassword;
 }

 VAR_21->Win32HideConnectWindow = VAR_21->ClientOption->HideStatusWindow;
 VAR_21->Win32HideNicInfoWindow = VAR_21->ClientOption->HideNicInfoWindow;


 while (1)
 {
  FUNC_34(&VAR_21->ServerIP_CacheForNextConnect, sizeof(IP));

  if (VAR_21->Link != ((void*)0) && ((*VAR_21->Link->StopAllLinkFlag) || VAR_21->Link->Halting))
  {
   VAR_21->Err = VAR_15;
   break;
  }

  FUNC_1(VAR_21->Cedar->Client, "LC_CONNECT_1", VAR_21->ClientOption->AccountName, VAR_21->CurrentRetryCount + 1);
  if (VAR_21->LinkModeClient && VAR_21->Link != ((void*)0))
  {
   FUNC_13(VAR_21->Link->Hub, "LH_CONNECT_1", VAR_21->ClientOption->AccountName, VAR_21->CurrentRetryCount + 1);
  }

  FUNC_11("Trying to Connect to Server... (%u / %u)\n", VAR_21->CurrentRetryCount + 0,
   VAR_21->ClientOption->NumRetry);




  VAR_21->NextConnectionTime = 0;


  VAR_21->ClientStatus = VAR_5;
  VAR_21->Halt = 0;
  FUNC_25(VAR_21);
  if (VAR_21->UserCanceled)
  {
   VAR_21->Err = VAR_15;
  }
  FUNC_11("Disconnected. Err = %u : %S\n", VAR_21->Err, FUNC_35(VAR_21->Err));

  FUNC_22(VAR_21);

  FUNC_1(VAR_21->Cedar->Client, "LC_CONNECT_ERROR", VAR_21->ClientOption->AccountName,
   FUNC_12(VAR_21->Err), VAR_21->Err);
  if (VAR_21->LinkModeClient && VAR_21->Link != ((void*)0))
  {
   FUNC_13(VAR_21->Link->Hub, "LH_CONNECT_ERROR", VAR_21->ClientOption->AccountName,
    FUNC_12(VAR_21->Err), VAR_21->Err);
  }

  VAR_21->ClientStatus = VAR_7;

  if (VAR_21->Link != ((void*)0))
  {
   ((LINK *)VAR_21->Link)->LastError = VAR_21->Err;
  }

  if (VAR_21->Halt && (VAR_21->RetryFlag == 0) || VAR_21->ForceStopFlag)
  {

   if (VAR_21->Err == VAR_9)
   {
   }
   break;
  }

  VAR_22 = 0;

  if (VAR_21->Account != ((void*)0) && VAR_21->Cedar->Client != ((void*)0))
  {
  }



  if (VAR_22 == 0)
  {
   UINT VAR_27 = VAR_21->RetryInterval;

   if (VAR_21->LinkModeClient)
   {
    UINT VAR_28 = FUNC_10(VAR_21->Cedar->CurrentActiveLinks);
    UINT VAR_29 = FUNC_17(1000 * VAR_28, VAR_27);

    VAR_27 += VAR_27 * FUNC_18(VAR_21->CurrentRetryCount, 1000);
    VAR_27 = FUNC_18(VAR_27, VAR_29);


    if (VAR_27 >= 1000 && VAR_27 <= (60 * 60 * 1000))
    {
     VAR_27 = (VAR_27 * 8 / 10) + (FUNC_23() % (VAR_27 * 4 / 10));
    }
   }

   if (VAR_21->Err == VAR_10 || VAR_21->Err == VAR_12 ||
    VAR_21->Err == VAR_11 || VAR_21->Err == VAR_14)
   {
    VAR_27 = VAR_18;
   }

   if (VAR_21->CurrentRetryCount >= VAR_21->ClientOption->NumRetry)
   {




    break;
   }




   FUNC_33(VAR_21->HaltEvent, VAR_27);
  }
  else
  {
  }

SKIP:

  if (VAR_21->ConnectSucceed == 0)
  {
   VAR_21->CurrentRetryCount++;
  }

  if (VAR_21->ForceStopFlag)
  {
   break;
  }
 }

 FUNC_11("Session Halt.\n");

 VAR_21->ClientStatus = VAR_6;


 if (VAR_21->Account != ((void*)0))
 {
  VAR_21->Account->ClientSession = ((void*)0);
  FUNC_24(VAR_21);
 }

 FUNC_21(VAR_21, VAR_4);


 FUNC_24(VAR_21);

 if (VAR_26)
 {
  FUNC_2();
 }
}
