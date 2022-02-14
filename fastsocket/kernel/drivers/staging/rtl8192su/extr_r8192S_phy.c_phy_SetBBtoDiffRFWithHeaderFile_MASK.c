
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {scalar_t__ rf_type; } ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int* VAR_8 ;
 int* VAR_9 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int,int,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static RT_STATUS
FUNC_5(struct net_device* VAR_10, u8 VAR_11)
{
 int VAR_12;
 struct r8192_priv *VAR_13 = FUNC_1(VAR_10);
 u32* VAR_14;
 u16 VAR_15;



 if(VAR_13->rf_type == VAR_4)
 {
  VAR_14 = VAR_8;
  VAR_15 = VAR_2;
 }
 else if(VAR_13->rf_type == VAR_5)
 {
  VAR_14 = VAR_9;
  VAR_15 = VAR_3;
 }





 else
 {
  return VAR_6;
 }

 if(VAR_11 == VAR_0)
 {
  for(VAR_12=0;VAR_12<VAR_15;VAR_12=VAR_12+3)
  {
   if (VAR_14[VAR_12] == 0xfe)
    FUNC_2(50);
   else if (VAR_14[VAR_12] == 0xfd)
    FUNC_2(5);
   else if (VAR_14[VAR_12] == 0xfc)
    FUNC_2(1);
   else if (VAR_14[VAR_12] == 0xfb)
    FUNC_4(50);
   else if (VAR_14[VAR_12] == 0xfa)
    FUNC_4(5);
   else if (VAR_14[VAR_12] == 0xf9)
    FUNC_4(1);
   FUNC_3(VAR_10, VAR_14[VAR_12], VAR_14[VAR_12+1], VAR_14[VAR_12+2]);



  }
 }
 else {
  FUNC_0(VAR_1, "phy_SetBBtoDiffRFWithHeaderFile(): ConfigType != BaseBand_Config_PHY_REG\n");
 }

 return VAR_7;
}
