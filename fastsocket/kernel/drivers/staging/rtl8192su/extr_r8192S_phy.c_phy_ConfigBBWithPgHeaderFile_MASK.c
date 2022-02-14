
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int* VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static RT_STATUS
FUNC_4(struct net_device* VAR_5,u8 VAR_6)
{
 int VAR_7;

 u32* VAR_8;
 u16 VAR_9;




 VAR_9 = VAR_2;
 VAR_8 = VAR_4;

 if(VAR_6 == VAR_0)
 {
  for(VAR_7=0;VAR_7<VAR_9;VAR_7=VAR_7+3)
  {
   if (VAR_8[VAR_7] == 0xfe)
    FUNC_1(50);
   else if (VAR_8[VAR_7] == 0xfd)
    FUNC_1(5);
   else if (VAR_8[VAR_7] == 0xfc)
    FUNC_1(1);
   else if (VAR_8[VAR_7] == 0xfb)
    FUNC_3(50);
   else if (VAR_8[VAR_7] == 0xfa)
    FUNC_3(5);
   else if (VAR_8[VAR_7] == 0xf9)
    FUNC_3(1);
   FUNC_2(VAR_5, VAR_8[VAR_7], VAR_8[VAR_7+1], VAR_8[VAR_7+2]);


  }
 }else{
  FUNC_0(VAR_1, "phy_ConfigBBWithPgHeaderFile(): ConfigType != BaseBand_Config_PHY_REG\n");
 }
 return VAR_3;

}
