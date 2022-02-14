
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ OsType; } ;
struct TYPE_13__ {int CustomHttpHeader; int ProxyPassword; int ProxyUsername; int ProxyPort; int ProxyHostName; int ProxyType; } ;
struct TYPE_15__ {TYPE_4__* CmSetting; TYPE_2__* Cedar; int DontSavePassword; int UseSecureDeviceId; int PasswordRemoteOnly; int EncryptedPassword; TYPE_3__ CommonProxySetting; TYPE_1__* Eraser; int Config; } ;
struct TYPE_14__ {int HashedPassword; int LockMode; int EasyMode; } ;
struct TYPE_12__ {int HttpUserAgent; } ;
struct TYPE_11__ {int MinFreeSpace; } ;
typedef TYPE_3__ INTERNET_SETTING ;
typedef int FOLDER ;
typedef TYPE_4__ CM_SETTING ;
typedef TYPE_5__ CLIENT ;
typedef int BUF ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 int FUNC_8 (TYPE_5__*,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_5__*,int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 TYPE_6__* FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int VAR_1 ;

void FUNC_17(CLIENT *VAR_2, FOLDER *VAR_3)
{
 FOLDER *VAR_4;
 FOLDER *VAR_5;
 FOLDER *VAR_6;
 FOLDER *VAR_7;
 FOLDER *VAR_8;
 FOLDER *VAR_9;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_8 = FUNC_6(VAR_3, "ClientManagerSetting");


 VAR_4 = FUNC_6(VAR_3, "Config");
 FUNC_9(VAR_4, &VAR_2->Config);



 FUNC_4(VAR_4, "AutoDeleteCheckDiskFreeSpaceMin", VAR_2->Eraser->MinFreeSpace);


 VAR_5 = FUNC_6(VAR_3, "AccountDatabase");
 FUNC_7(VAR_2, VAR_5);


 VAR_9 = FUNC_6(VAR_3, "CommonProxySetting");
 if (VAR_9 != ((void*)0))
 {
  INTERNET_SETTING *VAR_10 = &VAR_2->CommonProxySetting;
  BUF *VAR_11;

  FUNC_3(VAR_9, "ProxyType", VAR_10->ProxyType);
  FUNC_5(VAR_9, "ProxyHostName", VAR_10->ProxyHostName);
  FUNC_3(VAR_9, "ProxyPort", VAR_10->ProxyPort);
  FUNC_5(VAR_9, "ProxyUsername", VAR_10->ProxyUsername);

  if (FUNC_14(VAR_10->ProxyPassword) == 0)
  {
   VAR_11 = FUNC_11(VAR_10->ProxyPassword);

   FUNC_1(VAR_9, "ProxyPassword", VAR_11);

   FUNC_12(VAR_11);
  }

  FUNC_5(VAR_9, "CustomHttpHeader", VAR_10->CustomHttpHeader);
 }


 VAR_6 = FUNC_6(VAR_3, "RootCA");
 FUNC_8(VAR_2, VAR_6);


 if (FUNC_16(FUNC_13()->OsType)



     )
 {
  VAR_7 = FUNC_6(VAR_3, "UnixVLan");
  FUNC_10(VAR_2, VAR_7);
 }


 FUNC_2(VAR_3, "EncryptedPassword", VAR_2->EncryptedPassword, VAR_1);
 FUNC_0(VAR_3, "PasswordRemoteOnly", VAR_2->PasswordRemoteOnly);


 FUNC_3(VAR_3, "UseSecureDeviceId", VAR_2->UseSecureDeviceId);


 FUNC_0(VAR_3, "DontSavePassword", VAR_2->DontSavePassword);


 if (VAR_2->Cedar != ((void*)0))
 {
  FUNC_5(VAR_3, "UserAgent", VAR_2->Cedar->HttpUserAgent);
 }

 if (VAR_8 != ((void*)0))
 {
  CM_SETTING *VAR_12 = VAR_2->CmSetting;

  FUNC_0(VAR_8, "EasyMode", VAR_12->EasyMode);
  FUNC_0(VAR_8, "LockMode", VAR_12->LockMode);

  if (FUNC_15(VAR_12->HashedPassword, sizeof(VAR_12->HashedPassword)) == 0)
  {
   FUNC_2(VAR_8, "HashedPassword", VAR_12->HashedPassword, sizeof(VAR_12->HashedPassword));
  }
 }
}
