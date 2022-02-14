
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_18__ ;


typedef int wchar_t ;
typedef int secret_str ;
typedef int o ;
typedef int name ;
typedef int g ;
typedef scalar_t__ UINT ;
struct TYPE_26__ {int Size; int Buf; } ;
struct TYPE_25__ {char* RadiusSuffixFilter; char* RadiusRealm; scalar_t__ Type; int CurrentVersion; int LastVersion; scalar_t__ LastCommTime; scalar_t__ LastLoginTime; int Offline; int PacketLogger; int SecurityLogger; void* NumLogin; void* CreatedTime; TYPE_1__* Cedar; int SecureNATOption; int Traffic; int SecurePassword; int HashedPassword; int RadiusOptionLock; void* RadiusUsePeapInsteadOfEap; void* RadiusConvertAllMsChapv2AuthRequestToEap; } ;
struct TYPE_24__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_23__ {int Bridge; TYPE_18__* Server; } ;
struct TYPE_22__ {scalar_t__ ServerType; } ;
typedef TYPE_2__ SERVER ;
typedef char HUB_OPTION ;
typedef char HUB_LOG ;
typedef TYPE_3__ HUB ;
typedef int FOLDER ;
typedef int CEDAR ;
typedef TYPE_4__ BUF ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 void* FUNC_1 (int *,char*) ;
 TYPE_4__* FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ,int) ;
 int * FUNC_4 (int *,char*) ;
 void* FUNC_5 (int *,char*) ;
 void* FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,char*,char*,int) ;
 scalar_t__ FUNC_8 (int *,char*,int *,int) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_18__*,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_13 (int ,int ,char*) ;
 int FUNC_14 (int ) ;
 int VAR_4 ;
 int * FUNC_15 (int) ;
 TYPE_3__* FUNC_16 (int *,char*,char*) ;
 int FUNC_17 (int ,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_18 (TYPE_3__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_19 (TYPE_3__*,char*) ;
 int FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (TYPE_3__*) ;
 int FUNC_22 (TYPE_3__*) ;
 int FUNC_23 (TYPE_3__*,char*,scalar_t__,char*,scalar_t__) ;
 int FUNC_24 (int ,char*,int ) ;
 int FUNC_25 (TYPE_3__*,int *) ;
 int FUNC_26 (TYPE_3__*,int *) ;
 int FUNC_27 (TYPE_3__*,int *) ;
 int FUNC_28 (TYPE_3__*,int *) ;
 int FUNC_29 (char*,int *) ;
 int FUNC_30 (int *,char*) ;
 int FUNC_31 (TYPE_3__*,int *) ;
 int FUNC_32 (int *,char*,int ) ;
 void* FUNC_33 () ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (char*,int) ;

void FUNC_37(SERVER *VAR_8, FOLDER *VAR_9, char *VAR_10)
{
 HUB *VAR_11;
 CEDAR *VAR_12;
 HUB_OPTION VAR_13;
 bool VAR_14;
 UINT VAR_15 = 0;

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
 {
  return;
 }

 VAR_12 = VAR_8->Cedar;


 FUNC_36(&VAR_13, sizeof(VAR_13));
 FUNC_30(FUNC_4(VAR_9, "Option"), &VAR_13);


 VAR_11 = FUNC_16(VAR_12, VAR_10, &VAR_13);
 if (VAR_11 != ((void*)0))
 {
  HUB_LOG VAR_16;

  FUNC_14(VAR_11->RadiusOptionLock);
  {
   char VAR_17[VAR_4];
   BUF *VAR_18;
   UINT VAR_19;
   UINT VAR_20;

   VAR_19 = FUNC_5(VAR_9, "RadiusServerPort");
   VAR_20 = FUNC_5(VAR_9, "RadiusRetryInterval");

   FUNC_7(VAR_9, "RadiusSuffixFilter", VAR_11->RadiusSuffixFilter, sizeof(VAR_11->RadiusSuffixFilter));
   FUNC_7(VAR_9, "RadiusRealm", VAR_11->RadiusRealm, sizeof(VAR_11->RadiusRealm));

   VAR_11->RadiusConvertAllMsChapv2AuthRequestToEap = FUNC_1(VAR_9, "RadiusConvertAllMsChapv2AuthRequestToEap");
   VAR_11->RadiusUsePeapInsteadOfEap = FUNC_1(VAR_9, "RadiusUsePeapInsteadOfEap");

   if (VAR_20 == 0)
   {
    VAR_20 = VAR_5;
   }

   if (VAR_19 != 0 && FUNC_7(VAR_9, "RadiusServerName", VAR_17, sizeof(VAR_17)))
   {
    VAR_18 = FUNC_2(VAR_9, "RadiusSecret");
    if (VAR_18 != ((void*)0))
    {
     char VAR_21[VAR_4];
     FUNC_36(VAR_21, sizeof(VAR_21));
     if (VAR_18->Size < sizeof(VAR_21))
     {
      FUNC_9(VAR_21, VAR_18->Buf, VAR_18->Size);
     }
     VAR_21[sizeof(VAR_21) - 1] = 0;

     FUNC_23(VAR_11, VAR_17, VAR_19, VAR_21, VAR_20);
     FUNC_11(VAR_18);
    }
   }
  }
  FUNC_34(VAR_11->RadiusOptionLock);


  if (FUNC_3(VAR_9, "HashedPassword", VAR_11->HashedPassword, sizeof(VAR_11->HashedPassword)) != sizeof(VAR_11->HashedPassword))
  {
   FUNC_24(VAR_11->HashedPassword, "", 0);
  }
  if (FUNC_3(VAR_9, "SecurePassword", VAR_11->SecurePassword, sizeof(VAR_11->SecurePassword)) != sizeof(VAR_11->SecurePassword))
  {
   FUNC_13(VAR_11->SecurePassword, VAR_0, "");
  }


  FUNC_36(&VAR_16, sizeof(VAR_16));
  FUNC_29(&VAR_16, FUNC_4(VAR_9, "LogSetting"));
  FUNC_19(VAR_11, &VAR_16);


  if (VAR_11->Cedar->Bridge == 0)
  {
   VAR_14 = FUNC_1(VAR_9, "Online");
  }
  else
  {
   VAR_14 = 1;
  }


  FUNC_32(VAR_9, "Traffic", VAR_11->Traffic);


  FUNC_25(VAR_11, FUNC_4(VAR_9, "AccessList"));


  VAR_15 = VAR_11->Type = FUNC_5(VAR_9, "Type");

  if (VAR_8->ServerType == VAR_7)
  {
   if (VAR_11->Type != VAR_3)
   {

    VAR_11->Type = VAR_3;
   }
  }
  else
  {
   if (VAR_11->Type == VAR_3)
   {

    VAR_11->Type = VAR_2;
   }
  }

  if (VAR_11->Type == VAR_2)
  {
   VAR_11->CurrentVersion = VAR_11->LastVersion = 1;
  }


  {
   FOLDER *VAR_22 = FUNC_4(VAR_9, "Message");
   if (VAR_22 != ((void*)0))
   {
    wchar_t *VAR_23 = FUNC_15(sizeof(wchar_t) * (VAR_1 + 1));
    if (FUNC_8(VAR_22, "MessageText", VAR_23, sizeof(wchar_t) * (VAR_1 + 1)))
    {
     FUNC_20(VAR_11, VAR_23);
    }
    FUNC_10(VAR_23);
   }
  }


  if (VAR_11->Type == VAR_3)
  {


   {
    FUNC_28(VAR_11, FUNC_4(VAR_9, "CascadeList"));
   }
  }


  if (FUNC_12(VAR_11->Cedar->Server, "b_support_securenat"))
  {
   if (VAR_11->Type == VAR_3 || VAR_11->Type == VAR_2)
   {

    FUNC_31(VAR_11, FUNC_4(VAR_9, "SecureNAT"));

    if (VAR_11->Type != VAR_3 && VAR_11->Cedar != ((void*)0) && VAR_11->Cedar->Server != ((void*)0) &&
     VAR_11->Cedar->Server->ServerType == VAR_6)
    {
     FUNC_17(VAR_11->SecureNATOption,
      VAR_15 == VAR_3);
    }

   }
  }


  FUNC_26(VAR_11, FUNC_4(VAR_9, "AdminOption"));


  if (VAR_11->Cedar->Bridge == 0)
  {
   FUNC_27(VAR_11, FUNC_4(VAR_9, "SecurityAccountDatabase"));
  }


  VAR_11->LastCommTime = FUNC_6(VAR_9, "LastCommTime");
  if (VAR_11->LastCommTime == 0)
  {
   VAR_11->LastCommTime = FUNC_33();
  }
  VAR_11->LastLoginTime = FUNC_6(VAR_9, "LastLoginTime");
  if (VAR_11->LastLoginTime == 0)
  {
   VAR_11->LastLoginTime = FUNC_33();
  }
  VAR_11->CreatedTime = FUNC_6(VAR_9, "CreatedTime");
  VAR_11->NumLogin = FUNC_5(VAR_9, "NumLogin");


  FUNC_0(VAR_12, VAR_11);

  if (VAR_14)
  {
   VAR_11->Offline = 1;
   FUNC_22(VAR_11);
  }
  else
  {
   VAR_11->Offline = 0;
   FUNC_21(VAR_11);
  }

  FUNC_35(VAR_11->SecurityLogger);
  FUNC_35(VAR_11->PacketLogger);

  FUNC_18(VAR_11);
 }
}
