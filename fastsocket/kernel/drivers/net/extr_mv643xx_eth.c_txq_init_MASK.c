
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_queue {int index; int tx_ring_size; int tx_desc_area_size; int tx_skb; scalar_t__ tx_desc_dma; int * tx_desc_area; scalar_t__ tx_used_desc; scalar_t__ tx_curr_desc; scalar_t__ tx_desc_count; } ;
struct tx_desc {scalar_t__ next_desc_ptr; scalar_t__ cmd_sts; } ;
struct mv643xx_eth_private {int tx_ring_size; int tx_desc_sram_size; TYPE_1__* dev; scalar_t__ tx_desc_sram_addr; struct tx_queue* txq; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,char*,int) ;
 int * FUNC_1 (int ,int,scalar_t__*,int ) ;
 int * FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mv643xx_eth_private *VAR_3, int VAR_4)
{
 struct tx_queue *VAR_5 = VAR_3->txq + VAR_4;
 struct tx_desc *VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5->index = VAR_4;

 VAR_5->tx_ring_size = VAR_3->tx_ring_size;

 VAR_5->tx_desc_count = 0;
 VAR_5->tx_curr_desc = 0;
 VAR_5->tx_used_desc = 0;

 VAR_7 = VAR_5->tx_ring_size * sizeof(struct tx_desc);

 if (VAR_4 == 0 && VAR_7 <= VAR_3->tx_desc_sram_size) {
  VAR_5->tx_desc_area = FUNC_2(VAR_3->tx_desc_sram_addr,
      VAR_3->tx_desc_sram_size);
  VAR_5->tx_desc_dma = VAR_3->tx_desc_sram_addr;
 } else {
  VAR_5->tx_desc_area = FUNC_1(VAR_3->dev->dev.parent,
             VAR_7, &VAR_5->tx_desc_dma,
             VAR_1);
 }

 if (VAR_5->tx_desc_area == ((void*)0)) {
  FUNC_0(VAR_2, &VAR_3->dev->dev,
      "can't allocate tx ring (%d bytes)\n", VAR_7);
  return -VAR_0;
 }
 FUNC_3(VAR_5->tx_desc_area, 0, VAR_7);

 VAR_5->tx_desc_area_size = VAR_7;

 VAR_6 = (struct tx_desc *)VAR_5->tx_desc_area;
 for (VAR_8 = 0; VAR_8 < VAR_5->tx_ring_size; VAR_8++) {
  struct tx_desc *VAR_9 = VAR_6 + VAR_8;
  int VAR_10;

  VAR_10 = VAR_8 + 1;
  if (VAR_10 == VAR_5->tx_ring_size)
   VAR_10 = 0;

  VAR_9->cmd_sts = 0;
  VAR_9->next_desc_ptr = VAR_5->tx_desc_dma +
     VAR_10 * sizeof(struct tx_desc);
 }

 FUNC_4(&VAR_5->tx_skb);

 return 0;
}
