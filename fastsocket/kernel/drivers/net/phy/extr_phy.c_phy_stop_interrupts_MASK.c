
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int irq; int irq_disable; int phy_queue; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct phy_device*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;

int FUNC_6(struct phy_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_4(VAR_0);

 if (VAR_1)
  FUNC_5(VAR_0);

 FUNC_3(VAR_0->irq, VAR_0);







 FUNC_1(&VAR_0->phy_queue);





 while (FUNC_0(&VAR_0->irq_disable) >= 0)
  FUNC_2(VAR_0->irq);

 return VAR_1;
}
