
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
typedef int u16 ;
struct pch_gbe_phy_info {int id; void* revision; } ;
struct pch_gbe_hw {struct pch_gbe_phy_info phy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pch_gbe_hw*,int ,int*) ;
 int FUNC_1 (char*,int,void*) ;

s32 FUNC_2(struct pch_gbe_hw *VAR_2)
{
 struct pch_gbe_phy_info *VAR_3 = &VAR_2->phy;
 s32 VAR_4;
 u16 VAR_5;
 u16 VAR_6;

 VAR_4 = FUNC_0(VAR_2, VAR_0, &VAR_5);
 if (VAR_4)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_2, VAR_1, &VAR_6);
 if (VAR_4)
  return VAR_4;




 VAR_3->id = (u32)VAR_5;
 VAR_3->id = ((VAR_3->id << 6) | ((VAR_6 & 0xFC00) >> 10));
 VAR_3->revision = (u32) (VAR_6 & 0x000F);
 FUNC_1("phy->id : 0x%08x  phy->revision : 0x%08x\n",
   VAR_3->id, VAR_3->revision);
 return 0;
}
