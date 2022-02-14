
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int Cedar; } ;
struct TYPE_8__ {TYPE_5__* Server; } ;
struct TYPE_7__ {int DeviceName; int HubName; } ;
typedef TYPE_1__ RPC_LOCALBRIDGE ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;

UINT FUNC_4(ADMIN *VAR_4, RPC_LOCALBRIDGE *VAR_5)
{
 if (FUNC_3(VAR_5->DeviceName) || FUNC_3(VAR_5->HubName))
 {
  return VAR_0;
 }

 VAR_3;

 FUNC_0(VAR_4, ((void*)0), "LA_DELETE_BRIDGE", VAR_5->HubName, VAR_5->DeviceName);

 if (FUNC_1(VAR_4->Server->Cedar, VAR_5->HubName, VAR_5->DeviceName) == 0)
 {
  return VAR_2;
 }

 FUNC_2(VAR_4->Server);

 return VAR_1;
}
