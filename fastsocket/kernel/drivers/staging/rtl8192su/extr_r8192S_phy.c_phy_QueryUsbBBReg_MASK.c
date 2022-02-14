
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int bChangeBBInProgress; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,...) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,int) ;

u32 FUNC_5(struct net_device* VAR_4, u32 VAR_5)
{
 struct r8192_priv *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7 = 0xffffffff;
 u8 VAR_8 = 50;
 u8 VAR_9 = 0;







 while(VAR_6->bChangeBBInProgress)
 {
  VAR_9 ++;
  FUNC_0(VAR_0, "phy_QueryUsbBBReg(): Wait 1 ms (%d times)...\n", VAR_9);
  FUNC_2(1);


  if((VAR_9 > 100) )
  {
   FUNC_0(VAR_0, "phy_QueryUsbBBReg(): (%d) Wait too logn to query BB!!\n", VAR_9);
   return VAR_7;
  }
 }

 VAR_6->bChangeBBInProgress = 1;

 FUNC_4(VAR_4, VAR_5);

 do
 {
  if((FUNC_3(VAR_4, VAR_2)&VAR_1) == 0)
   break;
 }while( --VAR_8 );

 if(VAR_8 == 0)
 {
  FUNC_0(VAR_0, "Fail!!!phy_QueryUsbBBReg(): RegAddr(%#x) = %#x\n", VAR_5, VAR_7);
 }
 else
 {

  VAR_7 = FUNC_4(VAR_4, VAR_3);
  FUNC_0(VAR_0, "phy_QueryUsbBBReg(): RegAddr(%#x) = %#x, PollingCnt(%d)\n", VAR_5, VAR_7, VAR_8);
 }

 VAR_6->bChangeBBInProgress = 0;

 return VAR_7;
}
