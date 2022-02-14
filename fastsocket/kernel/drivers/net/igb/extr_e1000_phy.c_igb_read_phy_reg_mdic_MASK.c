
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct e1000_phy_info {int addr; } ;
struct e1000_hw {struct e1000_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

s32 FUNC_4(struct e1000_hw *VAR_10, u32 VAR_11, u16 *VAR_12)
{
 struct e1000_phy_info *VAR_13 = &VAR_10->phy;
 u32 VAR_14, VAR_15 = 0;
 s32 VAR_16 = 0;

 if (VAR_11 > VAR_9) {
  FUNC_0("PHY Address %d is out of range\n", VAR_11);
  VAR_16 = -VAR_0;
  goto out;
 }





 VAR_15 = ((VAR_11 << VAR_8) |
  (VAR_13->addr << VAR_6) |
  (VAR_5));

 FUNC_3(VAR_3, VAR_15);





 for (VAR_14 = 0; VAR_14 < (VAR_2 * 3); VAR_14++) {
  FUNC_2(50);
  VAR_15 = FUNC_1(VAR_3);
  if (VAR_15 & VAR_7)
   break;
 }
 if (!(VAR_15 & VAR_7)) {
  FUNC_0("MDI Read did not complete\n");
  VAR_16 = -VAR_1;
  goto out;
 }
 if (VAR_15 & VAR_4) {
  FUNC_0("MDI Error\n");
  VAR_16 = -VAR_1;
  goto out;
 }
 *VAR_12 = (u16) VAR_15;

out:
 return VAR_16;
}
