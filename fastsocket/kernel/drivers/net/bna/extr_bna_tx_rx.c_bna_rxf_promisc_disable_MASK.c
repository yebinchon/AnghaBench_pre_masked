
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_rxf {int rxmode_active; int rxmode_pending_bitmask; int rxmode_pending; TYPE_1__* rx; } ;
struct bna {int promisc_rid; } ;
struct TYPE_2__ {struct bna* bna; } ;


 int BFI_INVALID_RID ;
 int BNA_RXMODE_PROMISC ;
 scalar_t__ is_promisc_disable (int ,int ) ;
 scalar_t__ is_promisc_enable (int ,int ) ;
 int promisc_disable (int ,int ) ;
 int promisc_inactive (int ,int ) ;

__attribute__((used)) static int
bna_rxf_promisc_disable(struct bna_rxf *rxf)
{
 struct bna *bna = rxf->rx->bna;
 int ret = 0;

 if (is_promisc_disable(rxf->rxmode_pending,
    rxf->rxmode_pending_bitmask) ||
  (!(rxf->rxmode_active & BNA_RXMODE_PROMISC))) {

 } else if (is_promisc_enable(rxf->rxmode_pending,
     rxf->rxmode_pending_bitmask)) {

  promisc_inactive(rxf->rxmode_pending,
    rxf->rxmode_pending_bitmask);
  bna->promisc_rid = BFI_INVALID_RID;
 } else if (rxf->rxmode_active & BNA_RXMODE_PROMISC) {

  promisc_disable(rxf->rxmode_pending,
    rxf->rxmode_pending_bitmask);
  ret = 1;
 }

 return ret;
}
