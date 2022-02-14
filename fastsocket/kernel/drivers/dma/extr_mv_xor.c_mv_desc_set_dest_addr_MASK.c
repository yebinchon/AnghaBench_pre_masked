
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_desc_slot {struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {int phy_dest_addr; } ;
typedef int dma_addr_t ;



__attribute__((used)) static void FUNC_0(struct mv_xor_desc_slot *VAR_0,
      dma_addr_t VAR_1)
{
 struct mv_xor_desc *VAR_2 = VAR_0->hw_desc;
 VAR_2->phy_dest_addr = VAR_1;
}
