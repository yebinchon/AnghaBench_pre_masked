
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* RadiusRetryInterval; int RadiusSecret; int HubName; void* RadiusPort; int RadiusServerName; } ;
typedef TYPE_1__ RPC_RADIUS ;
typedef int PACK ;


 void* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(RPC_RADIUS *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(RPC_RADIUS));
 FUNC_1(VAR_1, "RadiusServerName", VAR_0->RadiusServerName, sizeof(VAR_0->RadiusServerName));
 VAR_0->RadiusPort = FUNC_0(VAR_1, "RadiusPort");
 FUNC_1(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 FUNC_1(VAR_1, "RadiusSecret", VAR_0->RadiusSecret, sizeof(VAR_0->RadiusSecret));
 VAR_0->RadiusRetryInterval = FUNC_0(VAR_1, "RadiusRetryInterval");
}
