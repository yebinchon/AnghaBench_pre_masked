
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vlan_group {int dummy; } ;
struct skb_frag_struct {int page_offset; } ;
struct sk_buff {int len; int data_len; int truesize; int ip_summed; } ;
struct sge_qset {int nomem; int napi; struct cpl_rx_pkt* lro_va; int * port_stats; int netdev; } ;
struct TYPE_5__ {scalar_t__ page; } ;
struct sge_fl {size_t cidx; int alloc_size; TYPE_1__ pg_chunk; scalar_t__ buf_size; int credits; struct rx_sw_desc* sdesc; } ;
struct TYPE_6__ {scalar_t__ page; int offset; struct cpl_rx_pkt* va; int mapping; int * p_cnt; } ;
struct rx_sw_desc {TYPE_2__ pg_chunk; } ;
struct port_info {int rx_offload; size_t first_qset; struct vlan_group* vlan_grp; } ;
struct cpl_rx_pkt {scalar_t__ csum; int vlan; int vlan_valid; scalar_t__ csum_valid; } ;
struct TYPE_7__ {struct sge_qset* qs; } ;
struct adapter {TYPE_3__ sge; int pdev; } ;
struct TYPE_8__ {int nr_frags; struct skb_frag_struct* frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct skb_frag_struct*,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct port_info* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,scalar_t__,int ) ;
 int FUNC_8 (struct rx_sw_desc*,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct skb_frag_struct*,int) ;
 int FUNC_12 (struct sk_buff*,int) ;
 TYPE_4__* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *,struct vlan_group*,int ) ;

__attribute__((used)) static void FUNC_16(struct adapter *VAR_7, struct sge_qset *VAR_8,
    struct sge_fl *VAR_9, int VAR_10, int VAR_11)
{
 struct rx_sw_desc *VAR_12 = &VAR_9->sdesc[VAR_9->cidx];
 struct port_info *VAR_13 = FUNC_5(VAR_8->netdev);
 struct sk_buff *VAR_14 = ((void*)0);
 struct cpl_rx_pkt *VAR_15;
 struct skb_frag_struct *VAR_16;
 int VAR_17;
 int VAR_18 = 0;

 if (!VAR_8->nomem) {
  VAR_14 = FUNC_3(&VAR_8->napi);
  VAR_8->nomem = !VAR_14;
 }

 VAR_9->credits--;

 FUNC_7(VAR_7->pdev,
        FUNC_8(VAR_12, VAR_6),
        VAR_9->buf_size - VAR_3,
        VAR_2);

 (*VAR_12->pg_chunk.p_cnt)--;
 if (!*VAR_12->pg_chunk.p_cnt && VAR_12->pg_chunk.page != VAR_9->pg_chunk.page)
  FUNC_9(VAR_7->pdev,
          VAR_12->pg_chunk.mapping,
          VAR_9->alloc_size,
          VAR_2);

 if (!VAR_14) {
  FUNC_10(VAR_12->pg_chunk.page);
  if (VAR_11)
   VAR_8->nomem = 0;
  return;
 }

 VAR_16 = FUNC_13(VAR_14)->frags;
 VAR_17 = FUNC_13(VAR_14)->nr_frags;

 if (!VAR_17) {
  VAR_18 = 2 + sizeof(struct cpl_rx_pkt);
  VAR_15 = VAR_8->lro_va = VAR_12->pg_chunk.va + 2;

  if ((VAR_13->rx_offload & VAR_5) &&
       VAR_15->csum_valid && VAR_15->csum == FUNC_1(0xffff)) {
   VAR_14->ip_summed = VAR_1;
   VAR_8->port_stats[VAR_4]++;
  } else
   VAR_14->ip_summed = VAR_0;
 } else
  VAR_15 = VAR_8->lro_va;

 VAR_10 -= VAR_18;

 VAR_16 += VAR_17;
 FUNC_0(VAR_16, VAR_12->pg_chunk.page);
 VAR_16->page_offset = VAR_12->pg_chunk.offset + VAR_18;
 FUNC_11(VAR_16, VAR_10);

 VAR_14->len += VAR_10;
 VAR_14->data_len += VAR_10;
 VAR_14->truesize += VAR_10;
 FUNC_13(VAR_14)->nr_frags++;

 if (!VAR_11)
  return;

 FUNC_12(VAR_14, VAR_8 - &VAR_7->sge.qs[VAR_13->first_qset]);

 if (FUNC_14(VAR_15->vlan_valid)) {
  struct vlan_group *VAR_19 = VAR_13->vlan_grp;

  if (FUNC_2(VAR_19 != ((void*)0))) {
   FUNC_15(&VAR_8->napi, VAR_19, FUNC_6(VAR_15->vlan));
   return;
  }
 }
 FUNC_4(&VAR_8->napi);
}
