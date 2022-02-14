
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct sgiseeq_private {TYPE_4__* rx_desc; TYPE_4__* tx_desc; scalar_t__ tx_old; scalar_t__ rx_old; scalar_t__ tx_new; scalar_t__ rx_new; } ;
struct TYPE_6__ {int parent; } ;
struct net_device {TYPE_2__ dev; } ;
typedef int dma_addr_t ;
struct TYPE_7__ {int cntinfo; int pbuf; } ;
struct TYPE_5__ {int cntinfo; } ;
struct TYPE_8__ {TYPE_3__ rdma; struct sk_buff* skb; TYPE_1__ tdma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct net_device*,TYPE_4__*) ;
 struct sk_buff* FUNC_3 (struct net_device*,int ) ;
 struct sgiseeq_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_8)
{
 struct sgiseeq_private *VAR_9 = FUNC_4(VAR_8);
 int VAR_10;

 FUNC_5(VAR_8);
 VAR_9->rx_new = VAR_9->tx_new = 0;
 VAR_9->rx_old = VAR_9->tx_old = 0;

 FUNC_0(VAR_8);


 for(VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  VAR_9->tx_desc[VAR_10].tdma.cntinfo = VAR_7;
  FUNC_2(VAR_8, &VAR_9->tx_desc[VAR_10]);
 }


 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  if (!VAR_9->rx_desc[VAR_10].skb) {
   dma_addr_t VAR_11;
   struct sk_buff *VAR_12 = FUNC_3(VAR_8, VAR_3);

   if (VAR_12 == ((void*)0))
    return -VAR_1;
   FUNC_6(VAR_12, 2);
   VAR_11 = FUNC_1(VAR_8->dev.parent,
        VAR_12->data - 2,
        VAR_3, VAR_0);
   VAR_9->rx_desc[VAR_10].skb = VAR_12;
   VAR_9->rx_desc[VAR_10].rdma.pbuf = VAR_11;
  }
  VAR_9->rx_desc[VAR_10].rdma.cntinfo = VAR_4;
  FUNC_2(VAR_8, &VAR_9->rx_desc[VAR_10]);
 }
 VAR_9->rx_desc[VAR_10 - 1].rdma.cntinfo |= VAR_2;
 FUNC_2(VAR_8, &VAR_9->rx_desc[VAR_10 - 1]);
 return 0;
}
