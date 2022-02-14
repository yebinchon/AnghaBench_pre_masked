
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct temac_local {int rx_bd_ci; int rx_lock; struct cdmac_bd* rx_bd_v; struct sk_buff** rx_skb; scalar_t__ rx_bd_p; } ;
struct sk_buff {int data; int ip_summed; int protocol; struct net_device* dev; } ;
struct TYPE_4__ {int parent; } ;
struct TYPE_3__ {int rx_bytes; int rx_packets; } ;
struct net_device {TYPE_2__ dev; TYPE_1__ stats; } ;
struct cdmac_bd {unsigned int app0; int app4; scalar_t__ len; int phys; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,unsigned long,int,int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 struct temac_local* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct temac_local*,int ,scalar_t__) ;
 unsigned long FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_9)
{
 struct temac_local *VAR_10 = FUNC_6(VAR_9);
 struct sk_buff *VAR_11, *VAR_12;
 unsigned int VAR_13;
 struct cdmac_bd *VAR_14;
 dma_addr_t VAR_15;
 int VAR_16;
 unsigned long VAR_17;
 unsigned long VAR_18;

 FUNC_10(&VAR_10->rx_lock, VAR_18);

 VAR_15 = VAR_10->rx_bd_p + sizeof(*VAR_10->rx_bd_v) * VAR_10->rx_bd_ci;
 VAR_14 = &VAR_10->rx_bd_v[VAR_10->rx_bd_ci];

 VAR_13 = VAR_14->app0;
 while ((VAR_13 & VAR_5)) {

  VAR_11 = VAR_10->rx_skb[VAR_10->rx_bd_ci];
  VAR_16 = VAR_14->app4;

  VAR_17 = FUNC_13(VAR_11->data);
  FUNC_4(VAR_9->dev.parent, VAR_17, VAR_16,
     VAR_1);

  FUNC_8(VAR_11, VAR_16);
  VAR_11->dev = VAR_9;
  VAR_11->protocol = FUNC_5(VAR_11, VAR_9);
  VAR_11->ip_summed = VAR_0;

  FUNC_7(VAR_11);

  VAR_9->stats.rx_packets++;
  VAR_9->stats.rx_bytes += VAR_16;

  VAR_12 = FUNC_1(VAR_8 + VAR_7,
    VAR_2);
  if (VAR_12 == 0) {
   FUNC_2(&VAR_9->dev, "no memory for new sk_buff\n");
   FUNC_11(&VAR_10->rx_lock, VAR_18);
   return;
  }

  FUNC_9(VAR_12, FUNC_0(VAR_12->data));

  VAR_14->app0 = VAR_6;
  VAR_14->phys = FUNC_3(VAR_9->dev.parent, VAR_12->data,
          VAR_8,
          VAR_1);
  VAR_14->len = VAR_8;
  VAR_10->rx_skb[VAR_10->rx_bd_ci] = VAR_12;

  VAR_10->rx_bd_ci++;
  if (VAR_10->rx_bd_ci >= VAR_3)
   VAR_10->rx_bd_ci = 0;

  VAR_14 = &VAR_10->rx_bd_v[VAR_10->rx_bd_ci];
  VAR_13 = VAR_14->app0;
 }
 FUNC_12(VAR_10, VAR_4, VAR_15);

 FUNC_11(&VAR_10->rx_lock, VAR_18);
}
