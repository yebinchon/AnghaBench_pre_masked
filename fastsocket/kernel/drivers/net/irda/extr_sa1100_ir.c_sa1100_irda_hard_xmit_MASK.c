
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int truesize; int data; int len; int head; } ;
struct sa1100_irda {int speed; int newspeed; int hscr0; int txbuf_dma; int txdma; int dev; struct sk_buff* txskb; TYPE_1__ tx_buff; } ;
struct net_device {int trans_start; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sa1100_irda*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int VAR_8 ;
 struct sa1100_irda* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sa1100_irda*,int) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct sa1100_irda *VAR_11 = FUNC_7(VAR_10);
 int VAR_12 = FUNC_6(VAR_9);






 if (VAR_12 != VAR_11->speed && VAR_12 != -1)
  VAR_11->newspeed = VAR_12;




 if (VAR_9->len == 0) {
  if (VAR_11->newspeed) {
   VAR_11->newspeed = 0;
   FUNC_9(VAR_11, VAR_12);
  }
  FUNC_3(VAR_9);
  return VAR_3;
 }

 if (!FUNC_1(VAR_11)) {
  FUNC_8(VAR_10);

  VAR_11->tx_buff.data = VAR_11->tx_buff.head;
  VAR_11->tx_buff.len = FUNC_2(VAR_9, VAR_11->tx_buff.data,
        VAR_11->tx_buff.truesize);







  VAR_5 = VAR_6 | VAR_7;

  FUNC_3(VAR_9);
 } else {
  int VAR_13 = FUNC_5(VAR_9);




  FUNC_0(VAR_11->txskb);

  FUNC_8(VAR_10);

  VAR_11->txskb = VAR_9;
  VAR_11->txbuf_dma = FUNC_4(VAR_11->dev, VAR_9->data,
      VAR_9->len, VAR_0);

  FUNC_10(VAR_11->txdma, VAR_11->txbuf_dma, VAR_9->len);






  if (VAR_13)
   FUNC_11(VAR_13);

  VAR_4 = VAR_11->hscr0 | VAR_1 | VAR_2;
 }

 VAR_10->trans_start = VAR_8;

 return VAR_3;
}
