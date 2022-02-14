
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RadiusRetryInterval; int RadiusSecret; int HubName; int RadiusPort; int RadiusServerName; } ;
typedef TYPE_1__ RPC_RADIUS ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, RPC_RADIUS *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "RadiusServerName", VAR_1->RadiusServerName);
 FUNC_0(VAR_0, "RadiusPort", VAR_1->RadiusPort);
 FUNC_1(VAR_0, "HubName", VAR_1->HubName);
 FUNC_1(VAR_0, "RadiusSecret", VAR_1->RadiusSecret);
 FUNC_0(VAR_0, "RadiusRetryInterval", VAR_1->RadiusRetryInterval);
}
