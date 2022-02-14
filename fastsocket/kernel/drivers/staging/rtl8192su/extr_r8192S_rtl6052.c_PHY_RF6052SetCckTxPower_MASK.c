
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int bDynamicTxLowPower; scalar_t__ bIgnoreDiffRateTxPowerOffset; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int scanning; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int ,int ,int) ;

extern void FUNC_2(struct net_device* VAR_3, u8 VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_0(VAR_3);
 u32 VAR_6=0;

 if(VAR_5->ieee80211->scanning == 1)
  VAR_6 = 0x3f;
 else if(VAR_5->bDynamicTxLowPower == 1)
  VAR_6 = 0x22;
 else
  VAR_6 = VAR_4;


 if(VAR_5->bIgnoreDiffRateTxPowerOffset)
  VAR_6 = VAR_4;

 if(VAR_6 > VAR_0)
  VAR_6 = VAR_0;


 FUNC_1(VAR_3, VAR_2, VAR_1, VAR_6);

}
