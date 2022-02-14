
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long data; int * function; scalar_t__ expires; } ;
struct netdrv_private {int tx_flag; TYPE_1__ timer; scalar_t__ full_duplex; int pci_dev; scalar_t__ duplex_lock; int rx_ring_dma; int * rx_ring; int tx_bufs_dma; int * tx_bufs; void* mmio_addr; } ;
struct net_device {int irq; int name; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 struct netdrv_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int *,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ,int ,int ,struct net_device*) ;

__attribute__((used)) static int FUNC_12 (struct net_device *VAR_10)
{
 struct netdrv_private *VAR_11 = FUNC_5(VAR_10);
 int VAR_12;




 FUNC_0 ("ENTER\n");

 VAR_12 = FUNC_11 (VAR_10->irq, VAR_8, VAR_2, VAR_10->name, VAR_10);
 if (VAR_12) {
  FUNC_0 ("EXIT, returning %d\n", VAR_12);
  return VAR_12;
 }

 VAR_11->tx_bufs = FUNC_8(VAR_11->pci_dev, VAR_5,
        &VAR_11->tx_bufs_dma);
 VAR_11->rx_ring = FUNC_8(VAR_11->pci_dev, VAR_4,
        &VAR_11->rx_ring_dma);
 if (VAR_11->tx_bufs == ((void*)0) || VAR_11->rx_ring == ((void*)0)) {
  FUNC_3(VAR_10->irq, VAR_10);

  if (VAR_11->tx_bufs)
   FUNC_9(VAR_11->pci_dev, VAR_5,
         VAR_11->tx_bufs, VAR_11->tx_bufs_dma);
  if (VAR_11->rx_ring)
   FUNC_9(VAR_11->pci_dev, VAR_4,
         VAR_11->rx_ring, VAR_11->rx_ring_dma);

  FUNC_0 ("EXIT, returning -ENOMEM\n");
  return -VAR_0;

 }

 VAR_11->full_duplex = VAR_11->duplex_lock;
 VAR_11->tx_flag = (VAR_6 << 11) & 0x003f0000;

 FUNC_7 (VAR_10);
 FUNC_6 (VAR_10);

 FUNC_0 ("%s: netdrv_open() ioaddr %#lx IRQ %d"
   " GP Pins %2.2x %s-duplex.\n",
   VAR_10->name, FUNC_10 (VAR_11->pci_dev, 1),
   VAR_10->irq, FUNC_1 (VAR_3),
   VAR_11->full_duplex ? "full" : "half");



 FUNC_4 (&VAR_11->timer);
 VAR_11->timer.expires = VAR_7 + 3 * VAR_1;
 VAR_11->timer.data = (unsigned long) VAR_10;
 VAR_11->timer.function = &VAR_9;
 FUNC_2 (&VAR_11->timer);

 FUNC_0 ("EXIT, returning 0\n");
 return 0;
}
