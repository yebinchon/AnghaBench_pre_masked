
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct net_device {int dev; } ;
struct fec_enet_private {int * tx_bounce; struct bufdesc* tx_bd_base; struct sk_buff** rx_skbuff; struct bufdesc* rx_bd_base; } ;
struct bufdesc {int cbd_sc; scalar_t__ cbd_bufaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 struct fec_enet_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_9)
{
 struct fec_enet_private *VAR_10 = FUNC_4(VAR_9);
 int VAR_11;
 struct sk_buff *VAR_12;
 struct bufdesc *VAR_13;

 VAR_13 = VAR_10->rx_bd_base;
 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  VAR_12 = FUNC_0(VAR_4);
  if (!VAR_12) {
   FUNC_2(VAR_9);
   return -VAR_3;
  }
  VAR_10->rx_skbuff[VAR_11] = VAR_12;

  VAR_13->cbd_bufaddr = FUNC_1(&VAR_9->dev, VAR_12->data,
    VAR_4, VAR_2);
  VAR_13->cbd_sc = VAR_0;
  VAR_13++;
 }


 VAR_13--;
 VAR_13->cbd_sc |= VAR_1;

 VAR_13 = VAR_10->tx_bd_base;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_10->tx_bounce[VAR_11] = FUNC_3(VAR_5, VAR_6);

  VAR_13->cbd_sc = 0;
  VAR_13->cbd_bufaddr = 0;
  VAR_13++;
 }


 VAR_13--;
 VAR_13->cbd_sc |= VAR_1;

 return 0;
}
