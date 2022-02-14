
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct korina_private {int lock; TYPE_1__* eth_regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ethintfc; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,unsigned int) ;
 struct korina_private* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 struct korina_private *VAR_5 = FUNC_1(VAR_4);
 unsigned int VAR_6;

 FUNC_3(&VAR_5->lock);

 VAR_6 = FUNC_2(&VAR_5->eth_regs->ethintfc);

 if (VAR_6 & VAR_0)
  FUNC_0(VAR_4, VAR_6 & ~VAR_0);

 FUNC_4(&VAR_5->lock);

 return VAR_1;
}
