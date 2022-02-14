
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tulip_tx_desc {int dummy; } ;
struct tulip_rx_desc {int dummy; } ;
struct tulip_private {int rx_ring_dma; unsigned int dirty_rx; int tx_ring_dma; TYPE_4__* tx_ring; TYPE_3__* tx_buffers; TYPE_2__* rx_ring; TYPE_1__* rx_buffers; int pdev; scalar_t__ nir; scalar_t__ ttimer; scalar_t__ susp_rx; } ;
struct sk_buff {struct net_device* dev; int data; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_8__ {int status; void* buffer2; } ;
struct TYPE_7__ {scalar_t__ mapping; int * skb; } ;
struct TYPE_6__ {int status; void* buffer1; void* buffer2; void* length; } ;
struct TYPE_5__ {int mapping; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int) ;
 struct tulip_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_6)
{
 struct tulip_private *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_7->susp_rx = 0;
 VAR_7->ttimer = 0;
 VAR_7->nir = 0;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7->rx_ring[VAR_8].status = 0x00000000;
  VAR_7->rx_ring[VAR_8].length = FUNC_0(VAR_3);
  VAR_7->rx_ring[VAR_8].buffer2 = FUNC_0(VAR_7->rx_ring_dma + sizeof(struct tulip_rx_desc) * (VAR_8 + 1));
  VAR_7->rx_buffers[VAR_8].skb = ((void*)0);
  VAR_7->rx_buffers[VAR_8].mapping = 0;
 }

 VAR_7->rx_ring[VAR_8-1].length = FUNC_0(VAR_3 | VAR_0);
 VAR_7->rx_ring[VAR_8-1].buffer2 = FUNC_0(VAR_7->rx_ring_dma);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  dma_addr_t VAR_9;




  struct sk_buff *VAR_10 = FUNC_1(VAR_3);
  VAR_7->rx_buffers[VAR_8].skb = VAR_10;
  if (VAR_10 == ((void*)0))
   break;
  VAR_9 = FUNC_3(VAR_7->pdev, VAR_10->data,
      VAR_3, VAR_2);
  VAR_7->rx_buffers[VAR_8].mapping = VAR_9;
  VAR_10->dev = VAR_6;
  VAR_7->rx_ring[VAR_8].status = FUNC_0(VAR_1);
  VAR_7->rx_ring[VAR_8].buffer1 = FUNC_0(VAR_9);
 }
 VAR_7->dirty_rx = (unsigned int)(VAR_8 - VAR_4);



 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  VAR_7->tx_buffers[VAR_8].skb = ((void*)0);
  VAR_7->tx_buffers[VAR_8].mapping = 0;
  VAR_7->tx_ring[VAR_8].status = 0x00000000;
  VAR_7->tx_ring[VAR_8].buffer2 = FUNC_0(VAR_7->tx_ring_dma + sizeof(struct tulip_tx_desc) * (VAR_8 + 1));
 }
 VAR_7->tx_ring[VAR_8-1].buffer2 = FUNC_0(VAR_7->tx_ring_dma);
}
