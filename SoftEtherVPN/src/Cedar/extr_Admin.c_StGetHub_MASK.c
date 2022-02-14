
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_17__ {TYPE_3__* Server; } ;
struct TYPE_16__ {int lock; int Type; TYPE_2__* Option; scalar_t__ Offline; int Name; } ;
struct TYPE_12__ {int NoEnum; int MaxSession; } ;
struct TYPE_15__ {int Online; int HubType; TYPE_1__ HubOption; int HubName; } ;
struct TYPE_14__ {scalar_t__ ServerType; int * Cedar; } ;
struct TYPE_13__ {int NoEnum; int MaxSession; } ;
typedef TYPE_3__ SERVER ;
typedef TYPE_4__ RPC_CREATE_HUB ;
typedef TYPE_5__ HUB ;
typedef int CEDAR ;
typedef TYPE_6__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int FUNC_5 (TYPE_5__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int) ;

UINT FUNC_10(ADMIN *VAR_7, RPC_CREATE_HUB *VAR_8)
{
 SERVER *VAR_9 = VAR_7->Server;
 CEDAR *VAR_10 = VAR_9->Cedar;
 UINT VAR_11 = VAR_4;
 HUB *VAR_12;

 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_3;
 }

 if (FUNC_1(VAR_8->HubName) || FUNC_2(VAR_8->HubName) == 0)
 {
  return VAR_2;
 }

 if (VAR_9->ServerType == VAR_6)
 {
  return VAR_3;
 }

 VAR_5;
 VAR_0;

 FUNC_4(VAR_10);
 {
  VAR_12 = FUNC_0(VAR_10, VAR_8->HubName);
 }
 FUNC_8(VAR_10);

 FUNC_9(VAR_8, sizeof(RPC_CREATE_HUB));

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_3(VAR_12->lock);
 {
  FUNC_6(VAR_8->HubName, sizeof(VAR_8->HubName), VAR_12->Name);
  VAR_8->Online = VAR_12->Offline ? 0 : 1;
  VAR_8->HubOption.MaxSession = VAR_12->Option->MaxSession;
  VAR_8->HubOption.NoEnum = VAR_12->Option->NoEnum;
  VAR_8->HubType = VAR_12->Type;
 }
 FUNC_7(VAR_12->lock);

 FUNC_5(VAR_12);

 return VAR_11;
}
