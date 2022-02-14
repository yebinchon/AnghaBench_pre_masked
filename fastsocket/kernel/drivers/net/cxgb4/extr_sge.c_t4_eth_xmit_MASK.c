
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ulptx_sgl {int dummy; } ;
struct skb_shared_info {int gso_size; int gso_type; scalar_t__ gso_segs; } ;
struct sk_buff {int len; scalar_t__ ip_summed; } ;
struct TYPE_14__ {size_t pidx; int size; TYPE_1__* sdesc; int * desc; } ;
struct sge_eth_txq {TYPE_4__ q; int vlan_ins; scalar_t__ tx_cso; int tso; int mapping_err; } ;
struct port_info {int first_qset; int tx_chan; struct adapter* adapter; } ;
struct net_device {int name; } ;
struct fw_eth_tx_pkt_wr {void* op_immdlen; void* r3; void* equiq_to_len16; } ;
struct TYPE_13__ {void* len; void* seqno_offset; void* mss; void* ipid_ofst; void* lso_ctrl; } ;
struct cpl_tx_pkt_lso {TYPE_3__ c; } ;
struct cpl_tx_pkt_core {void* ctrl1; void* len; void* pack; void* ctrl0; } ;
struct TYPE_12__ {struct sge_eth_txq* ethtxq; } ;
struct adapter {int fn; int pdev_dev; TYPE_2__ sge; } ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_15__ {int doff; } ;
struct TYPE_11__ {struct ulptx_sgl* sgl; struct sk_buff* skb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int VAR_14 ;
 int FUNC_12 (int) ;
 int VAR_15 ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned int FUNC_16 (struct sk_buff*) ;
 void* FUNC_17 (int) ;
 int FUNC_18 (int ,char*,int ,int) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sge_eth_txq*) ;
 unsigned int FUNC_21 (unsigned int) ;
 void* FUNC_22 (int) ;
 void* FUNC_23 (int) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,TYPE_4__*,struct cpl_tx_pkt_core*) ;
 scalar_t__ FUNC_26 (struct sk_buff*) ;
 scalar_t__ FUNC_27 (int ,struct sk_buff*,int *) ;
 struct port_info* FUNC_28 (struct net_device*) ;
 int FUNC_29 (struct adapter*,TYPE_4__*,int) ;
 int FUNC_30 (struct adapter*,TYPE_4__*,unsigned int) ;
 int FUNC_31 (struct sk_buff*) ;
 int FUNC_32 (struct sk_buff*) ;
 int FUNC_33 (struct sk_buff*) ;
 int FUNC_34 (struct sk_buff*) ;
 struct skb_shared_info* FUNC_35 (struct sk_buff*) ;
 TYPE_7__* FUNC_36 (struct sk_buff*) ;
 int FUNC_37 (TYPE_4__*,unsigned int) ;
 unsigned int FUNC_38 (TYPE_4__*) ;
 scalar_t__ FUNC_39 (int) ;
 int FUNC_40 (struct sk_buff*) ;
 scalar_t__ FUNC_41 (struct sk_buff*) ;
 int FUNC_42 (struct sk_buff*,TYPE_4__*,struct ulptx_sgl*,int*,int ,int *) ;

netdev_tx_t FUNC_43(struct sk_buff *VAR_19, struct net_device *VAR_20)
{
 u32 VAR_21;
 u64 VAR_22, *VAR_23;
 int VAR_24, VAR_25;
 unsigned int VAR_26, VAR_27;
 struct adapter *VAR_28;
 struct sge_eth_txq *VAR_29;
 const struct port_info *VAR_30;
 struct fw_eth_tx_pkt_wr *VAR_31;
 struct cpl_tx_pkt_core *VAR_32;
 const struct skb_shared_info *VAR_33;
 dma_addr_t VAR_34[VAR_10 + 1];





 if (FUNC_39(VAR_19->len < VAR_4)) {
out_free: FUNC_19(VAR_19);
  return VAR_12;
 }

 VAR_30 = FUNC_28(VAR_20);
 VAR_28 = VAR_30->adapter;
 VAR_24 = FUNC_31(VAR_19);
 VAR_29 = &VAR_28->sge.ethtxq[VAR_24 + VAR_30->first_qset];

 FUNC_29(VAR_28, &VAR_29->q, 1);

 VAR_26 = FUNC_16(VAR_19);
 VAR_27 = FUNC_21(VAR_26);
 VAR_25 = FUNC_38(&VAR_29->q) - VAR_27;

 if (FUNC_39(VAR_25 < 0)) {
  FUNC_20(VAR_29);
  FUNC_18(VAR_28->pdev_dev,
   "%s: Tx ring %u full while queue awake!\n",
   VAR_20->name, VAR_24);
  return VAR_11;
 }

 if (!FUNC_26(VAR_19) &&
     FUNC_39(FUNC_27(VAR_28->pdev_dev, VAR_19, VAR_34) < 0)) {
  VAR_29->mapping_err++;
  goto out_free;
 }

 VAR_21 = FUNC_2(FUNC_0(VAR_26, 2));
 if (FUNC_39(VAR_25 < VAR_3)) {
  FUNC_20(VAR_29);
  VAR_21 |= VAR_6 | VAR_7;
 }

 VAR_31 = (void *)&VAR_29->q.desc[VAR_29->q.pidx];
 VAR_31->equiq_to_len16 = FUNC_22(VAR_21);
 VAR_31->r3 = FUNC_17(0);
 VAR_23 = (u64 *)VAR_31 + VAR_26;

 VAR_33 = FUNC_35(VAR_19);
 if (VAR_33->gso_size) {
  struct cpl_tx_pkt_lso *VAR_35 = (void *)VAR_31;
  bool VAR_36 = (VAR_33->gso_type & VAR_13) != 0;
  int VAR_37 = FUNC_32(VAR_19);
  int VAR_38 = FUNC_33(VAR_19) - VAR_4;

  VAR_31->op_immdlen = FUNC_22(FUNC_3(VAR_5) |
           FUNC_1(sizeof(*VAR_35)));
  VAR_35->c.lso_ctrl = FUNC_22(FUNC_7(VAR_1) |
     VAR_8 | VAR_9 |
     FUNC_6(VAR_36) |
     FUNC_4(VAR_38 / 4) |
     FUNC_5(VAR_37 / 4) |
     FUNC_8(FUNC_36(VAR_19)->doff));
  VAR_35->c.ipid_ofst = FUNC_23(0);
  VAR_35->c.mss = FUNC_23(VAR_33->gso_size);
  VAR_35->c.seqno_offset = FUNC_22(0);
  VAR_35->c.len = FUNC_22(VAR_19->len);
  VAR_32 = (void *)(VAR_35 + 1);
  VAR_22 = FUNC_9(VAR_36 ? VAR_18 : VAR_17) |
   FUNC_12(VAR_37) |
   FUNC_10(VAR_38);
  VAR_29->tso++;
  VAR_29->tx_cso += VAR_33->gso_segs;
 } else {
  int VAR_39;

  VAR_39 = FUNC_26(VAR_19) ? VAR_19->len + sizeof(*VAR_32) : sizeof(*VAR_32);
  VAR_31->op_immdlen = FUNC_22(FUNC_3(VAR_5) |
           FUNC_1(VAR_39));
  VAR_32 = (void *)(VAR_31 + 1);
  if (VAR_19->ip_summed == VAR_0) {
   VAR_22 = FUNC_24(VAR_19) | VAR_14;
   VAR_29->tx_cso++;
  } else
   VAR_22 = VAR_15 | VAR_14;
 }

 if (FUNC_41(VAR_19)) {
  VAR_29->vlan_ins++;
  VAR_22 |= VAR_16 | FUNC_15(FUNC_40(VAR_19));
 }

 VAR_32->ctrl0 = FUNC_22(FUNC_13(VAR_2) |
      FUNC_11(VAR_30->tx_chan) | FUNC_14(VAR_28->fn));
 VAR_32->pack = FUNC_23(0);
 VAR_32->len = FUNC_23(VAR_19->len);
 VAR_32->ctrl1 = FUNC_17(VAR_22);

 if (FUNC_26(VAR_19)) {
  FUNC_25(VAR_19, &VAR_29->q, VAR_32 + 1);
  FUNC_19(VAR_19);
 } else {
  int VAR_40;

  FUNC_42(VAR_19, &VAR_29->q, (struct ulptx_sgl *)(VAR_32 + 1), VAR_23, 0,
     VAR_34);
  FUNC_34(VAR_19);

  VAR_40 = VAR_29->q.pidx + VAR_27 - 1;
  if (VAR_40 >= VAR_29->q.size)
   VAR_40 -= VAR_29->q.size;
  VAR_29->q.sdesc[VAR_40].skb = VAR_19;
  VAR_29->q.sdesc[VAR_40].sgl = (struct ulptx_sgl *)(VAR_32 + 1);
 }

 FUNC_37(&VAR_29->q, VAR_27);

 FUNC_30(VAR_28, &VAR_29->q, VAR_27);
 return VAR_12;
}
