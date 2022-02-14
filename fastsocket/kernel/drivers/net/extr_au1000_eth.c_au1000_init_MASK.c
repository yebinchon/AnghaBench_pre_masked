
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int* dev_addr; int name; } ;
struct au1000_private {int tx_head; int tx_tail; int rx_head; int lock; TYPE_4__* mac; TYPE_3__* phy_dev; TYPE_2__** rx_dma_ring; TYPE_1__** tx_dma_ring; } ;
struct TYPE_8__ {int control; int mac_addr_high; int mac_addr_low; int vlan1_tag; } ;
struct TYPE_7__ {scalar_t__ duplex; scalar_t__ link; } ;
struct TYPE_6__ {int buff_stat; } ;
struct TYPE_5__ {int buff_stat; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 (struct net_device*,int) ;
 struct au1000_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_9)
{
 struct au1000_private *VAR_10 = FUNC_2(VAR_9);
 unsigned long VAR_11;
 int VAR_12;
 u32 VAR_13;

 if (VAR_8 > 4)
  FUNC_3("%s: au1000_init\n", VAR_9->name);


 FUNC_1(VAR_9, 1);

 FUNC_4(&VAR_10->lock, VAR_11);

 VAR_10->mac->control = 0;
 VAR_10->tx_head = (VAR_10->tx_dma_ring[0]->buff_stat & 0xC) >> 2;
 VAR_10->tx_tail = VAR_10->tx_head;
 VAR_10->rx_head = (VAR_10->rx_dma_ring[0]->buff_stat & 0xC) >> 2;

 VAR_10->mac->mac_addr_high = VAR_9->dev_addr[5]<<8 | VAR_9->dev_addr[4];
 VAR_10->mac->mac_addr_low = VAR_9->dev_addr[3]<<24 | VAR_9->dev_addr[2]<<16 |
  VAR_9->dev_addr[1]<<8 | VAR_9->dev_addr[0];

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  VAR_10->rx_dma_ring[VAR_12]->buff_stat |= VAR_7;
 }
 FUNC_0();

 VAR_13 = VAR_4 | VAR_5;

 VAR_13 |= VAR_1;

 if (VAR_10->phy_dev) {
  if (VAR_10->phy_dev->link && (VAR_0 == VAR_10->phy_dev->duplex))
   VAR_13 |= VAR_3;
  else
   VAR_13 |= VAR_2;
 } else {
  VAR_13 |= VAR_3;
 }

 VAR_10->mac->control = VAR_13;
 VAR_10->mac->vlan1_tag = 0x8100;
 FUNC_0();

 FUNC_5(&VAR_10->lock, VAR_11);
 return 0;
}
