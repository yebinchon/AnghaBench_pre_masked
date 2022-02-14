
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ AuthType; int * CheckCertProc; int * SecureSignProc; } ;
struct TYPE_19__ {int LinkList; int StopAllLinkFlag; scalar_t__ Halt; } ;
struct TYPE_18__ {int ref; TYPE_1__* Policy; TYPE_3__* Hub; TYPE_5__* Auth; TYPE_1__* Option; int * Cedar; int lock; int * StopAllLinkFlag; } ;
struct TYPE_17__ {int RequireBridgeRoutingMode; int RequireMonitorMode; int RetryInterval; int NoRoutingTracking; int NumRetry; int DeviceName; int AccountName; } ;
typedef TYPE_1__ POLICY ;
typedef TYPE_2__ LINK ;
typedef TYPE_3__ HUB ;
typedef TYPE_1__ CLIENT_OPTION ;
typedef TYPE_5__ CLIENT_AUTH ;
typedef int CEDAR ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_5__* FUNC_3 (TYPE_5__*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 void* FUNC_12 (int) ;

LINK *FUNC_13(CEDAR *VAR_7, HUB *VAR_8, CLIENT_OPTION *VAR_9, CLIENT_AUTH *VAR_10, POLICY *VAR_11)
{
 CLIENT_OPTION *VAR_12;
 LINK *VAR_13;
 CLIENT_AUTH *VAR_14;

 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_11 == ((void*)0))
 {
  return ((void*)0);
 }
 if (VAR_8->Halt)
 {
  return ((void*)0);
 }

 if (FUNC_4(VAR_8->LinkList) >= VAR_6)
 {
  return ((void*)0);
 }

 if (FUNC_10(VAR_9->AccountName))
 {
  return ((void*)0);
 }


 if (VAR_10->AuthType != VAR_0 && VAR_10->AuthType != VAR_2 &&
  VAR_10->AuthType != VAR_3 && VAR_10->AuthType != VAR_1)
 {

  return ((void*)0);
 }


 VAR_12 = FUNC_12(sizeof(CLIENT_OPTION));
 FUNC_2(VAR_12, VAR_9, sizeof(CLIENT_OPTION));
 FUNC_9(VAR_12->DeviceName, sizeof(VAR_12->DeviceName), VAR_5);

 VAR_12->RequireBridgeRoutingMode = 1;
 VAR_12->RequireMonitorMode = 0;

 VAR_12->NumRetry = VAR_4;
 VAR_12->RetryInterval = 10;
 VAR_12->NoRoutingTracking = 1;


 VAR_14 = FUNC_3(VAR_10);
 VAR_14->SecureSignProc = ((void*)0);
 VAR_14->CheckCertProc = ((void*)0);


 VAR_13 = FUNC_12(sizeof(LINK));

 VAR_13->StopAllLinkFlag = &VAR_8->StopAllLinkFlag;

 VAR_13->lock = FUNC_6();
 VAR_13->ref = FUNC_7();

 VAR_13->Cedar = VAR_7;
 VAR_13->Option = VAR_12;
 VAR_13->Auth = VAR_14;
 VAR_13->Hub = VAR_8;


 VAR_13->Policy = FUNC_12(sizeof(POLICY));
 FUNC_2(VAR_13->Policy, VAR_11, sizeof(POLICY));


 FUNC_8(VAR_13->Policy);


 FUNC_5(VAR_8->LinkList);
 {
  FUNC_0(VAR_8->LinkList, VAR_13);
  FUNC_1(VAR_13->ref);
 }
 FUNC_11(VAR_8->LinkList);

 return VAR_13;
}
