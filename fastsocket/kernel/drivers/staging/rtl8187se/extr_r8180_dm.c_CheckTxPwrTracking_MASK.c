
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r8180_priv {scalar_t__ bToUpdateTxPwr; int bTxPowerTrack; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;

bool
FUNC_1( struct net_device *VAR_0)
{
 struct r8180_priv *VAR_1 = (struct r8180_priv *)FUNC_0(VAR_0);

 if(!VAR_1->bTxPowerTrack)
 {
  return 0;
 }
 if(VAR_1->bToUpdateTxPwr)
 {
  return 0;
 }

 return 1;
}
