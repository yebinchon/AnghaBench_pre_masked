
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct korina_private {int tx_dma_regs; int rx_dma_regs; int eth_regs; } ;
struct korina_device {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct korina_private* FUNC_2 (int ) ;
 struct korina_device* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct korina_device *VAR_1 = FUNC_3(VAR_0);
 struct korina_private *VAR_2 = FUNC_2(VAR_1->dev);

 FUNC_1(VAR_2->eth_regs);
 FUNC_1(VAR_2->rx_dma_regs);
 FUNC_1(VAR_2->tx_dma_regs);

 FUNC_4(VAR_0, ((void*)0));
 FUNC_5(VAR_1->dev);
 FUNC_0(VAR_1->dev);

 return 0;
}
