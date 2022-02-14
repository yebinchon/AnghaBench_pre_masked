
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ RadiusServerPort; scalar_t__ RadiusRetryInterval; int RadiusConvertAllMsChapv2AuthRequestToEap; int RadiusUsePeapInsteadOfEap; int HubIsOnlineButHalting; scalar_t__ Type; scalar_t__ NumLogin; int CreatedTime; int LastLoginTime; int LastCommTime; int HubDb; TYPE_1__* Cedar; int LogSetting; int Msg; int Option; int Traffic; scalar_t__ Offline; int SecurePassword; int HashedPassword; int RadiusOptionLock; int * RadiusRealm; int * RadiusSuffixFilter; int RadiusSecret; int * RadiusServerName; } ;
struct TYPE_8__ {int Bridge; int Server; } ;
typedef TYPE_2__ HUB ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,scalar_t__) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int * FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,TYPE_2__*) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (TYPE_2__*,int *) ;
 int FUNC_18 (int *,char*,int ) ;
 int FUNC_19 (int ) ;

void FUNC_20(FOLDER *VAR_2, HUB *VAR_3)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }


 FUNC_10(VAR_3->RadiusOptionLock);
 {
  if (VAR_3->RadiusServerName != ((void*)0))
  {
   FUNC_5(VAR_2, "RadiusServerName", VAR_3->RadiusServerName);
   FUNC_1(VAR_2, "RadiusSecret", VAR_3->RadiusSecret);
  }
  FUNC_3(VAR_2, "RadiusServerPort", VAR_3->RadiusServerPort);
  FUNC_3(VAR_2, "RadiusRetryInterval", VAR_3->RadiusRetryInterval);
  FUNC_5(VAR_2, "RadiusSuffixFilter", VAR_3->RadiusSuffixFilter);
  FUNC_5(VAR_2, "RadiusRealm", VAR_3->RadiusRealm);

  FUNC_0(VAR_2, "RadiusConvertAllMsChapv2AuthRequestToEap", VAR_3->RadiusConvertAllMsChapv2AuthRequestToEap);
  FUNC_0(VAR_2, "RadiusUsePeapInsteadOfEap", VAR_3->RadiusUsePeapInsteadOfEap);
 }
 FUNC_19(VAR_3->RadiusOptionLock);


 FUNC_2(VAR_2, "HashedPassword", VAR_3->HashedPassword, sizeof(VAR_3->HashedPassword));
 FUNC_2(VAR_2, "SecurePassword", VAR_3->SecurePassword, sizeof(VAR_3->SecurePassword));


 if (VAR_3->Cedar->Bridge == 0)
 {
  FUNC_0(VAR_2, "Online", (VAR_3->Offline && (VAR_3->HubIsOnlineButHalting == 0)) ? 0 : 1);
 }


 FUNC_18(VAR_2, "Traffic", VAR_3->Traffic);


 FUNC_16(FUNC_7(VAR_2, "Option"), VAR_3->Option);


 {
  FOLDER *VAR_4 = FUNC_7(VAR_2, "Message");

  if (FUNC_9(VAR_3->Msg) == 0)
  {
   FUNC_6(VAR_4, "MessageText", VAR_3->Msg);
  }
 }


 FUNC_15(FUNC_7(VAR_2, "LogSetting"), &VAR_3->LogSetting);

 if (VAR_3->Type == VAR_1)
 {

  FUNC_14(FUNC_7(VAR_2, "CascadeList"), VAR_3);
 }

 if (VAR_3->Type != VAR_0)
 {
  if (FUNC_8(VAR_3->Cedar->Server, "b_support_securenat"))
  {

   FUNC_17(VAR_3, FUNC_7(VAR_2, "SecureNAT"));
  }
 }


 FUNC_11(FUNC_7(VAR_2, "AccessList"), VAR_3);


 FUNC_12(FUNC_7(VAR_2, "AdminOption"), VAR_3);


 FUNC_3(VAR_2, "Type", VAR_3->Type);


 if (VAR_3->Cedar->Bridge == 0)
 {
  FUNC_13(FUNC_7(VAR_2, "SecurityAccountDatabase"), VAR_3->HubDb,
   0
   );
 }


 FUNC_4(VAR_2, "LastCommTime", VAR_3->LastCommTime);
 FUNC_4(VAR_2, "LastLoginTime", VAR_3->LastLoginTime);
 FUNC_4(VAR_2, "CreatedTime", VAR_3->CreatedTime);
 FUNC_3(VAR_2, "NumLogin", VAR_3->NumLogin);
}
