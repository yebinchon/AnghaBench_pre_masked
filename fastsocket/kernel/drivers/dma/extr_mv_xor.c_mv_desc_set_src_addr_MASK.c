
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_xor_desc_slot {scalar_t__ type; struct mv_xor_desc* hw_desc; } ;
struct mv_xor_desc {int desc_command; int * phy_src_addr; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mv_xor_desc_slot *VAR_1,
     int VAR_2, dma_addr_t VAR_3)
{
 struct mv_xor_desc *VAR_4 = VAR_1->hw_desc;
 VAR_4->phy_src_addr[VAR_2] = VAR_3;
 if (VAR_1->type == VAR_0)
  VAR_4->desc_command |= (1 << VAR_2);
}
