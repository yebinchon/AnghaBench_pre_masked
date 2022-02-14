
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_aggr; int get_skb_header; int lro_arr; scalar_t__ frag_align_pad; int max_desc; void* ip_summed_aggr; void* ip_summed; int features; int stats; TYPE_2__* dev; } ;
struct rx_queue {int index; int rx_ring_size; int rx_desc_area_size; scalar_t__ rx_desc_dma; int * rx_desc_area; int lro_arr; TYPE_1__ lro_mgr; int * rx_skb; scalar_t__ rx_used_desc; scalar_t__ rx_curr_desc; scalar_t__ rx_desc_count; } ;
struct rx_desc {scalar_t__ next_desc_ptr; } ;
struct mv643xx_eth_private {int rx_ring_size; int rx_desc_sram_size; TYPE_2__* dev; scalar_t__ rx_desc_sram_addr; struct rx_queue* rxq; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_3__*,char*,...) ;
 int * FUNC_2 (int ,int,scalar_t__*,int ) ;
 int FUNC_3 (int ,int,int *,scalar_t__) ;
 int * FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct mv643xx_eth_private *VAR_6, int VAR_7)
{
 struct rx_queue *VAR_8 = VAR_6->rxq + VAR_7;
 struct rx_desc *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8->index = VAR_7;

 VAR_8->rx_ring_size = VAR_6->rx_ring_size;

 VAR_8->rx_desc_count = 0;
 VAR_8->rx_curr_desc = 0;
 VAR_8->rx_used_desc = 0;

 VAR_10 = VAR_8->rx_ring_size * sizeof(struct rx_desc);

 if (VAR_7 == 0 && VAR_10 <= VAR_6->rx_desc_sram_size) {
  VAR_8->rx_desc_area = FUNC_4(VAR_6->rx_desc_sram_addr,
      VAR_6->rx_desc_sram_size);
  VAR_8->rx_desc_dma = VAR_6->rx_desc_sram_addr;
 } else {
  VAR_8->rx_desc_area = FUNC_2(VAR_6->dev->dev.parent,
             VAR_10, &VAR_8->rx_desc_dma,
             VAR_2);
 }

 if (VAR_8->rx_desc_area == ((void*)0)) {
  FUNC_1(VAR_3, &VAR_6->dev->dev,
      "can't allocate rx ring (%d bytes)\n", VAR_10);
  goto out;
 }
 FUNC_7(VAR_8->rx_desc_area, 0, VAR_10);

 VAR_8->rx_desc_area_size = VAR_10;
 VAR_8->rx_skb = FUNC_6(VAR_8->rx_ring_size * sizeof(*VAR_8->rx_skb),
        VAR_2);
 if (VAR_8->rx_skb == ((void*)0)) {
  FUNC_1(VAR_3, &VAR_6->dev->dev,
      "can't allocate rx skb ring\n");
  goto out_free;
 }

 VAR_9 = (struct rx_desc *)VAR_8->rx_desc_area;
 for (VAR_11 = 0; VAR_11 < VAR_8->rx_ring_size; VAR_11++) {
  int VAR_12;

  VAR_12 = VAR_11 + 1;
  if (VAR_12 == VAR_8->rx_ring_size)
   VAR_12 = 0;

  VAR_9[VAR_11].next_desc_ptr = VAR_8->rx_desc_dma +
     VAR_12 * sizeof(struct rx_desc);
 }

 VAR_8->lro_mgr.dev = VAR_6->dev;
 FUNC_7(&VAR_8->lro_mgr.stats, 0, sizeof(VAR_8->lro_mgr.stats));
 VAR_8->lro_mgr.features = VAR_4;
 VAR_8->lro_mgr.ip_summed = VAR_0;
 VAR_8->lro_mgr.ip_summed_aggr = VAR_0;
 VAR_8->lro_mgr.max_desc = FUNC_0(VAR_8->lro_arr);
 VAR_8->lro_mgr.max_aggr = 32;
 VAR_8->lro_mgr.frag_align_pad = 0;
 VAR_8->lro_mgr.lro_arr = VAR_8->lro_arr;
 VAR_8->lro_mgr.get_skb_header = VAR_5;

 FUNC_7(&VAR_8->lro_arr, 0, sizeof(VAR_8->lro_arr));

 return 0;


out_free:
 if (VAR_7 == 0 && VAR_10 <= VAR_6->rx_desc_sram_size)
  FUNC_5(VAR_8->rx_desc_area);
 else
  FUNC_3(VAR_6->dev->dev.parent, VAR_10,
      VAR_8->rx_desc_area,
      VAR_8->rx_desc_dma);

out:
 return -VAR_1;
}
