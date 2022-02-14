
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdrv_private {int * tx_bufs; int * rx_ring; int tx_bufs_dma; int pci_dev; int rx_ring_dma; int lock; int timer; void* mmio_addr; } ;
struct TYPE_2__ {int rx_missed_errors; } ;
struct net_device {int irq; TYPE_1__ stats; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,...) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct net_device*) ;
 struct netdrv_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,int ,int *,int ) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_15 (struct net_device *VAR_11)
{
 struct netdrv_private *VAR_12 = FUNC_9(VAR_11);
 void *VAR_13 = VAR_12->mmio_addr;
 unsigned long VAR_14;

 FUNC_0 ("ENTER\n");

 FUNC_11 (VAR_11);

 FUNC_0 ("%s: Shutting down ethercard, status was 0x%4.4x.\n",
   VAR_11->name, FUNC_1 (VAR_7));

 FUNC_7 (&VAR_12->timer);

 FUNC_13 (&VAR_12->lock, VAR_14);


 FUNC_6 (VAR_3, (FUNC_3 (VAR_3) & VAR_4));


 FUNC_4 (VAR_6, 0x0000);


 VAR_11->stats.rx_missed_errors += FUNC_2 (VAR_9);
 FUNC_5 (VAR_9, 0);

 FUNC_14 (&VAR_12->lock, VAR_14);

 FUNC_8 (VAR_11->irq, VAR_11);

 FUNC_10 (VAR_11);

 FUNC_12(VAR_12->pci_dev, VAR_8,
       VAR_12->rx_ring, VAR_12->rx_ring_dma);
 FUNC_12(VAR_12->pci_dev, VAR_10,
       VAR_12->tx_bufs, VAR_12->tx_bufs_dma);
 VAR_12->rx_ring = ((void*)0);
 VAR_12->tx_bufs = ((void*)0);


 FUNC_6 (VAR_0, VAR_2);
 FUNC_6 (VAR_5, 0x03);
 FUNC_6 (VAR_0, VAR_1);

 FUNC_0 ("EXIT\n");
 return 0;
}
