
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct txbd8 {int lstatus; int length; int bufPtr; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct gfar_private {int tx_ring_size; int skb_dirtytx; scalar_t__ rx_ring_size; int num_txbdfree; struct txbd8* dirty_tx; struct sk_buff** tx_skbuff; int rx_recycle; scalar_t__ rx_buffer_size; TYPE_1__* ofdev; struct txbd8* tx_bd_base; } ;
struct TYPE_6__ {int nr_frags; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 struct gfar_private* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 struct txbd8* FUNC_9 (struct txbd8*,struct txbd8*,int) ;
 scalar_t__ FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct sk_buff*,scalar_t__) ;
 TYPE_3__* FUNC_12 (struct sk_buff*) ;
 struct txbd8* FUNC_13 (struct txbd8*,int,struct txbd8*,int) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_5)
{
 struct gfar_private *VAR_6 = FUNC_6(VAR_5);
 struct txbd8 *VAR_7;
 struct txbd8 *VAR_8 = ((void*)0);
 struct txbd8 *VAR_9 = VAR_6->tx_bd_base;
 struct sk_buff *VAR_10;
 int VAR_11;
 int VAR_12 = VAR_6->tx_ring_size;
 int VAR_13 = 0;
 int VAR_14;
 int VAR_15 = 0;
 u32 VAR_16;

 VAR_7 = VAR_6->dirty_tx;
 VAR_11 = VAR_6->skb_dirtytx;

 while ((VAR_10 = VAR_6->tx_skbuff[VAR_11])) {
  VAR_13 = FUNC_12(VAR_10)->nr_frags;
  VAR_8 = FUNC_13(VAR_7, VAR_13, VAR_9, VAR_12);

  VAR_16 = VAR_8->lstatus;


  if ((VAR_16 & FUNC_0(VAR_3)) &&
    (VAR_16 & VAR_0))
   break;

  FUNC_5(&VAR_6->ofdev->dev,
    VAR_7->bufPtr,
    VAR_7->length,
    VAR_1);

  VAR_7->lstatus &= FUNC_0(VAR_4);
  VAR_7 = FUNC_9(VAR_7, VAR_9, VAR_12);

  for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
   FUNC_4(&VAR_6->ofdev->dev,
     VAR_7->bufPtr,
     VAR_7->length,
     VAR_1);
   VAR_7->lstatus &= FUNC_0(VAR_4);
   VAR_7 = FUNC_9(VAR_7, VAR_9, VAR_12);
  }





  if (FUNC_10(&VAR_6->rx_recycle) < VAR_6->rx_ring_size &&
    FUNC_11(VAR_10, VAR_6->rx_buffer_size +
     VAR_2))
   FUNC_2(&VAR_6->rx_recycle, VAR_10);
  else
   FUNC_3(VAR_10);

  VAR_6->tx_skbuff[VAR_11] = ((void*)0);

  VAR_11 = (VAR_11 + 1) &
   FUNC_1(VAR_12);

  VAR_15++;
  VAR_6->num_txbdfree += VAR_13 + 1;
 }


 if (FUNC_7(VAR_5) && VAR_6->num_txbdfree)
  FUNC_8(VAR_5);


 VAR_6->skb_dirtytx = VAR_11;
 VAR_6->dirty_tx = VAR_7;

 VAR_5->stats.tx_packets += VAR_15;

 return VAR_15;
}
