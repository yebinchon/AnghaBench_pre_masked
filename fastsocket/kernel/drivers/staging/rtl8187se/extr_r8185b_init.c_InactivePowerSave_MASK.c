
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {int bSwRfProcessing; int eInactivePowerState; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct net_device*) ;

void
FUNC_2(
 struct net_device *VAR_1
 )
{
 struct r8180_priv *VAR_2 = (struct r8180_priv *)FUNC_1(VAR_1);
 VAR_2->bSwRfProcessing = 1;

 FUNC_0(VAR_1, VAR_2->eInactivePowerState, VAR_0);





 VAR_2->bSwRfProcessing = 0;
}
