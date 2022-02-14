
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int bChangeRFInProgress; int rf_sem; } ;
struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net_device*,int ,int) ;

u32 FUNC_7( struct net_device* VAR_3, RF90_RADIO_PATH_E VAR_4, u32 VAR_5)
{

 struct r8192_priv *VAR_6 = FUNC_2(VAR_3);

 u32 VAR_7 = 0;

 u8 VAR_8 = 50;
 u8 VAR_9 = 0;







 while(VAR_6->bChangeRFInProgress)
 {


  FUNC_1(&VAR_6->rf_sem);

  VAR_9 ++;
  FUNC_0(VAR_0, "phy_QueryUsbRFReg(): Wait 1 ms (%d times)...\n", VAR_9);
  FUNC_3(1);

  if((VAR_9 > 100))
  {
   FUNC_0(VAR_0, "phy_QueryUsbRFReg(): (%d) Wait too logn to query BB!!\n", VAR_9);
   return 0xffffffff;
  }
  else
  {

  }
 }

 VAR_6->bChangeRFInProgress = 1;



 VAR_5 &= 0x3f;

 FUNC_6(VAR_3, VAR_1, 0xF0000002|
      (VAR_5<<8)|
      (VAR_4<<16));

 do
 {
  if(FUNC_4(VAR_3, VAR_1) == 0)
   break;
 }while( --VAR_8 );


 VAR_7 = FUNC_4(VAR_3, VAR_2);



 FUNC_5(&VAR_6->rf_sem);
 VAR_6->bChangeRFInProgress = 0;

 FUNC_0(VAR_0, "phy_QueryUsbRFReg(): eRFPath(%d), Offset(%#x) = %#x\n", VAR_4, VAR_5, VAR_7);

 return VAR_7;

}
