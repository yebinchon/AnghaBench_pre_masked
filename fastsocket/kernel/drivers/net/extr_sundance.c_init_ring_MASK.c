
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int data; struct net_device* dev; } ;
struct netdev_private {unsigned int dirty_rx; unsigned int dirty_tx; int rx_buf_sz; int rx_ring_dma; TYPE_3__* tx_ring; int ** tx_skbuff; TYPE_2__* rx_ring; int pci_dev; struct sk_buff** rx_skbuff; scalar_t__ cur_task; scalar_t__ cur_tx; scalar_t__ cur_rx; } ;
struct net_device {int mtu; } ;
struct TYPE_6__ {scalar_t__ status; } ;
struct TYPE_5__ {TYPE_1__* frag; scalar_t__ status; void* next_desc; } ;
struct TYPE_4__ {void* length; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_5)
{
 struct netdev_private *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 VAR_6->cur_rx = VAR_6->cur_tx = 0;
 VAR_6->dirty_rx = VAR_6->dirty_tx = 0;
 VAR_6->cur_task = 0;

 VAR_6->rx_buf_sz = (VAR_5->mtu <= 1520 ? VAR_2 : VAR_5->mtu + 16);


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6->rx_ring[VAR_7].next_desc = FUNC_0(VAR_6->rx_ring_dma +
   ((VAR_7+1)%VAR_3)*sizeof(*VAR_6->rx_ring));
  VAR_6->rx_ring[VAR_7].status = 0;
  VAR_6->rx_ring[VAR_7].frag[0].length = 0;
  VAR_6->rx_skbuff[VAR_7] = ((void*)0);
 }


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct sk_buff *VAR_8 = FUNC_1(VAR_6->rx_buf_sz);
  VAR_6->rx_skbuff[VAR_7] = VAR_8;
  if (VAR_8 == ((void*)0))
   break;
  VAR_8->dev = VAR_5;
  FUNC_4(VAR_8, 2);
  VAR_6->rx_ring[VAR_7].frag[0].addr = FUNC_0(
   FUNC_3(VAR_6->pci_dev, VAR_8->data, VAR_6->rx_buf_sz,
    VAR_1));
  VAR_6->rx_ring[VAR_7].frag[0].length = FUNC_0(VAR_6->rx_buf_sz | VAR_0);
 }
 VAR_6->dirty_rx = (unsigned int)(VAR_7 - VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6->tx_skbuff[VAR_7] = ((void*)0);
  VAR_6->tx_ring[VAR_7].status = 0;
 }
 return;
}
