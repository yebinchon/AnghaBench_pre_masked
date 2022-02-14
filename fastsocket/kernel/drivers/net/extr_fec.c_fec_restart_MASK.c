
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fec_enet_private {int bd_dma; int full_duplex; int phy_speed; scalar_t__ hwp; struct bufdesc* tx_bd_base; struct bufdesc* rx_bd_base; int ** tx_skbuff; scalar_t__ skb_dirty; scalar_t__ skb_cur; struct bufdesc* cur_rx; struct bufdesc* cur_tx; struct bufdesc* dirty_tx; } ;
struct bufdesc {int cbd_sc; scalar_t__ cbd_bufaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int *) ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_24, int VAR_25)
{
 struct fec_enet_private *VAR_26 = FUNC_1(VAR_24);
 struct bufdesc *VAR_27;
 int VAR_28;


 FUNC_3(1, VAR_26->hwp + VAR_2);
 FUNC_2(10);


 FUNC_3(0xffc00000, VAR_26->hwp + VAR_10);


 FUNC_3(0, VAR_26->hwp + VAR_6);
 FUNC_3(0, VAR_26->hwp + VAR_7);

 FUNC_3(0, VAR_26->hwp + VAR_8);
 FUNC_3(0, VAR_26->hwp + VAR_9);



 FUNC_3(VAR_20, VAR_26->hwp + VAR_13);


 FUNC_3(VAR_26->bd_dma, VAR_26->hwp + VAR_16);
 FUNC_3((unsigned long)VAR_26->bd_dma + sizeof(struct bufdesc) * VAR_21,
   VAR_26->hwp + VAR_18);

 VAR_26->dirty_tx = VAR_26->cur_tx = VAR_26->tx_bd_base;
 VAR_26->cur_rx = VAR_26->rx_bd_base;


 VAR_26->skb_cur = VAR_26->skb_dirty = 0;
 for (VAR_28 = 0; VAR_28 <= VAR_22; VAR_28++) {
  if (VAR_26->tx_skbuff[VAR_28]) {
   FUNC_0(VAR_26->tx_skbuff[VAR_28]);
   VAR_26->tx_skbuff[VAR_28] = ((void*)0);
  }
 }


 VAR_27 = VAR_26->rx_bd_base;
 for (VAR_28 = 0; VAR_28 < VAR_21; VAR_28++) {


  VAR_27->cbd_sc = VAR_0;
  VAR_27++;
 }


 VAR_27--;
 VAR_27->cbd_sc |= VAR_1;


 VAR_27 = VAR_26->tx_bd_base;
 for (VAR_28 = 0; VAR_28 < VAR_23; VAR_28++) {


  VAR_27->cbd_sc = 0;
  VAR_27->cbd_bufaddr = 0;
  VAR_27++;
 }


 VAR_27--;
 VAR_27->cbd_sc |= VAR_1;


 if (VAR_25) {

  FUNC_3(VAR_19 | 0x04, VAR_26->hwp + VAR_14);
  FUNC_3(0x04, VAR_26->hwp + VAR_17);
 } else {

  FUNC_3(VAR_19 | 0x06, VAR_26->hwp + VAR_14);
  FUNC_3(0x0, VAR_26->hwp + VAR_17);
 }
 VAR_26->full_duplex = VAR_25;


 FUNC_3(VAR_26->phy_speed, VAR_26->hwp + VAR_12);


 FUNC_3(2, VAR_26->hwp + VAR_2);
 FUNC_3(0, VAR_26->hwp + VAR_15);


 FUNC_3(VAR_5 | VAR_4 | VAR_3,
   VAR_26->hwp + VAR_11);
}
