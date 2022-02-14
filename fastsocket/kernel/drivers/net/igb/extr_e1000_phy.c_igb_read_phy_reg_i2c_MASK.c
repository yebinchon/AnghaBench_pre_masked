
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_phy_info {scalar_t__ addr; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

s32 FUNC_4(struct e1000_hw *VAR_8, u32 VAR_9, u16 *VAR_10)
{
 struct e1000_phy_info *VAR_11 = &VAR_8->phy;
 u32 VAR_12, VAR_13 = 0;





 VAR_13 = ((VAR_9 << VAR_7) |
    (VAR_11->addr << VAR_4) |
    (VAR_3));

 FUNC_3(VAR_1, VAR_13);


 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  FUNC_2(50);
  VAR_13 = FUNC_1(VAR_1);
  if (VAR_13 & VAR_6)
   break;
 }
 if (!(VAR_13 & VAR_6)) {
  FUNC_0("I2CCMD Read did not complete\n");
  return -VAR_0;
 }
 if (VAR_13 & VAR_2) {
  FUNC_0("I2CCMD Error bit set\n");
  return -VAR_0;
 }


 *VAR_10 = ((VAR_13 >> 8) & 0x00FF) | ((VAR_13 << 8) & 0xFF00);

 return 0;
}
