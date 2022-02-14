
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bna_rxf {int vlan_strip_pending; TYPE_2__* rx; scalar_t__ flags; scalar_t__ rss_pending; scalar_t__ rxmode_pending_bitmask; scalar_t__ rxmode_pending; int mcast_pending_add_q; struct bna_mac* ucast_pending_mac; int ucast_pending_add_q; scalar_t__ ucast_active_set; scalar_t__ ucast_pending_set; } ;
struct bna_mac {int qe; } ;
struct TYPE_4__ {scalar_t__ rid; TYPE_1__* bna; } ;
struct TYPE_3__ {scalar_t__ promisc_rid; scalar_t__ default_mode_rid; int mcam_mod; int ucam_mod; } ;


 void* BFI_INVALID_RID ;
 int bfa_q_deq (int *,struct bna_mac**) ;
 int bfa_q_qe_init (int *) ;
 int bna_mcam_mod_mac_put (int *,struct bna_mac*) ;
 int bna_ucam_mod_mac_put (int *,struct bna_mac*) ;
 int list_empty (int *) ;

__attribute__((used)) static void
bna_rxf_uninit(struct bna_rxf *rxf)
{
 struct bna_mac *mac;

 rxf->ucast_pending_set = 0;
 rxf->ucast_active_set = 0;

 while (!list_empty(&rxf->ucast_pending_add_q)) {
  bfa_q_deq(&rxf->ucast_pending_add_q, &mac);
  bfa_q_qe_init(&mac->qe);
  bna_ucam_mod_mac_put(&rxf->rx->bna->ucam_mod, mac);
 }

 if (rxf->ucast_pending_mac) {
  bfa_q_qe_init(&rxf->ucast_pending_mac->qe);
  bna_ucam_mod_mac_put(&rxf->rx->bna->ucam_mod,
   rxf->ucast_pending_mac);
  rxf->ucast_pending_mac = ((void*)0);
 }

 while (!list_empty(&rxf->mcast_pending_add_q)) {
  bfa_q_deq(&rxf->mcast_pending_add_q, &mac);
  bfa_q_qe_init(&mac->qe);
  bna_mcam_mod_mac_put(&rxf->rx->bna->mcam_mod, mac);
 }

 rxf->rxmode_pending = 0;
 rxf->rxmode_pending_bitmask = 0;
 if (rxf->rx->bna->promisc_rid == rxf->rx->rid)
  rxf->rx->bna->promisc_rid = BFI_INVALID_RID;
 if (rxf->rx->bna->default_mode_rid == rxf->rx->rid)
  rxf->rx->bna->default_mode_rid = BFI_INVALID_RID;

 rxf->rss_pending = 0;
 rxf->vlan_strip_pending = 0;

 rxf->flags = 0;

 rxf->rx = ((void*)0);
}
