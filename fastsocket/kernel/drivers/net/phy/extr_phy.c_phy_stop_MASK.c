
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ state; scalar_t__ irq; int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int ) ;

void FUNC_4(struct phy_device *VAR_3)
{
 FUNC_0(&VAR_3->lock);

 if (VAR_0 == VAR_3->state)
  goto out_unlock;

 if (VAR_3->irq != VAR_2) {

  FUNC_3(VAR_3, VAR_1);


  FUNC_2(VAR_3);
 }

 VAR_3->state = VAR_0;

out_unlock:
 FUNC_1(&VAR_3->lock);






}
