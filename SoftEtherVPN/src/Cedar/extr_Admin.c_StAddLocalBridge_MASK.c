
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tmp ;
typedef scalar_t__ UINT ;
struct TYPE_9__ {int Cedar; } ;
struct TYPE_8__ {TYPE_5__* Server; } ;
struct TYPE_7__ {int TapMode; int DeviceName; int HubName; } ;
typedef TYPE_1__ RPC_LOCALBRIDGE ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,int,int ,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (char*,int,int ) ;

UINT FUNC_6(ADMIN *VAR_6, RPC_LOCALBRIDGE *VAR_7)
{
 if (FUNC_3(VAR_7->DeviceName) || FUNC_3(VAR_7->HubName))
 {
  return VAR_0;
 }

 VAR_5;


 if (FUNC_4() == 0)
 {
  return VAR_1;
 }
 FUNC_0(VAR_6, ((void*)0), "LA_ADD_BRIDGE", VAR_7->HubName, VAR_7->DeviceName);

 FUNC_1(VAR_6->Server->Cedar, VAR_7->HubName, VAR_7->DeviceName, 0, 0, VAR_7->TapMode, ((void*)0), 0);

 FUNC_2(VAR_6->Server);

 return VAR_2;
}
