
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ state; int phy_queue; int irq_disable; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct phy_device *VAR_5 = VAR_4;

 if (VAR_2 == VAR_5->state)
  return VAR_1;





 FUNC_1(VAR_3);
 FUNC_0(&VAR_5->irq_disable);

 FUNC_2(&VAR_5->phy_queue);

 return VAR_0;
}
