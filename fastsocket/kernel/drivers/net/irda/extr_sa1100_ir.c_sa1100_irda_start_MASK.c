
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_irda {int speed; int open; int rxdma; int txdma; int irlap; int qos; } ;
struct net_device {int irq; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (struct net_device*,int *,char*) ;
 struct sa1100_irda* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_3 ;
 int FUNC_6 (int ,int ,int ,int ,struct net_device*) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (struct sa1100_irda*) ;
 int FUNC_9 (struct sa1100_irda*) ;
 int * VAR_5 ;
 int FUNC_10 (int ,char*,int *,struct net_device*,int *) ;
 int FUNC_11 (struct sa1100_irda*,int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_6)
{
 struct sa1100_irda *VAR_7 = FUNC_4(VAR_6);
 int VAR_8;

 VAR_7->speed = 9600;

 VAR_8 = FUNC_6(VAR_6->irq, VAR_4, 0, VAR_6->name, VAR_6);
 if (VAR_8)
  goto err_irq;

 VAR_8 = FUNC_10(VAR_0, "IrDA receive",
     ((void*)0), ((void*)0), &VAR_7->rxdma);
 if (VAR_8)
  goto err_rx_dma;

 VAR_8 = FUNC_10(VAR_1, "IrDA transmit",
     VAR_5, VAR_6, &VAR_7->txdma);
 if (VAR_8)
  goto err_tx_dma;




 FUNC_0(VAR_6->irq);




 VAR_8 = FUNC_9(VAR_7);
 if (VAR_8)
  goto err_startup;




 VAR_7->irlap = FUNC_3(VAR_6, &VAR_7->qos, "sa1100");
 VAR_8 = -VAR_2;
 if (!VAR_7->irlap)
  goto err_irlap;




 VAR_7->open = 1;
 FUNC_11(VAR_7, VAR_3);
 FUNC_1(VAR_6->irq);
 FUNC_5(VAR_6);
 return 0;

err_irlap:
 VAR_7->open = 0;
 FUNC_8(VAR_7);
err_startup:
 FUNC_7(VAR_7->txdma);
err_tx_dma:
 FUNC_7(VAR_7->rxdma);
err_rx_dma:
 FUNC_2(VAR_6->irq, VAR_6);
err_irq:
 return VAR_8;
}
