
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ irq; int * adjust_link; } ;


 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;

void FUNC_3(struct phy_device *VAR_0)
{
 if (VAR_0->irq > 0)
  FUNC_1(VAR_0);

 FUNC_2(VAR_0);

 VAR_0->adjust_link = ((void*)0);

 FUNC_0(VAR_0);
}
