
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_19__ ;
typedef struct TYPE_29__ TYPE_18__ ;
typedef struct TYPE_28__ TYPE_17__ ;
typedef struct TYPE_27__ TYPE_16__ ;
typedef struct TYPE_26__ TYPE_15__ ;
typedef struct TYPE_25__ TYPE_14__ ;
typedef struct TYPE_24__ TYPE_13__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct list_head {int dummy; } ;
struct bna_rxq {scalar_t__ buffer_size; int qpt; } ;
struct TYPE_38__ {int msb; int lsb; } ;
struct TYPE_24__ {scalar_t__ intr_type; scalar_t__ interpkt_count; scalar_t__ interpkt_timeo; scalar_t__ coalescing_timeo; scalar_t__ intr_vector; TYPE_8__ ib_seg_host_addr; } ;
struct TYPE_25__ {TYPE_13__ ib; int qpt; } ;
struct bna_rxp {int type; TYPE_14__ cq; } ;
struct TYPE_29__ {int vlan_strip_status; } ;
struct TYPE_27__ {int forced_offset; int hdr_type; } ;
struct TYPE_30__ {void* num_entries; } ;
struct TYPE_26__ {int max_header_size; int force_offset; int type; } ;
struct TYPE_28__ {int strip_vlan; int rxq_type; TYPE_15__ hds; } ;
struct TYPE_23__ {scalar_t__ inter_pkt_count; void* inter_pkt_timeout; void* coalescing_timeout; void* msix; void* continuous_coalescing; void* int_pkt_enabled; void* int_enabled; void* int_pkt_dma; } ;
struct bfi_enet_rx_cfg_req {int num_queue_sets; TYPE_19__ mh; TYPE_17__ rx_cfg; TYPE_12__ ib_cfg; TYPE_11__* q_cfg; } ;
struct TYPE_31__ {struct bfi_enet_rx_cfg_req cfg_req; } ;
struct bna_rx {int num_paths; int msgq_cmd; TYPE_3__* bna; TYPE_18__ rxf; TYPE_16__ hds_cfg; int rxp_q; int rid; TYPE_1__ bfi_enet_cmd; } ;
struct TYPE_39__ {void* msix_index; } ;
struct TYPE_36__ {int addr_hi; int addr_lo; } ;
struct TYPE_37__ {TYPE_6__ a32; } ;
struct TYPE_35__ {int q; } ;
struct TYPE_34__ {void* rx_buffer_size; int q; } ;
struct TYPE_33__ {int msgq; int enet; } ;
struct TYPE_32__ {void* rx_buffer_size; int q; } ;
struct TYPE_21__ {TYPE_9__ intr; TYPE_7__ index_addr; } ;
struct TYPE_22__ {TYPE_10__ ib; TYPE_5__ cq; TYPE_4__ ql; TYPE_2__ qs; } ;


 int BFI_ENET_H2I_RX_CFG_SET_REQ ;
 int BFI_ENET_RXQ_HDS ;
 int BFI_ENET_RXQ_LARGE_SMALL ;
 int BFI_ENET_RXQ_SINGLE ;
 int BFI_MC_ENET ;
 scalar_t__ BNA_INTR_T_MSIX ;



 void* BNA_STATUS_T_DISABLED ;
 void* BNA_STATUS_T_ENABLED ;
 int BUG_ON (int) ;
 int GET_RXQS (struct bna_rxp*,struct bna_rxq*,struct bna_rxq*) ;
 int bfa_msgq_cmd_post (int *,int *) ;
 int bfa_msgq_cmd_set (int *,int *,int *,int,TYPE_19__*) ;
 struct list_head* bfa_q_first (int *) ;
 struct list_head* bfa_q_next (struct list_head*) ;
 int bfi_enet_datapath_q_init (int *,int *) ;
 int bfi_msgq_mhdr_set (TYPE_19__,int ,int ,int ,int ) ;
 int bfi_msgq_num_cmd_entries (int) ;
 scalar_t__ bna_enet_mtu_get (int *) ;
 void* htonl (int ) ;
 void* htons (int ) ;

__attribute__((used)) static void
bna_bfi_rx_enet_start(struct bna_rx *rx)
{
 struct bfi_enet_rx_cfg_req *cfg_req = &rx->bfi_enet_cmd.cfg_req;
 struct bna_rxp *rxp = ((void*)0);
 struct bna_rxq *q0 = ((void*)0), *q1 = ((void*)0);
 struct list_head *rxp_qe;
 int i;

 bfi_msgq_mhdr_set(cfg_req->mh, BFI_MC_ENET,
  BFI_ENET_H2I_RX_CFG_SET_REQ, 0, rx->rid);
 cfg_req->mh.num_entries = htons(
  bfi_msgq_num_cmd_entries(sizeof(struct bfi_enet_rx_cfg_req)));

 cfg_req->num_queue_sets = rx->num_paths;
 for (i = 0, rxp_qe = bfa_q_first(&rx->rxp_q);
  i < rx->num_paths;
  i++, rxp_qe = bfa_q_next(rxp_qe)) {
  rxp = (struct bna_rxp *)rxp_qe;

  GET_RXQS(rxp, q0, q1);
  switch (rxp->type) {
  case 128:
  case 130:

   bfi_enet_datapath_q_init(&cfg_req->q_cfg[i].qs.q,
      &q1->qpt);
   cfg_req->q_cfg[i].qs.rx_buffer_size =
    htons((u16)q1->buffer_size);


  case 129:

   bfi_enet_datapath_q_init(&cfg_req->q_cfg[i].ql.q,
      &q0->qpt);
   q0->buffer_size =
    bna_enet_mtu_get(&rx->bna->enet);
   cfg_req->q_cfg[i].ql.rx_buffer_size =
    htons((u16)q0->buffer_size);
   break;

  default:
   BUG_ON(1);
  }

  bfi_enet_datapath_q_init(&cfg_req->q_cfg[i].cq.q,
     &rxp->cq.qpt);

  cfg_req->q_cfg[i].ib.index_addr.a32.addr_lo =
   rxp->cq.ib.ib_seg_host_addr.lsb;
  cfg_req->q_cfg[i].ib.index_addr.a32.addr_hi =
   rxp->cq.ib.ib_seg_host_addr.msb;
  cfg_req->q_cfg[i].ib.intr.msix_index =
   htons((u16)rxp->cq.ib.intr_vector);
 }

 cfg_req->ib_cfg.int_pkt_dma = BNA_STATUS_T_DISABLED;
 cfg_req->ib_cfg.int_enabled = BNA_STATUS_T_ENABLED;
 cfg_req->ib_cfg.int_pkt_enabled = BNA_STATUS_T_DISABLED;
 cfg_req->ib_cfg.continuous_coalescing = BNA_STATUS_T_DISABLED;
 cfg_req->ib_cfg.msix = (rxp->cq.ib.intr_type == BNA_INTR_T_MSIX)
    ? BNA_STATUS_T_ENABLED :
    BNA_STATUS_T_DISABLED;
 cfg_req->ib_cfg.coalescing_timeout =
   htonl((u32)rxp->cq.ib.coalescing_timeo);
 cfg_req->ib_cfg.inter_pkt_timeout =
   htonl((u32)rxp->cq.ib.interpkt_timeo);
 cfg_req->ib_cfg.inter_pkt_count = (u8)rxp->cq.ib.interpkt_count;

 switch (rxp->type) {
 case 128:
  cfg_req->rx_cfg.rxq_type = BFI_ENET_RXQ_LARGE_SMALL;
  break;

 case 130:
  cfg_req->rx_cfg.rxq_type = BFI_ENET_RXQ_HDS;
  cfg_req->rx_cfg.hds.type = rx->hds_cfg.hdr_type;
  cfg_req->rx_cfg.hds.force_offset = rx->hds_cfg.forced_offset;
  cfg_req->rx_cfg.hds.max_header_size = rx->hds_cfg.forced_offset;
  break;

 case 129:
  cfg_req->rx_cfg.rxq_type = BFI_ENET_RXQ_SINGLE;
  break;

 default:
  BUG_ON(1);
 }
 cfg_req->rx_cfg.strip_vlan = rx->rxf.vlan_strip_status;

 bfa_msgq_cmd_set(&rx->msgq_cmd, ((void*)0), ((void*)0),
  sizeof(struct bfi_enet_rx_cfg_req), &cfg_req->mh);
 bfa_msgq_cmd_post(&rx->bna->msgq, &rx->msgq_cmd);
}
