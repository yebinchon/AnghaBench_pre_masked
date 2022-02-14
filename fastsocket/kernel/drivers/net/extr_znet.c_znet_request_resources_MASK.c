
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct znet_private {int rx_dma; int tx_dma; int sia_size; int sia_base; int io_size; } ;
struct net_device {int irq; int base_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 struct znet_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ,int *,int ,char*,struct net_device*) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_7 (struct net_device *VAR_1)
{
 struct znet_private *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_5 (VAR_1->irq, &VAR_0, 0, "ZNet", VAR_1))
  goto failed;
 if (FUNC_4 (VAR_2->rx_dma, "ZNet rx"))
  goto free_irq;
 if (FUNC_4 (VAR_2->tx_dma, "ZNet tx"))
  goto free_rx_dma;
 if (!FUNC_6 (VAR_2->sia_base, VAR_2->sia_size, "ZNet SIA"))
  goto free_tx_dma;
 if (!FUNC_6 (VAR_1->base_addr, VAR_2->io_size, "ZNet I/O"))
  goto free_sia;

 return 0;

 free_sia:
 FUNC_3 (VAR_2->sia_base, VAR_2->sia_size);
 free_tx_dma:
 FUNC_0 (VAR_2->tx_dma);
 free_rx_dma:
 FUNC_0 (VAR_2->rx_dma);
 free_irq:
 FUNC_1 (VAR_1->irq, VAR_1);
 failed:
 return -1;
}
