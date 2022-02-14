
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_30__ {int ServerAdmin; TYPE_3__* Rpc; TYPE_6__* Server; } ;
struct TYPE_29__ {scalar_t__ Type; int CurrentVersion; int lock; int SecurePassword; int HashedPassword; TYPE_4__* Option; } ;
struct TYPE_26__ {int NoEnum; int MaxSession; } ;
struct TYPE_28__ {scalar_t__ HubType; char* AdminPasswordPlainText; scalar_t__ Online; int * SecurePassword; int * HashedPassword; TYPE_5__ HubOption; int HubName; } ;
struct TYPE_27__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_25__ {int NoEnum; int MaxSession; } ;
struct TYPE_24__ {TYPE_2__* Sock; } ;
struct TYPE_22__ {int* addr; } ;
struct TYPE_23__ {TYPE_1__ RemoteIP; } ;
typedef TYPE_6__ SERVER ;
typedef TYPE_7__ RPC_CREATE_HUB ;
typedef TYPE_8__ HUB ;
typedef int CEDAR ;
typedef TYPE_9__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*,TYPE_8__*,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (TYPE_8__*,int) ;
 TYPE_8__* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_8__*,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (TYPE_6__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int VAR_10 ;
 int FUNC_13 (TYPE_8__*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (TYPE_8__*) ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (int *,char*,scalar_t__) ;
 int FUNC_17 (TYPE_8__*) ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;

UINT FUNC_21(ADMIN *VAR_15, RPC_CREATE_HUB *VAR_16)
{
 SERVER *VAR_17 = VAR_15->Server;
 CEDAR *VAR_18 = VAR_17->Cedar;
 HUB *VAR_19;
 UINT VAR_20 = VAR_7;

 if (VAR_17->ServerType == VAR_12)
 {
  return VAR_5;
 }

 if (FUNC_8(VAR_16->HubName) || FUNC_9(VAR_16->HubName) == 0)
 {
  return VAR_3;
 }


 VAR_1;
 VAR_10;

 if (VAR_17->ServerType == VAR_12)
 {
  return VAR_5;
 }

 if (VAR_17->ServerType == VAR_13)
 {
  if (VAR_16->HubType != VAR_9)
  {
   return VAR_3;
  }
 }

 if (VAR_17->ServerType == VAR_11)
 {
  if (VAR_16->HubType == VAR_9)
  {
   return VAR_3;
  }
 }

 FUNC_12(VAR_18);
 {
  VAR_19 = FUNC_4(VAR_18, VAR_16->HubName);
 }
 FUNC_20(VAR_18);

 if (VAR_19 == ((void*)0))
 {
  return VAR_2;
 }

 if (VAR_19->Type != VAR_16->HubType)
 {
  FUNC_13(VAR_19);
  return VAR_6;
 }


 if (FUNC_18(VAR_16->AdminPasswordPlainText) != 0)
 {
  FUNC_16(VAR_16->HashedPassword, VAR_16->AdminPasswordPlainText, FUNC_18(VAR_16->AdminPasswordPlainText));
  FUNC_6(VAR_16->SecurePassword, VAR_0, VAR_16->AdminPasswordPlainText);
 }

 if (FUNC_10(VAR_16->HashedPassword, sizeof(VAR_16->HashedPassword)) == 0 &&
  FUNC_10(VAR_16->SecurePassword, sizeof(VAR_16->SecurePassword)) == 0)
 {
  if (VAR_15->ServerAdmin == 0 && FUNC_5(VAR_19, "no_change_admin_password") != 0)
  {
   FUNC_13(VAR_19);
   return VAR_4;
  }
 }


 {
  UCHAR VAR_21[VAR_14], VAR_22[VAR_14];
  FUNC_6(VAR_21, VAR_0, "");
  FUNC_16(VAR_22, "", 0);

  if (FUNC_1(VAR_16->HashedPassword, VAR_22, VAR_14) == 0 || FUNC_1(VAR_16->SecurePassword, VAR_21, VAR_14) == 0)
  {
   if (VAR_15->ServerAdmin == 0 && VAR_15->Rpc->Sock->RemoteIP.addr[0] != 127)
   {

    FUNC_13(VAR_19);
    return VAR_3;
   }
  }
 }

 FUNC_11(VAR_19->lock);
 {
  if (VAR_15->ServerAdmin == 0 && VAR_19->Type != VAR_16->HubType)
  {
   VAR_20 = VAR_4;
  }
  else
  {
   VAR_19->Type = VAR_16->HubType;
   VAR_19->Option->MaxSession = VAR_16->HubOption.MaxSession;
   VAR_19->Option->NoEnum = VAR_16->HubOption.NoEnum;
   if (FUNC_10(VAR_16->HashedPassword, sizeof(VAR_16->HashedPassword)) == 0 &&
    FUNC_10(VAR_16->SecurePassword, sizeof(VAR_16->SecurePassword)) == 0)
   {
    FUNC_2(VAR_19->HashedPassword, VAR_16->HashedPassword, VAR_14);
    FUNC_2(VAR_19->SecurePassword, VAR_16->SecurePassword, VAR_14);
   }
  }
 }
 FUNC_19(VAR_19->lock);

 if (VAR_16->Online)
 {
  if (VAR_15->ServerAdmin || FUNC_5(VAR_19, "no_online") == 0)
  {
   FUNC_15(VAR_19);
  }
 }
 else
 {
  if (VAR_15->ServerAdmin || FUNC_5(VAR_19, "no_offline") == 0)
  {
   FUNC_14(VAR_19);
  }
 }

 if (VAR_19->Type == VAR_8)
 {
  FUNC_3(VAR_19, 0);
 }

 VAR_19->CurrentVersion++;
 FUNC_17(VAR_19);

 FUNC_7(VAR_17);

 FUNC_0(VAR_15, VAR_19, "LA_SET_HUB");

 FUNC_13(VAR_19);

 return VAR_20;
}
