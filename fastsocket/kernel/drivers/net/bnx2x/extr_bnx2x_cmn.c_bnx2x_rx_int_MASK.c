
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int flags; } ;
struct eth_fast_path_rx_cqe {int type_error_flags; size_t queue_index; size_t placement_offset; int vlan_tag; TYPE_2__ pars_flags; int pkt_len_or_gro_seg_len; int rss_hash_result; int status_flags; } ;
struct TYPE_12__ {size_t queue_index; int pkt_len; } ;
union eth_rx_cqe {struct eth_fast_path_rx_cqe fast_path_cqe; TYPE_5__ end_agg_cqe; } ;
typedef int u8 ;
typedef size_t u16 ;
struct sw_rx_bd {int* data; } ;
struct sk_buff {int rxhash; int protocol; int mac_header; scalar_t__ data; } ;
struct ethhdr {scalar_t__ h_proto; } ;
struct bnx2x_fastpath {size_t rx_bd_cons; size_t rx_bd_prod; size_t rx_comp_cons; size_t rx_comp_prod; scalar_t__ mode; int rx_pkt; int rx_calls; int rx_sge_prod; union eth_rx_cqe* rx_comp_ring; int napi; int rx_queue; int rx_buf_size; struct bnx2x_agg_info* tpa_info; scalar_t__ disable_tpa; struct sw_rx_bd* rx_buf_ring; int index; struct bnx2x* bp; } ;
struct bnx2x_agg_info {size_t len_on_bd; size_t full_page; } ;
struct bnx2x {int panic; scalar_t__ rx_mode; int * vlgrp; scalar_t__ rx_csum; TYPE_3__* dev; TYPE_1__* pdev; } ;
typedef enum eth_rx_cqe_type { ____Placeholder_eth_rx_cqe_type } eth_rx_cqe_type ;
struct TYPE_13__ {int rx_skb_alloc_failed; int rx_err_discard_pkt; } ;
struct TYPE_11__ {scalar_t__ mtu; } ;
struct TYPE_9__ {int dev; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct eth_fast_path_rx_cqe*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct eth_fast_path_rx_cqe*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_1 ;
 int FUNC_8 (int,char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t FUNC_9 (size_t) ;
 size_t FUNC_10 (size_t) ;
 int VAR_11 ;
 size_t FUNC_11 (size_t) ;
 size_t FUNC_12 (size_t) ;
 size_t VAR_12 ;
 size_t FUNC_13 (size_t) ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_14 (struct bnx2x*,struct bnx2x_fastpath*,size_t,int ) ;
 int FUNC_15 (struct sk_buff*,union eth_rx_cqe*,struct bnx2x_fastpath*,TYPE_7__*) ;
 TYPE_7__* FUNC_16 (struct bnx2x*,struct bnx2x_fastpath*) ;
 int FUNC_17 (struct bnx2x_fastpath*,int*) ;
 int FUNC_18 (struct bnx2x*,struct eth_fast_path_rx_cqe*) ;
 int FUNC_19 (struct bnx2x_fastpath*,size_t,size_t) ;
 int FUNC_20 (struct bnx2x_fastpath*,union eth_rx_cqe*) ;
 int FUNC_21 (struct bnx2x_fastpath*,size_t,size_t,size_t,struct eth_fast_path_rx_cqe*) ;
 int FUNC_22 (struct bnx2x*,struct bnx2x_fastpath*,struct bnx2x_agg_info*,size_t,TYPE_5__*,size_t) ;
 int FUNC_23 (struct bnx2x*,struct bnx2x_fastpath*,size_t,size_t,int ) ;
 int FUNC_24 (struct bnx2x_fastpath*,size_t,TYPE_5__*) ;
 struct sk_buff* FUNC_25 (int*) ;
 int FUNC_26 (int *,int ,size_t,int ) ;
 int FUNC_27 (struct sw_rx_bd*,int ) ;
 int FUNC_28 (int *,int ,int ,int ) ;
 int FUNC_29 (struct sk_buff*,TYPE_3__*) ;
 scalar_t__ FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 scalar_t__ FUNC_33 (int) ;
 int VAR_16 ;
 int FUNC_34 (scalar_t__,int*,size_t) ;
 int FUNC_35 (scalar_t__,scalar_t__,int) ;
 int FUNC_36 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_37 (TYPE_3__*,size_t) ;
 int FUNC_38 (int*) ;
 int FUNC_39 (struct sk_buff*) ;
 int FUNC_40 (struct sk_buff*,scalar_t__) ;
 int FUNC_41 (struct sk_buff*,size_t) ;
 int FUNC_42 (struct sk_buff*,int ) ;
 int FUNC_43 (struct sk_buff*,size_t) ;
 scalar_t__ FUNC_44 (int) ;
 int FUNC_45 (int *,int *,int,struct sk_buff*) ;

int FUNC_46(struct bnx2x_fastpath *VAR_17, int VAR_18)
{
 struct bnx2x *VAR_19 = VAR_17->bp;
 u16 VAR_20, VAR_21, VAR_22, VAR_23;
 u16 VAR_24, VAR_25;
 int VAR_26 = 0;
 union eth_rx_cqe *VAR_27;
 struct eth_fast_path_rx_cqe *VAR_28;






 VAR_20 = VAR_17->rx_bd_cons;
 VAR_21 = VAR_17->rx_bd_prod;
 VAR_22 = VAR_21;
 VAR_24 = VAR_17->rx_comp_cons;
 VAR_25 = VAR_17->rx_comp_prod;

 VAR_23 = FUNC_11(VAR_24);
 VAR_27 = &VAR_17->rx_comp_ring[VAR_23];
 VAR_28 = &VAR_27->fast_path_cqe;

 FUNC_8(VAR_9,
    "queue[%d]: sw_comp_cons %u\n", VAR_17->index, VAR_24);

 while (FUNC_1(VAR_28)) {
  struct sw_rx_bd *VAR_29 = ((void*)0);
  struct sk_buff *VAR_30;
  u8 VAR_31;
  enum eth_rx_cqe_type VAR_32;
  u16 VAR_33, VAR_34, VAR_35;
  u8 *VAR_36;






  VAR_21 = FUNC_12(VAR_21);
  VAR_20 = FUNC_12(VAR_20);

  VAR_31 = VAR_28->type_error_flags;
  VAR_32 = VAR_31 & VAR_3;

  FUNC_8(VAR_9,
     "CQE type %x  err %x  status %x  queue %x  vlan %x  len %u\n",
     FUNC_3(VAR_31),
     VAR_31, VAR_28->status_flags,
     FUNC_32(VAR_28->rss_hash_result),
     FUNC_31(VAR_28->vlan_tag),
     FUNC_31(VAR_28->pkt_len_or_gro_seg_len));


  if (FUNC_44(FUNC_5(VAR_32))) {
   FUNC_20(VAR_17, VAR_27);
   goto next_cqe;
  }

  VAR_29 = &VAR_17->rx_buf_ring[VAR_20];
  VAR_36 = VAR_29->data;

  if (!FUNC_4(VAR_32)) {
   struct bnx2x_agg_info *VAR_37;
   u16 VAR_38, VAR_39;
   if (FUNC_6(VAR_32)) {
    u16 VAR_40 = VAR_28->queue_index;
    FUNC_8(VAR_9,
       "calling tpa_start on queue %d\n",
       VAR_40);

    FUNC_21(VAR_17, VAR_40,
      VAR_20, VAR_21,
      VAR_28);

    goto next_rx;
   }
   VAR_35 = VAR_27->end_agg_cqe.queue_index;
   VAR_37 = &VAR_17->tpa_info[VAR_35];
   FUNC_8(VAR_9,
      "calling tpa_stop on queue %d\n",
      VAR_35);

   VAR_38 = FUNC_31(VAR_27->end_agg_cqe.pkt_len) -
        VAR_37->len_on_bd;

   if (VAR_17->mode == VAR_14)
    VAR_39 = (VAR_38 + VAR_37->full_page - 1) /
      VAR_37->full_page;
   else
    VAR_39 = FUNC_13(VAR_38) >>
     VAR_13;

   FUNC_22(VAR_19, VAR_17, VAR_37, VAR_39,
           &VAR_27->end_agg_cqe, VAR_23);





   FUNC_24(VAR_17, VAR_39, &VAR_27->end_agg_cqe);
   goto next_cqe;
  }

  VAR_33 = FUNC_31(VAR_28->pkt_len_or_gro_seg_len);
  VAR_34 = VAR_28->placement_offset;
  FUNC_26(&VAR_19->pdev->dev,
     FUNC_27(VAR_29, VAR_16),
     VAR_34 + VAR_12,
     VAR_1);
  VAR_34 += VAR_10;
  FUNC_38(VAR_36 + VAR_34);

  if (FUNC_44(VAR_31 & VAR_6)) {
   FUNC_8(VAR_8 | VAR_9,
      "ERROR  flags %x  rx packet %u\n",
      VAR_31, VAR_24);
   FUNC_16(VAR_19, VAR_17)->rx_err_discard_pkt++;
   goto reuse_rx;
  }




  if ((VAR_19->dev->mtu > VAR_4) &&
      (VAR_33 <= VAR_12)) {
   VAR_30 = FUNC_37(VAR_19->dev, VAR_33);
   if (VAR_30 == ((void*)0)) {
    FUNC_8(VAR_8 | VAR_9,
       "ERROR  packet dropped because of alloc failure\n");
    FUNC_16(VAR_19, VAR_17)->rx_skb_alloc_failed++;
    goto reuse_rx;
   }
   FUNC_34(VAR_30->data, VAR_36 + VAR_34, VAR_33);
   FUNC_19(VAR_17, VAR_20, VAR_21);
  } else {
   if (FUNC_33(FUNC_14(VAR_19, VAR_17, VAR_21,
             VAR_7) == 0)) {
    FUNC_28(&VAR_19->pdev->dev,
       FUNC_27(VAR_29, VAR_16),
       VAR_17->rx_buf_size,
       VAR_1);
    VAR_30 = FUNC_25(VAR_36);
    if (FUNC_44(!VAR_30)) {
     FUNC_17(VAR_17, VAR_36);
     FUNC_16(VAR_19, VAR_17)->
       rx_skb_alloc_failed++;
     goto next_rx;
    }
    FUNC_43(VAR_30, VAR_34);
   } else {
    FUNC_8(VAR_8 | VAR_9,
       "ERROR  packet dropped because of alloc failure\n");
    FUNC_16(VAR_19, VAR_17)->rx_skb_alloc_failed++;
reuse_rx:
    FUNC_19(VAR_17, VAR_20, VAR_21);
    goto next_rx;
   }
  }

  FUNC_41(VAR_30, VAR_33);


  if (VAR_19->rx_mode == VAR_0 && VAR_19->vlgrp == ((void*)0)) {
   struct ethhdr *VAR_41 = (struct ethhdr *) VAR_30->data;

   if (VAR_41->h_proto == FUNC_30(VAR_5)) {
    FUNC_35(VAR_30->data + VAR_15, VAR_30->data,
     2 * VAR_2);
    FUNC_40(VAR_30, VAR_15);
    VAR_30->mac_header += VAR_15;
   }
  }

  VAR_30->protocol = FUNC_29(VAR_30, VAR_19->dev);


  VAR_30->rxhash = FUNC_18(VAR_19, VAR_28);

  FUNC_39(VAR_30);

  if (VAR_19->rx_csum)
   FUNC_15(VAR_30, VAR_27, VAR_17,
         FUNC_16(VAR_19, VAR_17));

  FUNC_42(VAR_30, VAR_17->rx_queue);

  if ((FUNC_31(VAR_28->pars_flags.flags) &
       VAR_11))
   FUNC_45(&VAR_17->napi, VAR_19->vlgrp,
    FUNC_31(VAR_28->vlan_tag), VAR_30);
  else
   FUNC_36(&VAR_17->napi, VAR_30);

next_rx:
  VAR_29->data = ((void*)0);

  VAR_20 = FUNC_10(VAR_20);
  VAR_21 = FUNC_10(VAR_21);
  VAR_22 = FUNC_10(VAR_22);
  VAR_26++;
next_cqe:
  VAR_25 = FUNC_9(VAR_25);
  VAR_24 = FUNC_9(VAR_24);


  FUNC_2(VAR_28);

  if (VAR_26 == VAR_18)
   break;

  VAR_23 = FUNC_11(VAR_24);
  VAR_27 = &VAR_17->rx_comp_ring[VAR_23];
  VAR_28 = &VAR_27->fast_path_cqe;
 }

 VAR_17->rx_bd_cons = VAR_20;
 VAR_17->rx_bd_prod = VAR_22;
 VAR_17->rx_comp_cons = VAR_24;
 VAR_17->rx_comp_prod = VAR_25;


 FUNC_23(VAR_19, VAR_17, VAR_22, VAR_25,
        VAR_17->rx_sge_prod);

 VAR_17->rx_pkt += VAR_26;
 VAR_17->rx_calls++;

 return VAR_26;
}
