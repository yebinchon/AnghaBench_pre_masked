
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rxf {int* vlan_filter_table; scalar_t__ vlan_filter_status; int vlan_pending_bitmask; } ;
struct bna_rx {struct bna_rxf rxf; } ;


 int BFI_VLAN_BLOCK_SHIFT ;
 int BFI_VLAN_WORD_MASK ;
 int BFI_VLAN_WORD_SHIFT ;
 scalar_t__ BNA_STATUS_T_ENABLED ;
 int RXF_E_CONFIG ;
 int bfa_fsm_send_event (struct bna_rxf*,int ) ;

void
bna_rx_vlan_del(struct bna_rx *rx, int vlan_id)
{
 struct bna_rxf *rxf = &rx->rxf;
 int index = (vlan_id >> BFI_VLAN_WORD_SHIFT);
 int bit = (1 << (vlan_id & BFI_VLAN_WORD_MASK));
 int group_id = (vlan_id >> BFI_VLAN_BLOCK_SHIFT);

 rxf->vlan_filter_table[index] &= ~bit;
 if (rxf->vlan_filter_status == BNA_STATUS_T_ENABLED) {
  rxf->vlan_pending_bitmask |= (1 << group_id);
  bfa_fsm_send_event(rxf, RXF_E_CONFIG);
 }
}
