
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct korina_private {int rx_irq; TYPE_1__* eth_regs; } ;
struct TYPE_2__ {int miimrdd; int miimcmd; int miimaddr; int miimcfg; } ;


 int VAR_0 ;
 struct korina_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, int VAR_2, int VAR_3)
{
 struct korina_private *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 VAR_2 = ((VAR_4->rx_irq == 0x2c ? 1 : 0) << 8);

 FUNC_2(0, &VAR_4->eth_regs->miimcfg);
 FUNC_2(0, &VAR_4->eth_regs->miimcmd);
 FUNC_2(VAR_2 | VAR_3, &VAR_4->eth_regs->miimaddr);
 FUNC_2(VAR_0, &VAR_4->eth_regs->miimcmd);

 VAR_5 = (int)(FUNC_1(&VAR_4->eth_regs->miimrdd));
 return VAR_5;
}
