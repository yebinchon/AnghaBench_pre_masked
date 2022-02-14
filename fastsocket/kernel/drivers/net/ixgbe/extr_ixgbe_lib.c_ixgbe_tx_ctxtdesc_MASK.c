
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ixgbe_ring {scalar_t__ next_to_use; scalar_t__ count; } ;
struct ixgbe_adv_tx_context_desc {void* mss_l4len_idx; void* type_tucmd_mlhl; void* seqnum_seed; void* vlan_macip_lens; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ixgbe_adv_tx_context_desc* FUNC_0 (struct ixgbe_ring*,scalar_t__) ;
 void* FUNC_1 (int) ;

void FUNC_2(struct ixgbe_ring *VAR_2, u32 VAR_3,
         u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct ixgbe_adv_tx_context_desc *VAR_7;
 u16 VAR_8 = VAR_2->next_to_use;

 VAR_7 = FUNC_0(VAR_2, VAR_8);

 VAR_8++;
 VAR_2->next_to_use = (VAR_8 < VAR_2->count) ? VAR_8 : 0;


 VAR_5 |= VAR_1 | VAR_0;

 VAR_7->vlan_macip_lens = FUNC_1(VAR_3);
 VAR_7->seqnum_seed = FUNC_1(VAR_4);
 VAR_7->type_tucmd_mlhl = FUNC_1(VAR_5);
 VAR_7->mss_l4len_idx = FUNC_1(VAR_6);
}
