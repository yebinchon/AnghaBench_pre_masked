
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_irda {int rxdma; int txdma; scalar_t__ open; int * irlap; int * rxskb; int rxbuf_dma; int dev; } ;
struct net_device {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,struct net_device*) ;
 int FUNC_4 (int *) ;
 struct sa1100_irda* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sa1100_irda*) ;
 int FUNC_9 (struct sa1100_irda*,int ) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_2)
{
 struct sa1100_irda *VAR_3 = FUNC_5(VAR_2);

 FUNC_1(VAR_2->irq);
 FUNC_8(VAR_3);





 if (VAR_3->rxskb) {
  FUNC_2(VAR_3->dev, VAR_3->rxbuf_dma, VAR_1,
     VAR_0);
  FUNC_0(VAR_3->rxskb);
  VAR_3->rxskb = ((void*)0);
 }


 if (VAR_3->irlap) {
  FUNC_4(VAR_3->irlap);
  VAR_3->irlap = ((void*)0);
 }

 FUNC_6(VAR_2);
 VAR_3->open = 0;




 FUNC_7(VAR_3->txdma);
 FUNC_7(VAR_3->rxdma);
 FUNC_3(VAR_2->irq, VAR_2);

 FUNC_9(VAR_3, 0);

 return 0;
}
