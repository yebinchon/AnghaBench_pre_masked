
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {TYPE_1__* Server; } ;
struct TYPE_8__ {int RadiusRetryInterval; int RadiusSecret; int RadiusPort; int RadiusServerName; int HubName; } ;
struct TYPE_7__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_RADIUS ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int,int *,int ,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int) ;

UINT FUNC_6(ADMIN *VAR_5, RPC_RADIUS *VAR_6)
{
 SERVER *VAR_7 = VAR_5->Server;
 CEDAR *VAR_8 = VAR_7->Cedar;
 HUB *VAR_9 = ((void*)0);

 VAR_0;

 if (VAR_7->ServerType == VAR_4)
 {
  return VAR_2;
 }

 FUNC_2(VAR_8);
 {
  VAR_9 = FUNC_0(VAR_8, VAR_6->HubName);
 }
 FUNC_4(VAR_8);

 if (VAR_9 == ((void*)0))
 {
  return VAR_1;
 }

 FUNC_5(VAR_6, sizeof(RPC_RADIUS));


 FUNC_1(VAR_9, VAR_6->RadiusServerName, sizeof(VAR_6->RadiusServerName),
  &VAR_6->RadiusPort, VAR_6->RadiusSecret, sizeof(VAR_6->RadiusSecret), &VAR_6->RadiusRetryInterval);

 FUNC_3(VAR_9);

 return VAR_3;
}
