
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {TYPE_1__* Server; } ;
struct TYPE_9__ {int RadiusRetryInterval; int RadiusSecret; int RadiusPort; int RadiusServerName; int HubName; } ;
struct TYPE_8__ {scalar_t__ ServerType; int * Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_RADIUS ;
typedef int HUB ;
typedef int CEDAR ;
typedef TYPE_3__ ADMIN ;


 int FUNC_0 (TYPE_3__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,int ,int ,int ,int ) ;
 int FUNC_8 (int *) ;

UINT FUNC_9(ADMIN *VAR_8, RPC_RADIUS *VAR_9)
{
 SERVER *VAR_10 = VAR_8->Server;
 CEDAR *VAR_11 = VAR_10->Cedar;
 HUB *VAR_12 = ((void*)0);

 VAR_6;

 if (VAR_10->ServerType == VAR_7)
 {
  return VAR_2;
 }

 if (FUNC_1(VAR_5) != 0 && FUNC_4(VAR_9->RadiusServerName) == 0)
 {
  return VAR_3;
 }

 VAR_0;

 FUNC_5(VAR_11);
 {
  VAR_12 = FUNC_2(VAR_11, VAR_9->HubName);
 }
 FUNC_8(VAR_11);

 if (VAR_12 == ((void*)0))
 {
  return VAR_1;
 }


 FUNC_7(VAR_12, VAR_9->RadiusServerName, VAR_9->RadiusPort, VAR_9->RadiusSecret, VAR_9->RadiusRetryInterval);

 FUNC_0(VAR_8, VAR_12, "LA_SET_HUB_RADIUS");

 FUNC_6(VAR_12);

 FUNC_3(VAR_10);

 return VAR_4;
}
