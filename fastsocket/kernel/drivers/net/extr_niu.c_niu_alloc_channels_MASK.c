
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_info {int tx_channel; struct niu* np; } ;
struct rx_ring_info {int rx_channel; int nonsyn_window; int syn_window; int rcr_pkt_threshold; int rcr_timeout; scalar_t__ rbr_kick_thresh; scalar_t__ rbr_blocks_per_page; scalar_t__ rcr_table_size; scalar_t__ syn_threshold; scalar_t__ nonsyn_threshold; struct niu* np; } ;
struct niu_parent {int* rxchan_per_port; int* txchan_per_port; } ;
struct niu {int port; int num_rx_rings; int num_tx_rings; struct tx_ring_info* tx_rings; struct rx_ring_info* rx_rings; int dev; struct niu_parent* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct niu*,struct rx_ring_info*) ;
 int FUNC_3 (struct niu*,struct tx_ring_info*) ;
 int FUNC_4 (struct niu*) ;
 int FUNC_5 (struct niu*,struct rx_ring_info*,int ) ;
 int FUNC_6 (struct niu*,struct rx_ring_info*) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct niu *VAR_3)
{
 struct niu_parent *VAR_4 = VAR_3->parent;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;
 struct rx_ring_info *VAR_9;
 struct tx_ring_info *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_12 = VAR_3->port;
 VAR_5 = VAR_6 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_5 += VAR_4->rxchan_per_port[VAR_11];
  VAR_6 += VAR_4->txchan_per_port[VAR_11];
 }

 VAR_7 = VAR_4->rxchan_per_port[VAR_12];
 VAR_8 = VAR_4->txchan_per_port[VAR_12];

 FUNC_1(VAR_3->dev, VAR_8);

 VAR_9 = FUNC_0(VAR_7, sizeof(struct rx_ring_info),
      VAR_1);
 VAR_13 = -VAR_0;
 if (!VAR_9)
  goto out_err;

 VAR_3->num_rx_rings = VAR_7;
 FUNC_7();
 VAR_3->rx_rings = VAR_9;

 for (VAR_11 = 0; VAR_11 < VAR_3->num_rx_rings; VAR_11++) {
  struct rx_ring_info *VAR_14 = &VAR_3->rx_rings[VAR_11];

  VAR_14->np = VAR_3;
  VAR_14->rx_channel = VAR_5 + VAR_11;

  VAR_13 = FUNC_2(VAR_3, VAR_14);
  if (VAR_13)
   goto out_err;

  FUNC_6(VAR_3, VAR_14);


  VAR_14->nonsyn_window = 64;
  VAR_14->nonsyn_threshold = VAR_14->rcr_table_size - 64;
  VAR_14->syn_window = 64;
  VAR_14->syn_threshold = VAR_14->rcr_table_size - 64;
  VAR_14->rcr_pkt_threshold = 16;
  VAR_14->rcr_timeout = 8;
  VAR_14->rbr_kick_thresh = VAR_2;
  if (VAR_14->rbr_kick_thresh < VAR_14->rbr_blocks_per_page)
   VAR_14->rbr_kick_thresh = VAR_14->rbr_blocks_per_page;

  VAR_13 = FUNC_5(VAR_3, VAR_14, VAR_1);
  if (VAR_13)
   return VAR_13;
 }

 VAR_10 = FUNC_0(VAR_8, sizeof(struct tx_ring_info),
      VAR_1);
 VAR_13 = -VAR_0;
 if (!VAR_10)
  goto out_err;

 VAR_3->num_tx_rings = VAR_8;
 FUNC_7();
 VAR_3->tx_rings = VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_3->num_tx_rings; VAR_11++) {
  struct tx_ring_info *VAR_15 = &VAR_3->tx_rings[VAR_11];

  VAR_15->np = VAR_3;
  VAR_15->tx_channel = VAR_6 + VAR_11;

  VAR_13 = FUNC_3(VAR_3, VAR_15);
  if (VAR_13)
   goto out_err;
 }

 return 0;

out_err:
 FUNC_4(VAR_3);
 return VAR_13;
}
