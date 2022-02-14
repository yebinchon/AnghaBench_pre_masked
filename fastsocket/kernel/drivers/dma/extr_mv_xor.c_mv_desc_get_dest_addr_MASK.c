
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mv_xor_desc_slot {struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {int phy_dest_addr; } ;



__attribute__((used)) static u32 FUNC_0(struct mv_xor_desc_slot *VAR_0)
{
 struct mv_xor_desc *VAR_1 = VAR_0->hw_desc;
 return VAR_1->phy_dest_addr;
}
