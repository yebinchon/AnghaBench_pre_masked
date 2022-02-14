
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s2io_nic {TYPE_1__* pdev; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int irq; } ;


 int FUNC_0 (int ,struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct s2io_nic *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_0->pdev->irq, VAR_1);
}
