
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int irq; } ;
struct meth_private {int dma_ctrl; } ;
struct TYPE_3__ {int dma_ctrl; } ;
struct TYPE_4__ {TYPE_1__ eth; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,struct net_device*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (struct meth_private*) ;
 int FUNC_3 (struct meth_private*) ;
 struct meth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5)
{
 struct meth_private *VAR_6 = FUNC_4(VAR_5);

 FUNC_0("Stopping queue\n");
 FUNC_5(VAR_5);

 VAR_6->dma_ctrl &= ~(VAR_2 | VAR_3 |
       VAR_0 | VAR_1);
 VAR_4->eth.dma_ctrl = VAR_6->dma_ctrl;
 FUNC_1(VAR_5->irq, VAR_5);
 FUNC_3(VAR_6);
 FUNC_2(VAR_6);

 return 0;
}
