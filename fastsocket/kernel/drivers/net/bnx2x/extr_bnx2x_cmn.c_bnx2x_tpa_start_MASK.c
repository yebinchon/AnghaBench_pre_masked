
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct sw_rx_bd {scalar_t__ data; } ;
struct eth_rx_bd {void* addr_lo; void* addr_hi; } ;
struct TYPE_4__ {int flags; } ;
struct eth_fast_path_rx_cqe {int pkt_len_or_gro_seg_len; int placement_offset; int len_on_bd; int vlan_tag; TYPE_2__ pars_flags; } ;
struct bnx2x_fastpath {scalar_t__ mode; int tpa_queue_used; int rx_buf_size; struct bnx2x_agg_info* tpa_info; struct eth_rx_bd* rx_desc_ring; struct sw_rx_bd* rx_buf_ring; struct bnx2x* bp; } ;
struct bnx2x_agg_info {scalar_t__ tpa_state; size_t full_page; size_t gro_size; int rxhash; int placement_offset; void* len_on_bd; void* vlan_tag; void* parsing_flags; struct sw_rx_bd first_buf; } ;
struct bnx2x {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bnx2x*,struct eth_fast_path_rx_cqe*) ;
 int FUNC_5 (struct bnx2x_fastpath*,size_t,size_t) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int *,scalar_t__,int ,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct sw_rx_bd*,int ,int ) ;
 void* FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct bnx2x_fastpath *VAR_8, u16 VAR_9,
       u16 VAR_10, u16 VAR_11,
       struct eth_fast_path_rx_cqe *VAR_12)
{
 struct bnx2x *VAR_13 = VAR_8->bp;
 struct sw_rx_bd *VAR_14 = &VAR_8->rx_buf_ring[VAR_10];
 struct sw_rx_bd *VAR_15 = &VAR_8->rx_buf_ring[VAR_11];
 struct eth_rx_bd *VAR_16 = &VAR_8->rx_desc_ring[VAR_11];
 dma_addr_t VAR_17;
 struct bnx2x_agg_info *VAR_18 = &VAR_8->tpa_info[VAR_9];
 struct sw_rx_bd *VAR_19 = &VAR_18->first_buf;


 if (VAR_18->tpa_state != VAR_2)
  FUNC_0("start of bin not in stop [%d]\n", VAR_9);


 VAR_17 = FUNC_7(&VAR_13->pdev->dev,
     VAR_19->data + VAR_5,
     VAR_8->rx_buf_size, VAR_3);






 if (FUNC_11(FUNC_8(&VAR_13->pdev->dev, VAR_17))) {

  FUNC_5(VAR_8, VAR_10, VAR_11);
  VAR_18->tpa_state = VAR_0;
  return;
 }


 VAR_15->data = VAR_19->data;
 FUNC_9(VAR_15, VAR_17, VAR_17);

 VAR_16->addr_hi = FUNC_6(FUNC_2(VAR_17));
 VAR_16->addr_lo = FUNC_6(FUNC_3(VAR_17));


 *VAR_19 = *VAR_14;


 VAR_18->parsing_flags =
  FUNC_10(VAR_12->pars_flags.flags);
 VAR_18->vlan_tag = FUNC_10(VAR_12->vlan_tag);
 VAR_18->tpa_state = VAR_1;
 VAR_18->len_on_bd = FUNC_10(VAR_12->len_on_bd);
 VAR_18->placement_offset = VAR_12->placement_offset;
 VAR_18->rxhash = FUNC_4(VAR_13, VAR_12);
 if (VAR_8->mode == VAR_7) {
  u16 VAR_20 = FUNC_10(VAR_12->pkt_len_or_gro_seg_len);
  VAR_18->full_page = VAR_6 / VAR_20 * VAR_20;
  VAR_18->gro_size = VAR_20;
 }
}
