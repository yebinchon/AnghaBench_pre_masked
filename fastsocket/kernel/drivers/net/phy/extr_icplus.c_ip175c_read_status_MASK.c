
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int addr; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct phy_device *VAR_1)
{
 if (VAR_1->addr == 4)
  FUNC_0(VAR_1);
 else

  VAR_1->irq = VAR_0;

 return 0;
}
