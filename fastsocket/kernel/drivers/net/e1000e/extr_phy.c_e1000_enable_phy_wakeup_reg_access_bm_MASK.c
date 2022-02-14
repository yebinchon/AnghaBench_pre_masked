
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int addr; } ;
struct e1000_hw {TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (char*,...) ;

s32 FUNC_4(struct e1000_hw *VAR_7, u16 *VAR_8)
{
 s32 VAR_9;
 u16 VAR_10;


 VAR_7->phy.addr = 1;


 VAR_9 = FUNC_0(VAR_7, (VAR_0 << VAR_6));
 if (VAR_9) {
  FUNC_3("Could not set Port Control page\n");
  return VAR_9;
 }

 VAR_9 = FUNC_1(VAR_7, VAR_2, VAR_8);
 if (VAR_9) {
  FUNC_3("Could not read PHY register %d.%d\n",
        VAR_0, VAR_2);
  return VAR_9;
 }




 VAR_10 = *VAR_8;
 VAR_10 |= VAR_1;
 VAR_10 &= ~(VAR_4 | VAR_3);

 VAR_9 = FUNC_2(VAR_7, VAR_2, VAR_10);
 if (VAR_9) {
  FUNC_3("Could not write PHY register %d.%d\n",
        VAR_0, VAR_2);
  return VAR_9;
 }




 return FUNC_0(VAR_7, (VAR_5 << VAR_6));
}
