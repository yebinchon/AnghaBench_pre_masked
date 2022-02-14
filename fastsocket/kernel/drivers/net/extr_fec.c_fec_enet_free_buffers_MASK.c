
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dev; } ;
struct fec_enet_private {int * tx_bounce; struct bufdesc* tx_bd_base; struct sk_buff** rx_skbuff; struct bufdesc* rx_bd_base; } ;
struct bufdesc {scalar_t__ cbd_bufaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;
 struct fec_enet_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct fec_enet_private *VAR_5 = FUNC_3(VAR_4);
 int VAR_6;
 struct sk_buff *VAR_7;
 struct bufdesc *VAR_8;

 VAR_8 = VAR_5->rx_bd_base;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_7 = VAR_5->rx_skbuff[VAR_6];

  if (VAR_8->cbd_bufaddr)
   FUNC_1(&VAR_4->dev, VAR_8->cbd_bufaddr,
     VAR_1, VAR_0);
  if (VAR_7)
   FUNC_0(VAR_7);
  VAR_8++;
 }

 VAR_8 = VAR_5->tx_bd_base;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
  FUNC_2(VAR_5->tx_bounce[VAR_6]);
}
