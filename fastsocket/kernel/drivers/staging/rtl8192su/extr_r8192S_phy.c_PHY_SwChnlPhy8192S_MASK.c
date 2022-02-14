
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int chan; scalar_t__ rf_chip; void* SwChnlInProgress; scalar_t__ SwChnlStep; scalar_t__ SwChnlStage; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int) ;
 void* VAR_3 ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;

void FUNC_4(
 struct net_device* VAR_4,
 u8 VAR_5
 )
{
 struct r8192_priv *VAR_6 = FUNC_2(VAR_4);

 FUNC_1(VAR_0, "==>PHY_SwChnlPhy8192S(), switch to channel %d.\n", VAR_6->chan);
 if(VAR_6->SwChnlInProgress)
  return;


 if(VAR_6->rf_chip == VAR_2)
 {
  VAR_6->SwChnlInProgress=VAR_1;
  return;
 }

 VAR_6->SwChnlInProgress = VAR_3;
 if( VAR_5 == 0)
  VAR_5 = 1;

 VAR_6->chan=VAR_5;

 VAR_6->SwChnlStage = 0;
 VAR_6->SwChnlStep = 0;

 FUNC_3(VAR_4,VAR_5);

 VAR_6->SwChnlInProgress = VAR_1;
}
