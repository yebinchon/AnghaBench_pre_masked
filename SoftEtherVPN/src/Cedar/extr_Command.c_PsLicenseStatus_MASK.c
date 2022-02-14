
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char wchar_t ;
typedef int tmp ;
typedef int st ;
typedef int dtstr ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int CapsList; int Rpc; } ;
struct TYPE_5__ {scalar_t__ EditionId; scalar_t__ ReleaseDate; char* SystemId; scalar_t__ SystemExpires; int NeedSubscription; scalar_t__ SubscriptionExpires; scalar_t__ NumClientConnectLicense; scalar_t__ NumBridgeConnectLicense; scalar_t__ AllowEnterpriseFunction; scalar_t__ IsSubscriptionExpired; int EditionStr; } ;
typedef TYPE_1__ RPC_LICENSE_STATUS ;
typedef TYPE_2__ PS ;
typedef int LIST ;
typedef int CT ;
typedef int CONSOLE ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,char*,char*) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int,scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_7 (int *,char*,char*,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_1__*) ;
 int FUNC_9 (char*,int,int ) ;
 int FUNC_10 (char*,int,char*,char*) ;
 int FUNC_11 (char*,int,char*) ;
 int FUNC_12 (char*,scalar_t__) ;
 int FUNC_13 (TYPE_1__*,int) ;
 char* FUNC_14 (char*) ;

UINT FUNC_15(CONSOLE *VAR_6, char *VAR_7, wchar_t *VAR_8, void *VAR_9)
{
 LIST *VAR_10;
 PS *VAR_11 = (PS *)VAR_9;
 UINT VAR_12 = 0;
 RPC_LICENSE_STATUS VAR_13;
 CT *VAR_14;
 wchar_t VAR_15[VAR_5];

 VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_8, ((void*)0), 0);
 if (VAR_10 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_13(&VAR_13, sizeof(VAR_13));


 VAR_12 = FUNC_8(VAR_11->Rpc, &VAR_13);

 if (VAR_12 != VAR_1)
 {

  FUNC_0(VAR_6, VAR_12);
  FUNC_4(VAR_10);
  return VAR_12;
 }

 VAR_14 = FUNC_3();

 if (VAR_13.EditionId == VAR_3)
 {
  FUNC_2(VAR_14, FUNC_14("SM_NO_LICENSE_COLUMN"), FUNC_14("SM_NO_LICENSE"));
 }
 else
 {

  FUNC_9(VAR_15, sizeof(VAR_15), VAR_13.EditionStr);
  FUNC_2(VAR_14, FUNC_14("SM_LICENSE_STATUS_EDITION"), VAR_15);


  if (VAR_13.ReleaseDate != 0)
  {
   FUNC_6(VAR_15, sizeof(VAR_15), VAR_13.ReleaseDate, ((void*)0));
   FUNC_2(VAR_14, FUNC_14("SM_LICENSE_STATUS_RELEASE"), VAR_15);
  }


  FUNC_10(VAR_15, sizeof(VAR_15), L"%I64u", VAR_13.SystemId);
  FUNC_2(VAR_14, FUNC_14("SM_LICENSE_STATUS_SYSTEM_ID"), VAR_15);


  if (VAR_13.SystemExpires == 0)
  {
   FUNC_11(VAR_15, sizeof(VAR_15), FUNC_14("SM_LICENSE_NO_EXPIRES"));
  }
  else
  {
   FUNC_6(VAR_15, sizeof(VAR_15), VAR_13.SystemExpires, ((void*)0));
  }
  FUNC_2(VAR_14, FUNC_14("SM_LICENSE_STATUS_EXPIRES"), VAR_15);


  if (VAR_13.NeedSubscription == 0)
  {
   FUNC_11(VAR_15, sizeof(VAR_15), FUNC_14("SM_LICENSE_STATUS_SUBSCRIPTION_NONEED"));
  }
  else
  {
   if (VAR_13.SubscriptionExpires == 0)
   {
    FUNC_11(VAR_15, sizeof(VAR_15), FUNC_14("SM_LICENSE_STATUS_SUBSCRIPTION_NONE"));
   }
   else
   {
    wchar_t VAR_16[VAR_4];

    FUNC_6(VAR_16, sizeof(VAR_16), VAR_13.SubscriptionExpires, ((void*)0));

    FUNC_10(VAR_15, sizeof(VAR_15),
     VAR_13.IsSubscriptionExpired ? FUNC_14("SM_LICENSE_STATUS_SUBSCRIPTION_EXPIRED") : FUNC_14("SM_LICENSE_STATUS_SUBSCRIPTION_VALID"),
     VAR_16);
   }
  }
  FUNC_2(VAR_14, FUNC_14("SM_LICENSE_STATUS_SUBSCRIPTION"), VAR_15);

  if (VAR_13.NeedSubscription == 0 && VAR_13.SubscriptionExpires != 0)
  {
   wchar_t VAR_17[VAR_4];

   FUNC_6(VAR_17, sizeof(VAR_17), VAR_13.SubscriptionExpires, ((void*)0));

   FUNC_2(VAR_14, FUNC_14("SM_LICENSE_STATUS_SUBSCRIPTION_BUILD_STR"), VAR_15);
  }

  if (FUNC_5(VAR_11->CapsList, "b_vpn3"))
  {

   if (VAR_13.NumClientConnectLicense == VAR_2)
   {
    FUNC_11(VAR_15, sizeof(VAR_15), FUNC_14("SM_LICENSE_INFINITE"));
   }
   else
   {
    FUNC_12(VAR_15, VAR_13.NumClientConnectLicense);
   }
   FUNC_2(VAR_14, FUNC_14("SM_LICENSE_NUM_CLIENT"), VAR_15);
  }


  if (VAR_13.NumBridgeConnectLicense == VAR_2)
  {
   FUNC_11(VAR_15, sizeof(VAR_15), FUNC_14("SM_LICENSE_INFINITE"));
  }
  else
  {
   FUNC_12(VAR_15, VAR_13.NumBridgeConnectLicense);
  }
  FUNC_2(VAR_14, FUNC_14("SM_LICENSE_NUM_BRIDGE"), VAR_15);


  FUNC_2(VAR_14, FUNC_14("SM_LICENSE_STATUS_ENTERPRISE"),
   VAR_13.AllowEnterpriseFunction ? FUNC_14("SM_LICENSE_STATUS_ENTERPRISE_YES") : FUNC_14("SM_LICENSE_STATUS_ENTERPRISE_NO"));
 }

 FUNC_1(VAR_14, VAR_6, 0);

 FUNC_4(VAR_10);

 return 0;
}
