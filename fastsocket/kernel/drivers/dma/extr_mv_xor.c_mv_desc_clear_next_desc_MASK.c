
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_desc_slot {struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {scalar_t__ phy_next_desc; } ;



__attribute__((used)) static void FUNC_0(struct mv_xor_desc_slot *VAR_0)
{
 struct mv_xor_desc *VAR_1 = VAR_0->hw_desc;
 VAR_1->phy_next_desc = 0;
}
