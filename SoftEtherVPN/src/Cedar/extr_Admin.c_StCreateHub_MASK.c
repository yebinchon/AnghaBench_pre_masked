
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


typedef int o ;
typedef scalar_t__ UINT ;
struct TYPE_30__ {TYPE_2__* Server; } ;
struct TYPE_29__ {int HubList; } ;
struct TYPE_28__ {scalar_t__ Type; int Offline; int CreatedTime; int SecurePassword; int HashedPassword; } ;
struct TYPE_27__ {int NoEnum; int MaxSession; } ;
struct TYPE_24__ {int NoEnum; int MaxSession; } ;
struct TYPE_26__ {scalar_t__ HubType; scalar_t__ Online; int SecurePassword; int HashedPassword; int HubName; int AdminPasswordPlainText; TYPE_1__ HubOption; } ;
struct TYPE_25__ {scalar_t__ ServerType; TYPE_6__* Cedar; } ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_CREATE_HUB ;
typedef TYPE_4__ HUB_OPTION ;
typedef TYPE_5__ HUB ;
typedef TYPE_6__ CEDAR ;
typedef TYPE_7__ ADMIN ;


 int VAR_0 ;
 int FUNC_0 (TYPE_7__*,int *,char*,int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,char*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_9 ;
 TYPE_5__* FUNC_13 (TYPE_6__*,int ,TYPE_4__*) ;
 int FUNC_14 (TYPE_5__*) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (int ,int ,scalar_t__) ;
 int FUNC_18 (TYPE_4__*) ;
 scalar_t__ FUNC_19 (int ,char*) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 () ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (TYPE_4__*,int) ;

UINT FUNC_25(ADMIN *VAR_14, RPC_CREATE_HUB *VAR_15)
{
 SERVER *VAR_16 = VAR_14->Server;
 CEDAR *VAR_17 = VAR_16->Cedar;
 HUB *VAR_18;
 HUB_OPTION VAR_19;
 UINT VAR_20;
 bool VAR_21;

 if (VAR_16->ServerType == VAR_11)
 {
  return VAR_3;
 }



 if (FUNC_7(VAR_15->HubName) || FUNC_9(VAR_15->HubName) == 0)
 {
  return VAR_2;
 }

 VAR_9;

 if (VAR_16->ServerType == VAR_11)
 {
  return VAR_3;
 }

 VAR_10;

 FUNC_22(VAR_15->HubName);
 if (FUNC_20(VAR_15->HubName) == 0)
 {
  return VAR_2;
 }
 if (FUNC_19(VAR_15->HubName, ".") || FUNC_3(VAR_15->HubName, "."))
 {
  return VAR_2;
 }

 if (VAR_16->ServerType == VAR_11)
 {
  return VAR_3;
 }

 if (VAR_16->ServerType == VAR_12)
 {
  if (VAR_15->HubType != VAR_8)
  {
   return VAR_2;
  }
 }
 else if (VAR_15->HubType != VAR_6 && VAR_15->HubType != VAR_7)
 {
  return VAR_2;
 }


 FUNC_24(&VAR_19, sizeof(VAR_19));
 VAR_19.MaxSession = VAR_15->HubOption.MaxSession;
 VAR_19.NoEnum = VAR_15->HubOption.NoEnum;


 FUNC_18(&VAR_19);

 FUNC_12(VAR_17->HubList);
 {
  VAR_20 = FUNC_11(VAR_17->HubList);
 }
 FUNC_23(VAR_17->HubList);

 if (VAR_20 > FUNC_4(VAR_14->Server, "i_max_hubs"))
 {
  return VAR_5;
 }

 FUNC_12(VAR_17->HubList);
 {
  VAR_21 = FUNC_8(VAR_17, VAR_15->HubName);
 }
 FUNC_23(VAR_17->HubList);

 if (VAR_21)
 {
  return VAR_1;
 }

 FUNC_0(VAR_14, ((void*)0), "LA_CREATE_HUB", VAR_15->HubName);


 if ((FUNC_10(VAR_15->HashedPassword, sizeof(VAR_15->HashedPassword)) &&
  FUNC_10(VAR_15->SecurePassword, sizeof(VAR_15->SecurePassword))) ||
  FUNC_20(VAR_15->AdminPasswordPlainText) != 0)
 {
  FUNC_17(VAR_15->HashedPassword, VAR_15->AdminPasswordPlainText, FUNC_20(VAR_15->AdminPasswordPlainText));
  FUNC_5(VAR_15->SecurePassword, VAR_0, VAR_15->AdminPasswordPlainText);
 }

 VAR_18 = FUNC_13(VAR_17, VAR_15->HubName, &VAR_19);
 FUNC_2(VAR_18->HashedPassword, VAR_15->HashedPassword, VAR_13);
 FUNC_2(VAR_18->SecurePassword, VAR_15->SecurePassword, VAR_13);

 VAR_18->Type = VAR_15->HubType;

 FUNC_1(VAR_17, VAR_18);

 if (VAR_15->Online)
 {
  VAR_18->Offline = 1;
  FUNC_16(VAR_18);
 }
 else
 {
  VAR_18->Offline = 0;
  FUNC_15(VAR_18);
 }

 VAR_18->CreatedTime = FUNC_21();

 FUNC_14(VAR_18);

 FUNC_6(VAR_16);

 return VAR_4;
}
