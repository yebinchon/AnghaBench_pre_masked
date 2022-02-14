
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct sa1100_irda {int txbuf_dma; int dev; scalar_t__ newspeed; struct sk_buff* txskb; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 struct sa1100_irda* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sa1100_irda*) ;
 int FUNC_6 (struct sa1100_irda*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct sa1100_irda *VAR_7 = FUNC_2(VAR_6);
 struct sk_buff *VAR_8 = VAR_7->txskb;

 VAR_7->txskb = ((void*)0);






 do
  FUNC_4();
 while (!(VAR_3 & VAR_1) || VAR_4 & VAR_2);




 VAR_3 = VAR_1;






 if (VAR_7->newspeed) {
  FUNC_6(VAR_7, VAR_7->newspeed);
  VAR_7->newspeed = 0;
 }





 FUNC_5(VAR_7);




 if (VAR_8) {
  FUNC_1(VAR_7->dev, VAR_7->txbuf_dma, VAR_8->len, VAR_0);
  VAR_6->stats.tx_packets ++;
  VAR_6->stats.tx_bytes += VAR_8->len;
  FUNC_0(VAR_8);
 }





 FUNC_3(VAR_6);
}
