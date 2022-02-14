
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * driver; } ;
struct phy_device {TYPE_2__ dev; int * attached_dev; } ;
struct TYPE_3__ {int driver; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(struct phy_device *VAR_1)
{
 VAR_1->attached_dev = ((void*)0);





 if (VAR_1->dev.driver == &VAR_0.driver)
  FUNC_0(&VAR_1->dev);
}
