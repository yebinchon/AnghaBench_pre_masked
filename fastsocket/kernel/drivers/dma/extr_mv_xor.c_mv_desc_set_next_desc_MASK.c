
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_desc_slot {struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {int phy_next_desc; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mv_xor_desc_slot *VAR_0,
      u32 VAR_1)
{
 struct mv_xor_desc *VAR_2 = VAR_0->hw_desc;
 FUNC_0(VAR_2->phy_next_desc);
 VAR_2->phy_next_desc = VAR_1;
}
