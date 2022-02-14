
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct znet_private {int rx_dma; int tx_dma; int io_size; int sia_size; int sia_base; } ;
struct net_device {int irq; int base_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct net_device*) ;
 struct znet_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4 (struct net_device *VAR_0)
{
 struct znet_private *VAR_1 = FUNC_2(VAR_0);

 FUNC_3 (VAR_1->sia_base, VAR_1->sia_size);
 FUNC_3 (VAR_0->base_addr, VAR_1->io_size);
 FUNC_0 (VAR_1->tx_dma);
 FUNC_0 (VAR_1->rx_dma);
 FUNC_1 (VAR_0->irq, VAR_0);
}
