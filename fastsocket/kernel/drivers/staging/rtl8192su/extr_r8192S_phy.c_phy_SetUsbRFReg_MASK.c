
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

void FUNC_7(struct net_device* VAR_3,RF90_RADIO_PATH_E VAR_4,u32 VAR_5,u32 VAR_6)
{

 struct r8192_priv *VAR_7 = FUNC_2(VAR_3);
 u8 VAR_8 = 50;
 u8 VAR_9 = 0;







 while(VAR_7->bChangeRFInProgress)
 {


  FUNC_1(&VAR_7->rf_sem);

  VAR_9 ++;
  FUNC_0(VAR_0, "phy_SetUsbRFReg(): Wait 1 ms (%d times)...\n", VAR_9);
  FUNC_3(1);

  if((VAR_9 > 100))
  {
   FUNC_0(VAR_0, "phy_SetUsbRFReg(): (%d) Wait too logn to query BB!!\n", VAR_9);
   return;
  }
  else
  {

  }
 }

 VAR_7->bChangeRFInProgress = 1;



 VAR_5 &= 0x3f;

 FUNC_6(VAR_3, VAR_2, VAR_6);
 FUNC_6(VAR_3, VAR_1, 0xF0000003|
     (VAR_5<<8)|
     (VAR_4<<16));

 do
 {
  if(FUNC_4(VAR_3, VAR_1) == 0)
    break;
 }while( --VAR_8 );

 if(VAR_8 == 0)
 {
  FUNC_0(VAR_0, "phy_SetUsbRFReg(): Set RegAddr(%#x) = %#x Fail!!!\n", VAR_5, VAR_6);
 }



 FUNC_5(&VAR_7->rf_sem);
 VAR_7->bChangeRFInProgress = 0;

}
