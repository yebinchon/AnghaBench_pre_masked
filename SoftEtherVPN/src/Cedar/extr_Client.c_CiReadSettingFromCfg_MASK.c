
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef int user_agent ;
typedef int t ;
struct TYPE_19__ {int Enabled; int Name; } ;
typedef TYPE_2__ UNIX_VLAN ;
typedef scalar_t__ UINT ;
struct TYPE_23__ {scalar_t__ OsType; } ;
struct TYPE_17__ {int NicDownOnDisconnect; } ;
struct TYPE_22__ {TYPE_4__* CmSetting; void* DontSavePassword; TYPE_1__* Cedar; void* UseSecureDeviceId; void* PasswordRemoteOnly; int EncryptedPassword; int UnixVLanList; TYPE_12__ Config; int Logger; int Eraser; int CommonProxySetting; } ;
struct TYPE_21__ {int HashedPassword; void* LockMode; void* EasyMode; } ;
struct TYPE_20__ {char* ProxyHostName; char* ProxyUsername; char* CustomHttpHeader; int ProxyPassword; void* ProxyPort; void* ProxyType; } ;
struct TYPE_18__ {char* HttpUserAgent; } ;
typedef TYPE_3__ INTERNET_SETTING ;
typedef int FOLDER ;
typedef TYPE_4__ CM_SETTING ;
typedef TYPE_5__ CLIENT ;
typedef int BUF ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (char*,int *) ;
 char* VAR_0 ;
 int FUNC_2 (TYPE_5__*,char*) ;
 void* FUNC_3 (int *,char*) ;
 int * FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,int ,int) ;
 int * FUNC_6 (int *,char*) ;
 void* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int *,char*,char*,int) ;
 int FUNC_10 (TYPE_5__*,int *) ;
 int FUNC_11 (TYPE_5__*,int *) ;
 int FUNC_12 (TYPE_12__*,int *) ;
 int FUNC_13 (TYPE_5__*,int *) ;
 int FUNC_14 (int *,TYPE_3__*,int) ;
 char* FUNC_15 (char*) ;
 char* FUNC_16 (int *) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (int *) ;
 TYPE_8__* FUNC_19 () ;
 int FUNC_20 (char*) ;
 int VAR_1 ;
 int FUNC_21 (int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_24 (int ,char*,int ) ;
 int FUNC_25 (int ,int,char*) ;
 int FUNC_26 (char*,int *,int) ;
 int FUNC_27 (TYPE_3__*,int) ;
 TYPE_2__* FUNC_28 (int) ;
 int FUNC_29 (int ) ;

bool FUNC_30(CLIENT *VAR_4, FOLDER *VAR_5)
{
 FOLDER *VAR_6;
 FOLDER *VAR_7;
 FOLDER *VAR_8;
 FOLDER *VAR_9;
 FOLDER *VAR_10;
 FOLDER *VAR_11;
 char VAR_12[VAR_1];

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return 0;
 }


 VAR_6 = FUNC_6(VAR_5, "Config");
 if (VAR_6 == ((void*)0))
 {
  return 0;
 }

 VAR_8 = FUNC_6(VAR_5, "AccountDatabase");
 if (VAR_8 == ((void*)0))
 {
  return 0;
 }

 VAR_10 = FUNC_6(VAR_5, "ClientManagerSetting");

 FUNC_12(&VAR_4->Config, VAR_6);


 VAR_11 = FUNC_6(VAR_5, "CommonProxySetting");

 if (VAR_11 != ((void*)0))
 {
  INTERNET_SETTING VAR_13;
  BUF *VAR_14;


  FUNC_27(&VAR_13, sizeof(VAR_13));
  VAR_13.ProxyType = FUNC_7(VAR_11, "ProxyType");
  FUNC_9(VAR_11, "ProxyHostName", VAR_13.ProxyHostName, sizeof(VAR_13.ProxyHostName));
  VAR_13.ProxyPort = FUNC_7(VAR_11, "ProxyPort");
  FUNC_9(VAR_11, "ProxyUsername", VAR_13.ProxyUsername, sizeof(VAR_13.ProxyUsername));
  VAR_14 = FUNC_4(VAR_11, "ProxyPassword");
  if (VAR_14 != ((void*)0))
  {
   char *VAR_15 = FUNC_16(VAR_14);
   FUNC_25(VAR_13.ProxyPassword, sizeof(VAR_13.ProxyPassword), VAR_15);

   FUNC_17(VAR_15);
   FUNC_18(VAR_14);
  }

  FUNC_9(VAR_11, "CustomHttpHeader", VAR_13.CustomHttpHeader, sizeof(VAR_13.CustomHttpHeader));

  FUNC_14(&VAR_4->CommonProxySetting, &VAR_13, sizeof(INTERNET_SETTING));
 }


 VAR_4->Eraser = FUNC_21(VAR_4->Logger, FUNC_8(VAR_6, "AutoDeleteCheckDiskFreeSpaceMin"));

 if (FUNC_22(FUNC_19()->OsType)



     )
 {

  VAR_9 = FUNC_6(VAR_5, "UnixVLan");
  if (VAR_9 != ((void*)0))
  {
   FUNC_13(VAR_4, VAR_9);
  }
 }
 FUNC_10(VAR_4, VAR_8);

 if (FUNC_5(VAR_5, "EncryptedPassword", VAR_4->EncryptedPassword, VAR_3) == 0)
 {
  FUNC_24(VAR_4->EncryptedPassword, "", 0);
 }

 VAR_4->PasswordRemoteOnly = FUNC_3(VAR_5, "PasswordRemoteOnly");
 VAR_4->UseSecureDeviceId = FUNC_7(VAR_5, "UseSecureDeviceId");

 if (FUNC_9(VAR_5, "UserAgent", VAR_12, sizeof(VAR_12)))
 {
  if (FUNC_20(VAR_12) == 0)
  {
   FUNC_17(VAR_4->Cedar->HttpUserAgent);
   VAR_4->Cedar->HttpUserAgent = FUNC_15(VAR_12);
  }
 }

 VAR_7 = FUNC_6(VAR_5, "RootCA");
 if (VAR_7 != ((void*)0))
 {
  FUNC_11(VAR_4, VAR_7);
 }

 VAR_4->DontSavePassword = FUNC_3(VAR_5, "DontSavePassword");

 if (VAR_10 != ((void*)0))
 {
  UINT VAR_16 = FUNC_19()->OsType;

  CM_SETTING *VAR_17 = VAR_4->CmSetting;

  if (FUNC_22(VAR_16) || FUNC_23(VAR_16))
  {
   VAR_17->EasyMode = FUNC_3(VAR_10, "EasyMode");
  }

  VAR_17->LockMode = FUNC_3(VAR_10, "LockMode");
  FUNC_5(VAR_10, "HashedPassword", VAR_17->HashedPassword, sizeof(VAR_17->HashedPassword));
 }

 return 1;
}
