
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {scalar_t__ start; scalar_t__ end; } ;
struct net_device {int dev; int irq; } ;
struct cpmac_priv {int ring_size; int dma_ring; TYPE_1__* desc_ring; TYPE_1__* rx_head; int pdev; int regs; int phy; int napi; int reset_work; } ;
struct cpmac_desc {int dummy; } ;
struct TYPE_2__ {scalar_t__ skb; int data_mapping; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *,int,TYPE_1__*,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (int ,struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 struct cpmac_priv* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ) ;
 struct resource* FUNC_14 (int ,int ,char*) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_5)
{
 int VAR_6;
 struct cpmac_priv *VAR_7 = FUNC_11(VAR_5);
 struct resource *VAR_8;

 FUNC_12(VAR_5);

 FUNC_2(&VAR_7->reset_work);
 FUNC_10(&VAR_7->napi);
 FUNC_13(VAR_7->phy);

 FUNC_3(VAR_5);

 for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
  FUNC_4(VAR_7->regs, FUNC_1(VAR_6), 0);
 FUNC_4(VAR_7->regs, FUNC_0(0), 0);
 FUNC_4(VAR_7->regs, VAR_0, 0);

 FUNC_7(VAR_5->irq, VAR_5);
 FUNC_8(VAR_7->regs);
 VAR_8 = FUNC_14(VAR_7->pdev, VAR_4, "regs");
 FUNC_15(VAR_8->start, VAR_8->end - VAR_8->start);
 VAR_7->rx_head = &VAR_7->desc_ring[VAR_1];
 for (VAR_6 = 0; VAR_6 < VAR_7->ring_size; VAR_6++) {
  if (VAR_7->rx_head[VAR_6].skb) {
   FUNC_6(&VAR_5->dev,
      VAR_7->rx_head[VAR_6].data_mapping,
      VAR_2,
      VAR_3);
   FUNC_9(VAR_7->rx_head[VAR_6].skb);
  }
 }

 FUNC_5(&VAR_5->dev, sizeof(struct cpmac_desc) *
     (VAR_1 + VAR_7->ring_size),
     VAR_7->desc_ring, VAR_7->dma_ring);
 return 0;
}
