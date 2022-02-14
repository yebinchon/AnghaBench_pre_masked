
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct net_device {int dummy; } ;
struct cp_private {int rx_buf_sz; TYPE_2__* rx_ring; struct sk_buff** rx_skb; TYPE_1__* pdev; struct net_device* dev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {void* opts1; int addr; scalar_t__ opts2; } ;
struct TYPE_3__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cp_private*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 struct sk_buff* FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_6(struct cp_private *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->dev;
 unsigned VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  struct sk_buff *VAR_9;
  dma_addr_t VAR_10;

  VAR_9 = FUNC_4(VAR_7, VAR_6->rx_buf_sz + VAR_3);
  if (!VAR_9)
   goto err_out;

  FUNC_5(VAR_9, VAR_3);

  VAR_10 = FUNC_3(&VAR_6->pdev->dev, VAR_9->data,
      VAR_6->rx_buf_sz, VAR_4);
  VAR_6->rx_skb[VAR_8] = VAR_9;

  VAR_6->rx_ring[VAR_8].opts2 = 0;
  VAR_6->rx_ring[VAR_8].addr = FUNC_2(VAR_10);
  if (VAR_8 == (VAR_0 - 1))
   VAR_6->rx_ring[VAR_8].opts1 =
    FUNC_1(VAR_1 | VAR_5 | VAR_6->rx_buf_sz);
  else
   VAR_6->rx_ring[VAR_8].opts1 =
    FUNC_1(VAR_1 | VAR_6->rx_buf_sz);
 }

 return 0;

err_out:
 FUNC_0(VAR_6);
 return -VAR_2;
}
