
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; struct net_device* dev; } ;
struct netdev_private {int cur_rx; int dirty_rx; int rx_buf_sz; TYPE_2__* rx_ring; int pci_dev; struct sk_buff** rx_skbuff; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ status; TYPE_1__* frag; } ;
struct TYPE_3__ {void* length; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (int) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5 (struct net_device *VAR_3)
{
 struct netdev_private *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;
 int VAR_6 = 0;


 for (;(VAR_4->cur_rx - VAR_4->dirty_rx + VAR_2) % VAR_2 > 0;
  VAR_4->dirty_rx = (VAR_4->dirty_rx + 1) % VAR_2) {
  struct sk_buff *VAR_7;
  VAR_5 = VAR_4->dirty_rx % VAR_2;
  if (VAR_4->rx_skbuff[VAR_5] == ((void*)0)) {
   VAR_7 = FUNC_1(VAR_4->rx_buf_sz);
   VAR_4->rx_skbuff[VAR_5] = VAR_7;
   if (VAR_7 == ((void*)0))
    break;
   VAR_7->dev = VAR_3;
   FUNC_4(VAR_7, 2);
   VAR_4->rx_ring[VAR_5].frag[0].addr = FUNC_0(
    FUNC_3(VAR_4->pci_dev, VAR_7->data,
     VAR_4->rx_buf_sz, VAR_1));
  }

  VAR_4->rx_ring[VAR_5].frag[0].length =
   FUNC_0(VAR_4->rx_buf_sz | VAR_0);
  VAR_4->rx_ring[VAR_5].status = 0;
  VAR_6++;
 }
 return;
}
