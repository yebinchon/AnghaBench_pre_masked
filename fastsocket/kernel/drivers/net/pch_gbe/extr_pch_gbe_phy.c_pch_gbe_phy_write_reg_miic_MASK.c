
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct pch_gbe_phy_info {int addr; } ;
struct pch_gbe_hw {struct pch_gbe_phy_info phy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pch_gbe_hw*,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (char*,scalar_t__) ;

s32 FUNC_2(struct pch_gbe_hw *VAR_3, u32 VAR_4, u16 VAR_5)
{
 struct pch_gbe_phy_info *VAR_6 = &VAR_3->phy;

 if (VAR_4 > VAR_2) {
  FUNC_1("PHY Address %d is out of range\n", VAR_4);
  return -VAR_0;
 }
 FUNC_0(VAR_3, VAR_6->addr, VAR_1,
     VAR_4, VAR_5);
 return 0;
}
