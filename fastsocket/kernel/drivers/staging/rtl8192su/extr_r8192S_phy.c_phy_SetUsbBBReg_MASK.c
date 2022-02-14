
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int bChangeBBInProgress; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int ,int ) ;

void
FUNC_4(struct net_device* VAR_1,u32 VAR_2,u32 VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_1(VAR_1);
 u8 VAR_5 = 0;

 FUNC_0(VAR_0, "phy_SetUsbBBReg(): RegAddr(%#x) <= %#x\n", VAR_2, VAR_3);






 while(VAR_4->bChangeBBInProgress)
 {
  VAR_5 ++;
  FUNC_0(VAR_0, "phy_SetUsbBBReg(): Wait 1 ms (%d times)...\n", VAR_5);
  FUNC_2(1);

  if((VAR_5 > 100))
  {
   FUNC_0(VAR_0, "phy_SetUsbBBReg(): (%d) Wait too logn to query BB!!\n", VAR_5);
   return;
  }
 }

 VAR_4->bChangeBBInProgress = 1;

 FUNC_3(VAR_1, VAR_2, VAR_3);

 VAR_4->bChangeBBInProgress = 0;
}
